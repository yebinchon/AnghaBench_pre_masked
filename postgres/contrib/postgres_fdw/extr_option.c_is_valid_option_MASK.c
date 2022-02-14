
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ optcontext; scalar_t__ keyword; } ;
typedef TYPE_1__ PgFdwOption ;
typedef scalar_t__ Oid ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,char const*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_1, Oid VAR_2)
{
 PgFdwOption *VAR_3;

 FUNC_0(VAR_0);

 for (VAR_3 = VAR_0; VAR_3->keyword; VAR_3++)
 {
  if (VAR_2 == VAR_3->optcontext && FUNC_1(VAR_3->keyword, VAR_1) == 0)
   return 1;
 }

 return 0;
}
