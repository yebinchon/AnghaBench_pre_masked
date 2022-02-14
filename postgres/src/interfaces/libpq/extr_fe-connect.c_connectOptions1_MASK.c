
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* status; int errorMessage; } ;
typedef int PQconninfoOption ;
typedef TYPE_1__ PGconn ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (char const*,int *,int) ;

__attribute__((used)) static bool
FUNC_3(PGconn *VAR_1, const char *VAR_2)
{
 PQconninfoOption *VAR_3;




 VAR_3 = FUNC_2(VAR_2, &VAR_1->errorMessage, 1);
 if (VAR_3 == ((void*)0))
 {
  VAR_1->status = VAR_0;

  return 0;
 }




 if (!FUNC_1(VAR_1, VAR_3))
 {
  VAR_1->status = VAR_0;
  FUNC_0(VAR_3);
  return 0;
 }




 FUNC_0(VAR_3);

 return 1;
}
