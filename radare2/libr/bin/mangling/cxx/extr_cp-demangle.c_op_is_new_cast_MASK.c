
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* op; } ;
struct TYPE_6__ {TYPE_2__ s_operator; } ;
struct demangle_component {TYPE_3__ u; } ;
struct TYPE_4__ {char* code; } ;



__attribute__((used)) static int
FUNC_0 (struct demangle_component *VAR_0)
{
  const char *VAR_1 = VAR_0->u.s_operator.op->code;
  return (VAR_1[1] == 'c'
   && (VAR_1[0] == 's' || VAR_1[0] == 'd'
       || VAR_1[0] == 'c' || VAR_1[0] == 'r'));
}
