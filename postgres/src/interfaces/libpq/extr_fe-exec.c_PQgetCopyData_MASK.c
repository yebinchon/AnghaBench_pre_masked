
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ asyncStatus; int pversion; int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char**,int) ;
 int FUNC_3 (TYPE_1__*,char**,int) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(PGconn *VAR_2, char **VAR_3, int VAR_4)
{
 *VAR_3 = ((void*)0);
 if (!VAR_2)
  return -2;
 if (VAR_2->asyncStatus != VAR_1 &&
  VAR_2->asyncStatus != VAR_0)
 {
  FUNC_4(&VAR_2->errorMessage,
        FUNC_1("no COPY in progress\n"));
  return -2;
 }
 if (FUNC_0(VAR_2->pversion) >= 3)
  return FUNC_3(VAR_2, VAR_3, VAR_4);
 else
  return FUNC_2(VAR_2, VAR_3, VAR_4);
}
