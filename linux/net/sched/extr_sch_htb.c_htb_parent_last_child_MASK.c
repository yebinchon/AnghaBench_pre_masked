
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htb_class {TYPE_1__* parent; } ;
struct TYPE_2__ {int children; } ;



__attribute__((used)) static inline int FUNC_0(struct htb_class *VAR_0)
{
 if (!VAR_0->parent)

  return 0;
 if (VAR_0->parent->children > 1)

  return 0;
 return 1;
}
