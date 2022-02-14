
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sock; scalar_t__ asyncStatus; int pversion; int errorMessage; int * result; } ;
typedef int PQArgBlock ;
typedef int PGresult ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (TYPE_1__*,int,int*,int*,int,int const*,int) ;
 int * FUNC_3 (TYPE_1__*,int,int*,int*,int,int const*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

PGresult *
FUNC_6(PGconn *VAR_2,
  int VAR_3,
  int *VAR_4,
  int *VAR_5,
  int VAR_6,
  const PQArgBlock *VAR_7,
  int VAR_8)
{
 *VAR_5 = 0;

 if (!VAR_2)
  return ((void*)0);


 FUNC_5(&VAR_2->errorMessage);

 if (VAR_2->sock == VAR_1 || VAR_2->asyncStatus != VAR_0 ||
  VAR_2->result != ((void*)0))
 {
  FUNC_4(&VAR_2->errorMessage,
        FUNC_1("connection in wrong state\n"));
  return ((void*)0);
 }

 if (FUNC_0(VAR_2->pversion) >= 3)
  return FUNC_3(VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6,
          VAR_7, VAR_8);
 else
  return FUNC_2(VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_6,
          VAR_7, VAR_8);
}
