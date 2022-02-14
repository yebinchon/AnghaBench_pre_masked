
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* lobjfuncs; } ;
struct TYPE_9__ {int integer; } ;
struct TYPE_11__ {int isint; int len; TYPE_1__ u; } ;
struct TYPE_10__ {int fn_lo_lseek; } ;
typedef TYPE_3__ PQArgBlock ;
typedef int PGresult ;
typedef TYPE_4__ PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_4__*,int ,int*,int*,int,TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

int
FUNC_4(PGconn *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 PQArgBlock VAR_5[3];
 PGresult *VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_1 == ((void*)0) || VAR_1->lobjfuncs == ((void*)0))
 {
  if (FUNC_3(VAR_1) < 0)
   return -1;
 }

 VAR_5[0].isint = 1;
 VAR_5[0].len = 4;
 VAR_5[0].u.integer = VAR_2;

 VAR_5[1].isint = 1;
 VAR_5[1].len = 4;
 VAR_5[1].u.integer = VAR_3;

 VAR_5[2].isint = 1;
 VAR_5[2].len = 4;
 VAR_5[2].u.integer = VAR_4;

 VAR_6 = FUNC_1(VAR_1, VAR_1->lobjfuncs->fn_lo_lseek,
      &VAR_7, &VAR_8, 1, VAR_5, 3);
 if (FUNC_2(VAR_6) == VAR_0)
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
