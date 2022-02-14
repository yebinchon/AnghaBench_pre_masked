
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;

Oid
FUNC_5(bool VAR_5)
{

 if (FUNC_0(VAR_4))
  return VAR_4;


 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
 {
  if (VAR_5)
   FUNC_1(VAR_0, "text search configuration isn't set");
  else
   return VAR_1;
 }

 if (VAR_2 == ((void*)0))
 {

  FUNC_3();
 }


 VAR_4 =
  FUNC_2(FUNC_4(VAR_3),
        !VAR_5);

 return VAR_4;
}
