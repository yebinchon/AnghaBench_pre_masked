
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int biSize; int biWidth; int biHeight; int biPlanes; int biCompression; int biBitCount; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ,void**,int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

__attribute__((used)) static HBITMAP FUNC_2(WORD VAR_2, void** VAR_3)
{
    BITMAPINFO VAR_4;

    FUNC_1(&VAR_4, 0, sizeof(BITMAPINFO));
    VAR_4.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_4.bmiHeader.biWidth = 4;
    VAR_4.bmiHeader.biHeight = -4;
    VAR_4.bmiHeader.biPlanes = 1;
    VAR_4.bmiHeader.biBitCount = VAR_2;
    VAR_4.bmiHeader.biCompression = VAR_0;

    return FUNC_0(0, &VAR_4, VAR_1, VAR_3, ((void*)0), 0);
}
