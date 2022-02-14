
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct msghdr {int dummy; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct msghdr*,int ,int ,int,int *) ;
 int FUNC_2 (struct sk_buff*,int,int,int ) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct msghdr *VAR_3, struct sk_buff *VAR_4,
      int VAR_5, int VAR_6)
{
 __wsum VAR_7 = VAR_4->csum;

 if (VAR_4->ip_summed != VAR_0)
  return;

 if (VAR_6 != 0) {
  int VAR_8 = FUNC_3(VAR_4) + VAR_5;
  VAR_7 = FUNC_0(VAR_7, FUNC_2(VAR_4, VAR_8, VAR_6, 0));
 }

 FUNC_1(VAR_3, VAR_2, VAR_1, sizeof(__wsum), &VAR_7);
}
