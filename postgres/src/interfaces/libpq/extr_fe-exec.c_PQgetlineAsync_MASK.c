
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pversion; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

int
FUNC_3(PGconn *VAR_0, char *VAR_1, int VAR_2)
{
 if (!VAR_0)
  return -1;

 if (FUNC_0(VAR_0->pversion) >= 3)
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
