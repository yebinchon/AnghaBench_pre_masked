
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32 ;
typedef int Type ;
struct TYPE_2__ {int typinput; } ;
typedef int Oid ;
typedef TYPE_1__* Form_pg_type ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int ) ;

Datum
FUNC_3(Type VAR_0, char *VAR_1, int32 VAR_2)
{
 Form_pg_type VAR_3 = (Form_pg_type) FUNC_0(VAR_0);
 Oid VAR_4 = VAR_3->typinput;
 Oid VAR_5 = FUNC_2(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_5, VAR_2);
}
