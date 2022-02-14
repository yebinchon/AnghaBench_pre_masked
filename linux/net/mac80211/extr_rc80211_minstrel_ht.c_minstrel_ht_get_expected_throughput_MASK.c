
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct minstrel_ht_sta {int* max_tp_rate; TYPE_2__* groups; } ;
struct minstrel_ht_sta_priv {int is_ht; struct minstrel_ht_sta ht; } ;
struct TYPE_6__ {int (* get_expected_throughput ) (void*) ;} ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct TYPE_4__ {int prob_ewma; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct minstrel_ht_sta*,int,int,int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_3)
{
 struct minstrel_ht_sta_priv *VAR_4 = VAR_3;
 struct minstrel_ht_sta *VAR_5 = &VAR_4->ht;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if (!VAR_4->is_ht)
  return VAR_2.get_expected_throughput(VAR_3);

 VAR_6 = VAR_5->max_tp_rate[0] / VAR_1;
 VAR_7 = VAR_5->max_tp_rate[0] % VAR_1;
 VAR_8 = VAR_5->groups[VAR_6].rates[VAR_7].prob_ewma;


 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8) * 10;
 VAR_9 = VAR_9 * VAR_0 * 8 / 1024;

 return VAR_9;
}
