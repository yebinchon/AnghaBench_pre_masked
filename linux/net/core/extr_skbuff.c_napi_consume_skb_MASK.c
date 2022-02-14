
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ fclone; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct sk_buff *VAR_1, int VAR_2)
{
 if (FUNC_5(!VAR_1))
  return;


 if (FUNC_5(!VAR_2)) {
  FUNC_2(VAR_1);
  return;
 }

 if (!FUNC_3(VAR_1))
  return;


 FUNC_4(VAR_1);


 if (VAR_1->fclone != VAR_0) {
  FUNC_0(VAR_1);
  return;
 }

 FUNC_1(VAR_1);
}
