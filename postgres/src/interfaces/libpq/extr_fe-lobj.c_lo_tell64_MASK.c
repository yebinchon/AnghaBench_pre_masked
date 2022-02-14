
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pg_int64 ;
struct TYPE_12__ {TYPE_2__* lobjfuncs; int errorMessage; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_11__ {int isint; int len; TYPE_1__ u; } ;
struct TYPE_10__ {scalar_t__ fn_lo_tell64; } ;
typedef TYPE_3__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_4__ PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_4__*,scalar_t__,void*,int*,int ,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;

pg_int64
FUNC_7(PGconn *VAR_1, int VAR_2)
{
 pg_int64 VAR_3;
 PQArgBlock VAR_4[1];
 PGresult *VAR_5;
 int VAR_6;

 if (VAR_1 == ((void*)0) || VAR_1->lobjfuncs == ((void*)0))
 {
  if (FUNC_4(VAR_1) < 0)
   return -1;
 }

 if (VAR_1->lobjfuncs->fn_lo_tell64 == 0)
 {
  FUNC_6(&VAR_1->errorMessage,
        FUNC_3("cannot determine OID of function lo_tell64\n"));
  return -1;
 }

 VAR_4[0].isint = 1;
 VAR_4[0].len = 4;
 VAR_4[0].u.integer = VAR_2;

 VAR_5 = FUNC_1(VAR_1, VAR_1->lobjfuncs->fn_lo_tell64,
      (void *) &VAR_3, &VAR_6, 0, VAR_4, 1);
 if (FUNC_2(VAR_5) == VAR_0 && VAR_6 == 8)
 {
  FUNC_0(VAR_5);
  return FUNC_5(VAR_3);
 }
 else
 {
  FUNC_0(VAR_5);
  return -1;
 }
}
