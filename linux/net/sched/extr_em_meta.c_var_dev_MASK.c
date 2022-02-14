
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ name; } ;
struct meta_obj {unsigned long value; int len; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct net_device *VAR_0, struct meta_obj *VAR_1)
{
 if (FUNC_1(VAR_0 == ((void*)0)))
  return -1;

 VAR_1->value = (unsigned long) VAR_0->name;
 VAR_1->len = FUNC_0(VAR_0->name);
 return 0;
}
