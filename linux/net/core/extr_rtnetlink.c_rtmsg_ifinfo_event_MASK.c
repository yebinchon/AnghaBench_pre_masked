
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ reg_state; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (int,struct net_device*,unsigned int,int ,int ,int*,int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1, struct net_device *VAR_2,
          unsigned int VAR_3, u32 VAR_4,
          gfp_t VAR_5, int *VAR_6, int VAR_7)
{
 struct sk_buff *VAR_8;

 if (VAR_2->reg_state != VAR_0)
  return;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7);
 if (VAR_8)
  FUNC_1(VAR_8, VAR_2, VAR_5);
}
