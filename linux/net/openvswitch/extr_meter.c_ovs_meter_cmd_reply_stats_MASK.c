
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct ovs_flow_stats {int dummy; } ;
struct nlattr {int dummy; } ;
struct dp_meter_band {int stats; } ;
struct dp_meter {scalar_t__ n_bands; struct dp_meter_band* bands; int used; int stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8, u32 VAR_9,
         struct dp_meter *VAR_10)
{
 struct nlattr *VAR_11;
 struct dp_meter_band *VAR_12;
 u16 VAR_13;

 if (FUNC_3(VAR_8, VAR_4, VAR_9))
  goto error;

 if (!VAR_10)
  return 0;

 if (FUNC_2(VAR_8, VAR_6,
      sizeof(struct ovs_flow_stats), &VAR_10->stats) ||
     FUNC_4(VAR_8, VAR_7, VAR_10->used,
         VAR_5))
  goto error;

 VAR_11 = FUNC_1(VAR_8, VAR_3);
 if (!VAR_11)
  goto error;

 VAR_12 = VAR_10->bands;

 for (VAR_13 = 0; VAR_13 < VAR_10->n_bands; ++VAR_13, ++VAR_12) {
  struct nlattr *VAR_14;

  VAR_14 = FUNC_1(VAR_8, VAR_2);
  if (!VAR_14 || FUNC_2(VAR_8, VAR_1,
      sizeof(struct ovs_flow_stats),
      &VAR_12->stats))
   goto error;
  FUNC_0(VAR_8, VAR_14);
 }
 FUNC_0(VAR_8, VAR_11);

 return 0;
error:
 return -VAR_0;
}
