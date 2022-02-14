
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* status; int errorMessage; } ;
typedef int PQconninfoOption ;
typedef TYPE_1__ PGconn ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (char const* const*,char const* const*,int *,int,int) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_5 () ;

PGconn *
FUNC_6(const char *const *VAR_1,
      const char *const *VAR_2,
      int VAR_3)
{
 PGconn *VAR_4;
 PQconninfoOption *VAR_5;




 VAR_4 = FUNC_5();
 if (VAR_4 == ((void*)0))
  return ((void*)0);




 VAR_5 = FUNC_3(VAR_1, VAR_2,
            &VAR_4->errorMessage,
            1, VAR_3);
 if (VAR_5 == ((void*)0))
 {
  VAR_4->status = VAR_0;

  return VAR_4;
 }




 if (!FUNC_4(VAR_4, VAR_5))
 {
  FUNC_0(VAR_5);
  return VAR_4;
 }




 FUNC_0(VAR_5);




 if (!FUNC_2(VAR_4))
  return VAR_4;




 if (!FUNC_1(VAR_4))
 {

  VAR_4->status = VAR_0;
 }

 return VAR_4;
}
