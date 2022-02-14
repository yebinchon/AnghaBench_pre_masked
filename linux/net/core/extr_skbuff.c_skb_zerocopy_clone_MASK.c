
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, struct sk_buff *VAR_4,
         gfp_t VAR_5)
{
 if (FUNC_3(VAR_4)) {
  if (FUNC_3(VAR_3)) {

   if (!VAR_5) {
    FUNC_0(1);
    return -VAR_1;
   }
   if (FUNC_2(VAR_3) == FUNC_2(VAR_4))
    return 0;
   if (FUNC_1(VAR_3, VAR_2))
    return -VAR_0;
  }
  FUNC_4(VAR_3, FUNC_2(VAR_4), ((void*)0));
 }
 return 0;
}
