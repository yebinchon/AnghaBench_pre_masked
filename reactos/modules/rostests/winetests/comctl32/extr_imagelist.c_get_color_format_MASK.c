
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int bmi ;
struct TYPE_5__ {int biSize; int biBitCount; } ;
struct TYPE_6__ {TYPE_1__ bmiHeader; } ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,TYPE_2__*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int,char*) ;

__attribute__((used)) static int FUNC_6(HBITMAP VAR_1)
{
    BITMAPINFO VAR_2;
    HDC VAR_3 = FUNC_0(0);
    HBITMAP VAR_4 = FUNC_3(VAR_3, VAR_1);
    int VAR_5;

    FUNC_4(&VAR_2, 0, sizeof(VAR_2));
    VAR_2.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    VAR_5 = FUNC_2(VAR_3, VAR_1, 0, 0, 0, &VAR_2, VAR_0);
    FUNC_5(VAR_5, "GetDIBits failed\n");

    FUNC_3(VAR_3, VAR_4);
    FUNC_1(VAR_3);
    return VAR_2.bmiHeader.biBitCount;
}
