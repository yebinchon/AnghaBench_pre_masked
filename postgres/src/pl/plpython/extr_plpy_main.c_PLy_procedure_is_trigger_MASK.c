
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prorettype; scalar_t__ pronargs; } ;
typedef TYPE_1__* Form_pg_proc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(Form_pg_proc VAR_2)
{
 return (VAR_2->prorettype == VAR_1 ||
   (VAR_2->prorettype == VAR_0 &&
    VAR_2->pronargs == 0));
}
