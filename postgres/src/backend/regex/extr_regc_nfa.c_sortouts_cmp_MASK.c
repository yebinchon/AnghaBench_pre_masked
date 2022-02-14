
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arc {scalar_t__ co; scalar_t__ type; TYPE_1__* to; } ;
struct TYPE_2__ {scalar_t__ no; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct arc *VAR_2 = *((const struct arc *const *) VAR_0);
 const struct arc *VAR_3 = *((const struct arc *const *) VAR_1);


 if (VAR_2->to->no < VAR_3->to->no)
  return -1;
 if (VAR_2->to->no > VAR_3->to->no)
  return 1;
 if (VAR_2->co < VAR_3->co)
  return -1;
 if (VAR_2->co > VAR_3->co)
  return 1;
 if (VAR_2->type < VAR_3->type)
  return -1;
 if (VAR_2->type > VAR_3->type)
  return 1;
 return 0;
}
