
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smc_user_pnetentry {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct smc_user_pnetentry*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
        u32 VAR_5, u32 VAR_6, u32 VAR_7,
        struct smc_user_pnetentry *VAR_8)
{
 void *VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_3,
     VAR_7, VAR_2);
 if (!VAR_9)
  return -VAR_1;
 if (FUNC_3(VAR_4, VAR_8) < 0) {
  FUNC_0(VAR_4, VAR_9);
  return -VAR_0;
 }
 FUNC_1(VAR_4, VAR_9);
 return 0;
}
