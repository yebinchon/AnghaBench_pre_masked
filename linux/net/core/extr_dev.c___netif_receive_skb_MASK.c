
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0)
{
 int VAR_1;

 if (FUNC_3() && FUNC_4(VAR_0)) {
  unsigned int VAR_2;
  VAR_2 = FUNC_2();
  VAR_1 = FUNC_0(VAR_0, 1);
  FUNC_1(VAR_2);
 } else
  VAR_1 = FUNC_0(VAR_0, 0);

 return VAR_1;
}
