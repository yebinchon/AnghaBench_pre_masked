
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pversion; } ;
typedef TYPE_1__ PGconn ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;

int
FUNC_3(PGconn *VAR_1, char *VAR_2, int VAR_3)
{
 if (!VAR_2 || VAR_3 <= 0)
  return VAR_0;
 *VAR_2 = '\0';

 if (VAR_3 < 3)
  return VAR_0;

 if (!VAR_1)
  return VAR_0;

 if (FUNC_0(VAR_1->pversion) >= 3)
  return FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3);
}
