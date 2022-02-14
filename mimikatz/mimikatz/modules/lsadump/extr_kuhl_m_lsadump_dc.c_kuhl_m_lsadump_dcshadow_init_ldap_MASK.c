
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PWSTR ;
typedef int LDAP ;
typedef int DWORD ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,void*) ;
 int FUNC_4 (int *) ;

ULONG FUNC_5(PWSTR VAR_5, LDAP** VAR_6)
{
 DWORD VAR_7 = 0;
 LDAP* VAR_8;
 if((VAR_8 = FUNC_2(VAR_5, 389)))
 {
  ULONG VAR_9 = VAR_4;

  FUNC_3(VAR_8,VAR_2,(void*) &VAR_9);

  FUNC_3(VAR_8,VAR_3,VAR_1);



  if(!(VAR_7 = FUNC_1(VAR_8, ((void*)0))))
  {
   if(!(VAR_7 = FUNC_0(VAR_8, ((void*)0), ((void*)0), VAR_0)))
   {
    *VAR_6 = VAR_8;
   }
   else FUNC_4(VAR_8);
  }
  else FUNC_4(VAR_8);
 }
 return VAR_7;
}
