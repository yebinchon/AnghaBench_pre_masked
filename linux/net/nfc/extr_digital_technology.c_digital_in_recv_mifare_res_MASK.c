
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

int FUNC_2(struct sk_buff *VAR_4)
{





 if (VAR_4->len == VAR_2 + VAR_0) {
  if (FUNC_1(VAR_4)) {
   FUNC_0("9.4.1.2");
   return -VAR_3;
  }

  return 0;
 }


 if (VAR_4->len == 1 && VAR_4->data[0] == VAR_1) {
  VAR_4->data[0] = 0;
  return 0;
 }


 return -VAR_3;
}
