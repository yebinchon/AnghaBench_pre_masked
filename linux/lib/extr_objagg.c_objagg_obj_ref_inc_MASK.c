
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_obj {unsigned int refcount; } ;



__attribute__((used)) static unsigned int FUNC_0(struct objagg_obj *VAR_0)
{
 return ++VAR_0->refcount;
}
