
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int type_t ;
struct TYPE_4__ {int * attrs; int * iface; } ;
typedef TYPE_1__ ifref_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static ifref_t *FUNC_1(type_t *VAR_0)
{
  ifref_t *VAR_1 = FUNC_0(sizeof(ifref_t));
  VAR_1->iface = VAR_0;
  VAR_1->attrs = ((void*)0);
  return VAR_1;
}
