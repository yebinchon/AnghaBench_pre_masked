
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ adl_score; } ;
typedef TYPE_1__ avl_dbase ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 if (((const avl_dbase *) VAR_0)->adl_score == ((const avl_dbase *) VAR_1)->adl_score)
  return 0;
 else
  return (((const avl_dbase *) VAR_0)->adl_score < ((const avl_dbase *) VAR_1)->adl_score) ? 1 : -1;
}
