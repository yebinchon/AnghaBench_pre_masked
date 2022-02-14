
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ keyword; scalar_t__ is_libpq_opt; } ;
typedef TYPE_1__ PgFdwOption ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1)
{
 PgFdwOption *VAR_2;

 FUNC_0(VAR_0);

 for (VAR_2 = VAR_0; VAR_2->keyword; VAR_2++)
 {
  if (VAR_2->is_libpq_opt && FUNC_1(VAR_2->keyword, VAR_1) == 0)
   return 1;
 }

 return 0;
}
