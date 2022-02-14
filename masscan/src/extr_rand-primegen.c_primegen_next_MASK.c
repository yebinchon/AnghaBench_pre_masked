
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {size_t num; int * p; } ;
typedef TYPE_1__ primegen ;


 int FUNC_0 (TYPE_1__*) ;

uint64_t FUNC_1(primegen *VAR_0)
{
  while (!VAR_0->num)
    FUNC_0(VAR_0);

  return VAR_0->p[--VAR_0->num];
}
