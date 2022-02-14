
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bmi ;
struct TYPE_8__ {int biSize; int biBitCount; int biPlanes; int biCompression; void* biWidth; void* biHeight; } ;
struct TYPE_10__ {TYPE_1__ bmiHeader; } ;
struct TYPE_9__ {void* member_2; void* member_3; int member_1; int member_0; } ;
typedef TYPE_2__ RECT ;
typedef void* INT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int HBITMAP ;
typedef int COLORREF ;
typedef TYPE_3__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int *,int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*,int,TYPE_2__*,int) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ,int) ;

__attribute__((used)) static HBITMAP FUNC_9(INT VAR_5, INT VAR_6, COLORREF VAR_7, const char *VAR_8)
{
    HDC VAR_9;
    BITMAPINFO VAR_10;
    HBITMAP VAR_11, VAR_12;
    HBRUSH VAR_13;
    RECT VAR_14 = { 0, 0, VAR_5, VAR_6 };

    VAR_9 = FUNC_0(0);

    FUNC_8(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.bmiHeader.biSize = sizeof(VAR_10.bmiHeader);
    VAR_10.bmiHeader.biHeight = VAR_5;
    VAR_10.bmiHeader.biWidth = VAR_6;
    VAR_10.bmiHeader.biBitCount = 24;
    VAR_10.bmiHeader.biPlanes = 1;
    VAR_10.bmiHeader.biCompression = VAR_0;
    VAR_11 = FUNC_1(VAR_9, &VAR_10, VAR_1, ((void*)0), ((void*)0), 0);

    VAR_12 = FUNC_7(VAR_9, VAR_11);

    VAR_13 = FUNC_2(VAR_7);
    FUNC_6(VAR_9, &VAR_14, VAR_13);
    FUNC_4(VAR_13);

    FUNC_5(VAR_9, VAR_8, -1, &VAR_14, VAR_2 | VAR_4 | VAR_3);

    FUNC_7(VAR_9, VAR_12);
    FUNC_3(VAR_9);

    return VAR_11;
}
