
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int NTSTATUS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (int **) ;

NTSTATUS FUNC_5(int VAR_1, wchar_t * VAR_2[])
{
 wchar_t * VAR_3;
 if(FUNC_4(&VAR_3))
 {
  if(VAR_1)
   FUNC_3(L"Cur: ");
  FUNC_3(L"%s\n", VAR_3);
  FUNC_0(VAR_3);
 }
 else FUNC_1(L"kull_m_file_getCurrentDirectory");

 if(VAR_1)
 {
  if(FUNC_2(VAR_2[0]))
  {
   if(FUNC_4(&VAR_3))
   {
    FUNC_3(L"New: %s\n", VAR_3);
    FUNC_0(VAR_3);
   }
   else FUNC_1(L"kull_m_file_getCurrentDirectory");
  }
  else FUNC_1(L"SetCurrentDirectory");
 }
 return VAR_0;
}
