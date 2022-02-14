
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* lobjfuncs; int errorMessage; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_11__ {int isint; int len; TYPE_1__ u; } ;
struct TYPE_10__ {scalar_t__ fn_lo_create; } ;
typedef TYPE_3__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_4__ PGconn ;
typedef int Oid ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_4__*,scalar_t__,int*,int*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ) ;

Oid
FUNC_6(PGconn *VAR_2, Oid VAR_3)
{
 PQArgBlock VAR_4[1];
 PGresult *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0) || VAR_2->lobjfuncs == ((void*)0))
 {
  if (FUNC_4(VAR_2) < 0)
   return VAR_0;
 }


 if (VAR_2->lobjfuncs->fn_lo_create == 0)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_3("cannot determine OID of function lo_create\n"));
  return VAR_0;
 }

 VAR_4[0].isint = 1;
 VAR_4[0].len = 4;
 VAR_4[0].u.integer = VAR_3;
 VAR_5 = FUNC_1(VAR_2, VAR_2->lobjfuncs->fn_lo_create,
      &VAR_6, &VAR_7, 1, VAR_4, 1);
 if (FUNC_2(VAR_5) == VAR_1)
 {
  FUNC_0(VAR_5);
  return (Oid) VAR_6;
 }
 else
 {
  FUNC_0(VAR_5);
  return VAR_0;
 }
}
