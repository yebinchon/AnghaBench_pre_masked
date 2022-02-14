
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int USHORT ;
typedef int ULONG ;
typedef int PCWCHAR ;
typedef int NTSTATUS ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int ) ;
 scalar_t__ FUNC_5 (int,int **,char*,int *,char*) ;
 int FUNC_6 (int ,int *,int ) ;

NTSTATUS FUNC_7(int VAR_1, wchar_t * VAR_2[])
{
 PCWCHAR VAR_3;
 ULONG VAR_4 = 0, VAR_5[4];
 USHORT VAR_6, VAR_7;

 if(FUNC_5(VAR_1, VAR_2, L"year", &VAR_3, L"1999"))
 {
  VAR_4 = FUNC_6(VAR_3, ((void*)0), 0);
  if(VAR_4 <= 0xffff)
  {
   VAR_6 = (USHORT) VAR_4;
   FUNC_2(L" * Year        : %hu (0x%04x)\n", VAR_6, VAR_6);
   if(FUNC_5(VAR_1, VAR_2, L"id", &VAR_3, ((void*)0)))
   {
    VAR_4 = FUNC_6(VAR_3, ((void*)0), 0);
    if(VAR_4 < 10000000)
    {
     FUNC_2(L" * Tag ID      : %u (0x%08x)\n", VAR_4, VAR_4);
     FUNC_3(VAR_5, VAR_4, VAR_6);
     FUNC_2(L" * RAW         : ");
     for(VAR_7 = 1; VAR_7 < 4; VAR_7++)
      FUNC_2(L"%08x", VAR_5[VAR_7]);
     FUNC_2(L"\n");
     FUNC_4(VAR_5, FUNC_0(VAR_5));
    }
    else FUNC_1(L"Tag Id (/id) must be in the [0;9999999] range - it was %u (0x%08x)\n", VAR_4, VAR_4);
   }
   else FUNC_1(L"Tag Id (/id) is needed\n");
  }
  else FUNC_1(L"Year (/year) must be in the [0;0xffff] range - it was %u (0x%08x)\n", VAR_4, VAR_4);
 }
 return VAR_0;
}
