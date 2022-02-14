
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,char*,scalar_t__*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;

char *FUNC_5()
{
 char *VAR_3 = ((void*)0);
 HKEY VAR_4;

 if (FUNC_0(((void*)0), &VAR_4)) {
  DWORD VAR_5 = VAR_1;
  VAR_3 = FUNC_4(VAR_1+1);
  if(FUNC_2(VAR_4, VAR_2, 0, ((void*)0), VAR_3, &VAR_5) != VAR_0) {
   FUNC_1(VAR_4);
   FUNC_3(VAR_3);
   VAR_3 = ((void*)0);
   return VAR_3;
  }
  FUNC_1(VAR_4);
 }
 return VAR_3;
}
