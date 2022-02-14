
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct cbq_class {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,struct cbq_class*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct cbq_class*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cbq_class*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct cbq_class*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_0, struct cbq_class *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1) < 0 ||
     FUNC_2(VAR_0, VAR_1) < 0 ||
     FUNC_3(VAR_0, VAR_1) < 0 ||
     FUNC_0(VAR_0, VAR_1) < 0)
  return -1;
 return 0;
}
