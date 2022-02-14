
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PQconninfoOption ;
typedef int PQExpBuffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*,int ) ;

__attribute__((used)) static PQconninfoOption *
FUNC_4(const char *VAR_0, PQExpBuffer VAR_1,
       bool VAR_2)
{
 PQconninfoOption *VAR_3;


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 if (!FUNC_3(VAR_3, VAR_0, VAR_1))
 {
  FUNC_0(VAR_3);
  return ((void*)0);
 }




 if (VAR_2)
 {
  if (!FUNC_1(VAR_3, VAR_1))
  {
   FUNC_0(VAR_3);
   return ((void*)0);
  }
 }

 return VAR_3;
}
