
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int * PLDAPMessage ;
typedef int PLDAP ;
typedef int * PCWCHAR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int **,int ,int *,int *,int **) ;
 int FUNC_1 (int,int **,char*,int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

NTSTATUS FUNC_4(int VAR_2, wchar_t * VAR_3[])
{
 PLDAP VAR_4;
 PLDAPMessage VAR_5 = ((void*)0);
 PCWCHAR VAR_6 = ((void*)0);
 FUNC_1(VAR_2, VAR_3, L"system", &VAR_6, ((void*)0));

 if(FUNC_0(VAR_2, VAR_3, VAR_0, VAR_6, &VAR_4, &VAR_5))
 {
  if(VAR_5)
   FUNC_2(VAR_5);
  FUNC_3(VAR_4);
 }
 return VAR_1;
}
