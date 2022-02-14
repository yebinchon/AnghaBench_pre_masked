
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cfg80211_pmsr_result {int type; scalar_t__ final; int ap_tsf; scalar_t__ ap_tsf_valid; int host_time; int status; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct cfg80211_pmsr_result*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_12,
        struct cfg80211_pmsr_result *VAR_13)
{
 struct nlattr *VAR_14, *VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19;

 VAR_14 = FUNC_3(VAR_12, VAR_2);
 if (!VAR_14)
  goto error;

 VAR_15 = FUNC_3(VAR_12, VAR_3);
 if (!VAR_15)
  goto error;

 VAR_16 = FUNC_3(VAR_12, 1);
 if (!VAR_16)
  goto error;

 if (FUNC_4(VAR_12, VAR_4, VAR_1, VAR_13->addr))
  goto error;

 VAR_17 = FUNC_3(VAR_12, VAR_5);
 if (!VAR_17)
  goto error;

 if (FUNC_6(VAR_12, VAR_11, VAR_13->status) ||
     FUNC_7(VAR_12, VAR_9,
         VAR_13->host_time, VAR_10))
  goto error;

 if (VAR_13->ap_tsf_valid &&
     FUNC_7(VAR_12, VAR_6,
         VAR_13->ap_tsf, VAR_10))
  goto error;

 if (VAR_13->final && FUNC_5(VAR_12, VAR_8))
  goto error;

 VAR_18 = FUNC_3(VAR_12, VAR_7);
 if (!VAR_18)
  goto error;

 VAR_19 = FUNC_3(VAR_12, VAR_13->type);
 if (!VAR_19)
  goto error;

 switch (VAR_13->type) {
 case 128:
  if (FUNC_1(VAR_12, VAR_13))
   goto error;
  break;
 default:
  FUNC_0(1);
 }

 FUNC_2(VAR_12, VAR_19);
 FUNC_2(VAR_12, VAR_18);
 FUNC_2(VAR_12, VAR_17);
 FUNC_2(VAR_12, VAR_16);
 FUNC_2(VAR_12, VAR_15);
 FUNC_2(VAR_12, VAR_14);

 return 0;
error:
 return -VAR_0;
}
