
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
typedef int ClientData ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int * const,int*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int,int * const*,char*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(ClientData VAR_2, Tcl_Interp *VAR_3,
   int VAR_4, Tcl_Obj *const VAR_5[])
{
 char *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 int VAR_9;




 if (VAR_4 != 2)
 {
  FUNC_3(VAR_3, 1, VAR_5, "string");
  return VAR_0;
 }





 VAR_7 = FUNC_0(VAR_5[1], &VAR_9);
 VAR_6 = FUNC_4(VAR_9 * 2 + 1);
 VAR_8 = VAR_6;




 while (*VAR_7)
 {
  if (*VAR_7 == '\'')
   *VAR_8++ = '\'';
  else
  {
   if (*VAR_7 == '\\')
    *VAR_8++ = '\\';
  }
  *VAR_8++ = *VAR_7++;
 }




 *VAR_8 = '\0';
 FUNC_2(VAR_3, FUNC_1(VAR_6, -1));
 FUNC_5(VAR_6);
 return VAR_1;
}
