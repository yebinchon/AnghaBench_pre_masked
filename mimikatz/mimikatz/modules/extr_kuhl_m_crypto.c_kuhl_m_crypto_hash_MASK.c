
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_9__ {int Length; int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_10__ {int Buffer; } ;
typedef int * PCWCHAR ;
typedef TYPE_2__ OEM_STRING ;
typedef int NTSTATUS ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *,int) ;
 scalar_t__ FUNC_9 (int,int **,char*,int **,int *) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int *,int ) ;

NTSTATUS FUNC_12(int VAR_8, wchar_t * VAR_9[])
{
 PCWCHAR VAR_10, VAR_11 = ((void*)0), VAR_12 = ((void*)0);
 UNICODE_STRING VAR_13, VAR_14;

 OEM_STRING VAR_15;
 DWORD VAR_16 = 10240;
 BYTE VAR_17[VAR_3], VAR_18[VAR_3], VAR_19[VAR_4], VAR_20[VAR_5], VAR_21[32];

 FUNC_9(VAR_8, VAR_9, L"password", &VAR_11, ((void*)0));
 FUNC_9(VAR_8, VAR_9, L"user", &VAR_12, ((void*)0));
 if(FUNC_9(VAR_8, VAR_9, L"count", &VAR_10, ((void*)0)))
  VAR_16 = FUNC_11(VAR_10, ((void*)0), 0);

 FUNC_4(&VAR_13, VAR_11);
 FUNC_4(&VAR_14, VAR_12);
 if(FUNC_0(FUNC_2(&VAR_13, VAR_17)))
 {
  FUNC_6(L"NTLM: "); FUNC_10(VAR_17, VAR_3, 0); FUNC_6(L"\n");
  if(VAR_12)
  {
   if(FUNC_0(FUNC_7(VAR_18, VAR_17, &VAR_14, 0)))
   {
    FUNC_6(L"DCC1: "); FUNC_10(VAR_18, VAR_3, 0); FUNC_6(L"\n");
    if(FUNC_0(FUNC_7(VAR_18, VAR_17, &VAR_14, VAR_16)))
    {
     FUNC_6(L"DCC2: "); FUNC_10(VAR_18, VAR_3, 0); FUNC_6(L"\n");
    }
   }
  }
 }
 if(FUNC_0(FUNC_5(&VAR_15, &VAR_13, VAR_7)))
 {
  if(FUNC_0(FUNC_1(VAR_15.Buffer, VAR_17)))
  {
   FUNC_6(L"LM  : "); FUNC_10(VAR_17, VAR_3, 0); FUNC_6(L"\n");
  }
  FUNC_3(&VAR_15);
 }

 if(FUNC_8(VAR_0, VAR_13.Buffer, VAR_13.Length, VAR_19, VAR_4))
  FUNC_6(L"MD5 : "); FUNC_10(VAR_19, VAR_4, 0); FUNC_6(L"\n");
 if(FUNC_8(VAR_1, VAR_13.Buffer, VAR_13.Length, VAR_20, VAR_5))
  FUNC_6(L"SHA1: "); FUNC_10(VAR_20, VAR_5, 0); FUNC_6(L"\n");
 if(FUNC_8(VAR_2, VAR_13.Buffer, VAR_13.Length, VAR_21, 32))
  FUNC_6(L"SHA2: "); FUNC_10(VAR_21, 32, 0); FUNC_6(L"\n");

 return VAR_6;
}
