
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TypeName ;
typedef int Type ;
struct TYPE_2__ {int oid; } ;
typedef int ParseState ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_type ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,int *) ;

Oid
FUNC_3(ParseState *VAR_0, const TypeName *VAR_1)
{
 Oid VAR_2;
 Type VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0));
 VAR_2 = ((Form_pg_type) FUNC_0(VAR_3))->oid;
 FUNC_1(VAR_3);

 return VAR_2;
}
