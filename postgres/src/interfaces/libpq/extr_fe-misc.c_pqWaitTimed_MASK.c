
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_4__ {int errorMessage; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int,int,int ) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(int VAR_0, int VAR_1, PGconn *VAR_2, time_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, VAR_1, VAR_3);

 if (VAR_4 < 0)
  return -1;

 if (VAR_4 == 0)
 {
  FUNC_2(&VAR_2->errorMessage,
        FUNC_0("timeout expired\n"));
  return 1;
 }

 return 0;
}
