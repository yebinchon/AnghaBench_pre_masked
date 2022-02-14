
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQconninfoOption ;
typedef int PQExpBufferData ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

PQconninfoOption *
FUNC_6(void)
{
 PQExpBufferData VAR_0;
 PQconninfoOption *VAR_1;


 FUNC_4(&VAR_0);
 if (FUNC_0(VAR_0))
  return ((void*)0);

 VAR_1 = FUNC_3(&VAR_0);
 if (VAR_1 != ((void*)0))
 {

  if (!FUNC_2(VAR_1, ((void*)0)))
  {
   FUNC_1(VAR_1);
   VAR_1 = ((void*)0);
  }
 }

 FUNC_5(&VAR_0);
 return VAR_1;
}
