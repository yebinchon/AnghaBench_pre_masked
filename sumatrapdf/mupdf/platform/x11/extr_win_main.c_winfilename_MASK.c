
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
struct TYPE_4__ {int lStructSize; int nMaxFile; char* lpstrTitle; char* lpstrFilter; int Flags; int * lpstrInitialDir; scalar_t__* lpstrFile; int hwndOwner; } ;
typedef TYPE_1__ OPENFILENAME ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(wchar_t *VAR_3, int VAR_4)
{
 OPENFILENAME VAR_5;
 VAR_3[0] = 0;
 FUNC_1(&VAR_5, 0, sizeof(OPENFILENAME));
 VAR_5.lStructSize = sizeof(OPENFILENAME);
 VAR_5.hwndOwner = VAR_2;
 VAR_5.lpstrFile = VAR_3;
 VAR_5.nMaxFile = VAR_4;
 VAR_5.lpstrInitialDir = ((void*)0);
 VAR_5.lpstrTitle = L"MuPDF: Open PDF file";
 VAR_5.lpstrFilter = L"Documents (*.pdf;*.xps;*.cbz;*.epub;*.fb2;*.zip;*.png;*.jpeg;*.tiff)\0*.zip;*.cbz;*.xps;*.epub;*.fb2;*.pdf;*.jpe;*.jpg;*.jpeg;*.jfif;*.tif;*.tiff\0PDF Files (*.pdf)\0*.pdf\0XPS Files (*.xps)\0*.xps\0CBZ Files (*.cbz;*.zip)\0*.zip;*.cbz\0EPUB Files (*.epub)\0*.epub\0FictionBook 2 Files (*.fb2)\0*.fb2\0Image Files (*.png;*.jpeg;*.tiff)\0*.png;*.jpg;*.jpe;*.jpeg;*.jfif;*.tif;*.tiff\0All Files\0*\0\0";
 VAR_5.Flags = VAR_0|VAR_1;
 return FUNC_0(&VAR_5);
}
