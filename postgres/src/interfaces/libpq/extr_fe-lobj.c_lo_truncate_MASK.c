
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
struct TYPE_10__ {scalar_t__ fn_lo_truncate; } ;
typedef TYPE_3__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_4__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_4__*,scalar_t__,int*,int*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int ) ;

int
FUNC_6(PGconn *VAR_2, int VAR_3, size_t VAR_4)
{
 PQArgBlock VAR_5[2];
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_2 == ((void*)0) || VAR_2->lobjfuncs == ((void*)0))
 {
  if (FUNC_4(VAR_2) < 0)
   return -1;
 }


 if (VAR_2->lobjfuncs->fn_lo_truncate == 0)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_3("cannot determine OID of function lo_truncate\n"));
  return -1;
 }
 if (VAR_4 > (size_t) VAR_0)
 {
  FUNC_5(&VAR_2->errorMessage,
        FUNC_3("argument of lo_truncate exceeds integer range\n"));
  return -1;
 }

 VAR_5[0].isint = 1;
 VAR_5[0].len = 4;
 VAR_5[0].u.integer = VAR_3;

 VAR_5[1].isint = 1;
 VAR_5[1].len = 4;
 VAR_5[1].u.integer = (int) VAR_4;

 VAR_6 = FUNC_1(VAR_2, VAR_2->lobjfuncs->fn_lo_truncate,
      &VAR_7, &VAR_8, 1, VAR_5, 2);

 if (FUNC_2(VAR_6) == VAR_1)
 {
  FUNC_0(VAR_6);
  return VAR_7;
 }
 else
 {
  FUNC_0(VAR_6);
  return -1;
 }
}
