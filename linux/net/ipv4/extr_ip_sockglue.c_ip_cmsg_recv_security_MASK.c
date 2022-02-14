
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct msghdr*,int ,int ,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char**,int *) ;
 int FUNC_3 (int *,struct sk_buff*,int *) ;

__attribute__((used)) static void FUNC_4(struct msghdr *VAR_2, struct sk_buff *VAR_3)
{
 char *VAR_4;
 u32 VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(((void*)0), VAR_3, &VAR_6);
 if (VAR_7)
  return;

 VAR_7 = FUNC_2(VAR_6, &VAR_4, &VAR_5);
 if (VAR_7)
  return;

 FUNC_0(VAR_2, VAR_1, VAR_0, VAR_5, VAR_4);
 FUNC_1(VAR_4, VAR_5);
}
