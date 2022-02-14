
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sw_flow {int id; int sf_acts; } ;
struct sk_buff {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int *,struct genl_info*,int,int ) ;
 int FUNC_3 (struct sw_flow const*,int,struct sk_buff*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_5(const struct sw_flow *VAR_0,
            int VAR_1,
            struct genl_info *VAR_2, u8 VAR_3,
            bool VAR_4, u32 VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(FUNC_4(VAR_0->sf_acts),
          &VAR_0->id, VAR_2, VAR_4, VAR_5);
 if (FUNC_1(VAR_6))
  return VAR_6;

 VAR_7 = FUNC_3(VAR_0, VAR_1, VAR_6,
     VAR_2->snd_portid, VAR_2->snd_seq, 0,
     VAR_3, VAR_5);
 FUNC_0(VAR_7 < 0);
 return VAR_6;
}
