
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int PVOID ;
typedef int PBYTE ;
typedef int NTSTATUS ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int *,scalar_t__*) ;

NTSTATUS FUNC_6(int VAR_3, wchar_t * VAR_4[])
{
 PBYTE VAR_5, VAR_6;
 DWORD VAR_7, VAR_8;
#pragma warning(push)
#pragma warning(disable:4996)
 wchar_t *VAR_9 = VAR_2;
#pragma warning(pop)
 FUNC_2(L"Using \'%s\' as input file\n", VAR_9);
 if(FUNC_3(VAR_9, &VAR_5, &VAR_7))
 {
  FUNC_2(L" * Original size  : %u\n", VAR_7);
  if(FUNC_5(VAR_5, VAR_7, (PVOID *) &VAR_6, &VAR_8))
  {
   FUNC_2(L" * Compressed size: %u (%.2f%%)\nUsing \'%s\' as output file... ", VAR_8, 100 * ((float) VAR_8 / (float) VAR_7), VAR_0);
   if(FUNC_4(VAR_0, VAR_6, VAR_8))
    FUNC_2(L"OK!\n");
   else FUNC_1(L"kull_m_file_writeData");
   FUNC_0(VAR_6);
  }
  FUNC_0(VAR_5);
 }
 return VAR_1;
}
