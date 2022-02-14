
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int pdfapp_t ;
struct TYPE_4__ {int lStructSize; int nMaxFile; char* lpstrTitle; char* lpstrFilter; int Flags; int * lpstrInitialDir; int * lpstrFile; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAME ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,int,char*,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,char*) ;
 int * VAR_5 ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(pdfapp_t *VAR_6, char *VAR_7, int VAR_8)
{
 wchar_t VAR_9[VAR_2];
 OPENFILENAME VAR_10;

 FUNC_6(VAR_9, VAR_5);
 FUNC_3(&VAR_10, 0, sizeof(OPENFILENAME));
 VAR_10.lStructSize = sizeof(OPENFILENAME);
 VAR_10.hwndOwner = VAR_4;
 VAR_10.lpstrFile = VAR_9;
 VAR_10.nMaxFile = VAR_2;
 VAR_10.lpstrInitialDir = ((void*)0);
 VAR_10.lpstrTitle = L"MuPDF: Save PDF file";
 VAR_10.lpstrFilter = L"PDF Documents (*.pdf)\0*.pdf\0All Files\0*\0\0";
 VAR_10.Flags = VAR_1;
 if (FUNC_0(&VAR_10))
 {
  int VAR_11 = FUNC_2(VAR_0, 0, VAR_9, -1, VAR_7, FUNC_1(VAR_2, VAR_8), ((void*)0), ((void*)0));
  if (VAR_11 == 0)
  {
   FUNC_4(VAR_6, "cannot convert filename to utf-8");
   return 0;
  }

  FUNC_6(VAR_5, VAR_9);
  FUNC_5(VAR_3, VAR_7);
  return 1;
 }
 else
 {
  return 0;
 }
}
