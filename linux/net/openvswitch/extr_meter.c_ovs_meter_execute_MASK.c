
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int n_packets; int n_bytes; } ;
struct dp_meter_band {long long burst_size; long long rate; int bucket; scalar_t__ type; TYPE_2__ stats; } ;
struct TYPE_3__ {int n_packets; int n_bytes; } ;
struct dp_meter {long long used; int max_delta_t; int n_bands; int lock; struct dp_meter_band* bands; scalar_t__ kbps; TYPE_1__ stats; } ;
struct datapath {int dummy; } ;


 scalar_t__ VAR_0 ;
 long long FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 struct dp_meter* FUNC_2 (struct datapath*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct datapath *VAR_1, struct sk_buff *VAR_2,
         struct sw_flow_key *VAR_3, u32 VAR_4)
{
 struct dp_meter *VAR_5;
 struct dp_meter_band *VAR_6;
 long long int VAR_7 = FUNC_0(FUNC_1(), 1000 * 1000);
 long long int VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11, VAR_12 = -1;
 u32 VAR_13 = 0;

 VAR_5 = FUNC_2(VAR_1, VAR_4);

 if (!VAR_5)
  return 0;


 FUNC_3(&VAR_5->lock);

 VAR_8 = (VAR_7 - VAR_5->used);




 VAR_9 = (VAR_8 > (long long int)VAR_5->max_delta_t)
     ? VAR_5->max_delta_t : (u32)VAR_8;



 VAR_5->used = VAR_7;
 VAR_5->stats.n_packets += 1;
 VAR_5->stats.n_bytes += VAR_2->len;
 VAR_10 = (VAR_5->kbps) ? VAR_2->len * 8 : 1000;


 for (VAR_11 = 0; VAR_11 < VAR_5->n_bands; ++VAR_11) {
  long long int VAR_14;

  VAR_6 = &VAR_5->bands[VAR_11];
  VAR_14 = (VAR_6->burst_size + VAR_6->rate) * 1000LL;

  VAR_6->bucket += VAR_9 * VAR_6->rate;
  if (VAR_6->bucket > VAR_14)
   VAR_6->bucket = VAR_14;

  if (VAR_6->bucket >= VAR_10) {
   VAR_6->bucket -= VAR_10;
  } else if (VAR_6->rate > VAR_13) {
   VAR_13 = VAR_6->rate;
   VAR_12 = VAR_11;
  }
 }

 if (VAR_12 >= 0) {

  VAR_6 = &VAR_5->bands[VAR_12];
  VAR_6->stats.n_packets += 1;
  VAR_6->stats.n_bytes += VAR_2->len;


  if (VAR_6->type == VAR_0) {
   FUNC_4(&VAR_5->lock);
   return 1;
  }
 }

 FUNC_4(&VAR_5->lock);
 return 0;
}
