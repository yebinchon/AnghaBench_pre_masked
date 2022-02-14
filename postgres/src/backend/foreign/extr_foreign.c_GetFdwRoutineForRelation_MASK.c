
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * rd_fdwroutine; } ;
typedef TYPE_1__* Relation ;
typedef int FdwRoutine ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (int) ;

FdwRoutine *
FUNC_5(Relation VAR_1, bool VAR_2)
{
 FdwRoutine *VAR_3;
 FdwRoutine *VAR_4;

 if (VAR_1->rd_fdwroutine == ((void*)0))
 {

  VAR_3 = FUNC_0(FUNC_2(VAR_1));


  VAR_4 = (FdwRoutine *) FUNC_1(VAR_0,
              sizeof(FdwRoutine));
  FUNC_3(VAR_4, VAR_3, sizeof(FdwRoutine));
  VAR_1->rd_fdwroutine = VAR_4;


  return VAR_3;
 }


 if (VAR_2)
 {
  VAR_3 = (FdwRoutine *) FUNC_4(sizeof(FdwRoutine));
  FUNC_3(VAR_3, VAR_1->rd_fdwroutine, sizeof(FdwRoutine));
  return VAR_3;
 }


 return VAR_1->rd_fdwroutine;
}
