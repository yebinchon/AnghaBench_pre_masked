
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;
typedef scalar_t__ LONG ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,char*,int ,int *,int ,int *) ;
 int VAR_7 ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int,int **,char*,int *,int *) ;

NTSTATUS FUNC_7(int VAR_8, wchar_t * VAR_9[])
{
 LONG VAR_10;
 BOOL VAR_11 = FUNC_6(VAR_8, VAR_9, L"trace", ((void*)0), ((void*)0));

 if(!VAR_5)
 {
  VAR_10 = FUNC_1(VAR_0, ((void*)0), ((void*)0), &VAR_5);
  if(VAR_10 == VAR_1)
  {
   FUNC_2(L"Opening ACR  : ");
   if(FUNC_4(VAR_5, L"ACS ACR122 0", VAR_3, ((void*)0), VAR_11, &VAR_4))
   {
    FUNC_2(L"OK!\nOpening PN532: ");
    FUNC_5(VAR_7, &VAR_4, VAR_11, &VAR_6);
    FUNC_2(L"OK!\n");
   }
   else FUNC_3(0, ((void*)0));
  }
 }
 else FUNC_0(L"Already opened, close it first\n");
 return VAR_2;
}
