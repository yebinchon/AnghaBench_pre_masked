
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int bmi ;
typedef int bm ;
struct TYPE_9__ {int bmHeight; int bmWidth; } ;
struct TYPE_7__ {int biSize; int biHeight; int biPlanes; int biBitCount; int biCompression; int biWidth; } ;
struct TYPE_8__ {TYPE_1__ bmiHeader; } ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int DWORD ;
typedef TYPE_2__ BITMAPINFO ;
typedef TYPE_3__ BITMAP ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int,int*,TYPE_2__*,int ) ;
 int FUNC_2 (int ,int,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(const char * VAR_2, HBITMAP VAR_3)
{
    BITMAP VAR_4;
    BITMAPINFO VAR_5;
    DWORD VAR_6, VAR_7 = 0;
    HDC VAR_8 = FUNC_0(((void*)0));

    VAR_6 = FUNC_2(VAR_3, sizeof(VAR_4), &VAR_4);
    FUNC_6(VAR_6 == sizeof(VAR_4), "GetObject returned %d\n", VAR_6);

    FUNC_5(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.bmiHeader.biSize = sizeof(VAR_5.bmiHeader);
    VAR_5.bmiHeader.biWidth = VAR_4.bmWidth;
    VAR_5.bmiHeader.biHeight = VAR_4.bmHeight;
    VAR_5.bmiHeader.biPlanes = 1;
    VAR_5.bmiHeader.biBitCount= 24;
    VAR_5.bmiHeader.biCompression= VAR_0;
    VAR_6 = FUNC_1(VAR_8, VAR_3, 0, VAR_4.bmHeight, &VAR_7, &VAR_5, VAR_1);
    FUNC_6(VAR_6 == VAR_4.bmHeight, "%s: %d lines were converted, not %d\n", VAR_2, VAR_6, VAR_4.bmHeight);

    FUNC_6(FUNC_4(VAR_7, 0x00ffffff), "%s: Pixel is 0x%08x\n", VAR_2, VAR_7);

    FUNC_3(((void*)0), VAR_8);
}
