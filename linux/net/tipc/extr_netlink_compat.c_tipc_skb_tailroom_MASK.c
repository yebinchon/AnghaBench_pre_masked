
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1)
{
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 VAR_3 = VAR_0 - VAR_1->len;

 if (VAR_2 < VAR_3)
  return VAR_2;

 return VAR_3;
}
