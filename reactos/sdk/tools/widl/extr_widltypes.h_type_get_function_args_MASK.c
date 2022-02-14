
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int var_list_t ;
struct TYPE_6__ {TYPE_1__* function; } ;
struct TYPE_7__ {TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
struct TYPE_5__ {int * args; } ;



__attribute__((used)) static inline var_list_t *FUNC_0(const type_t *VAR_0)
{
  return VAR_0->details.function->args;
}
