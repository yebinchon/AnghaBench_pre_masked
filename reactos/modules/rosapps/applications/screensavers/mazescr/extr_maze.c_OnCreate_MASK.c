
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int grayPattern ;
typedef int argbq ;
struct TYPE_6__ {int biSize; int biWidth; int biHeight; int biPlanes; int biBitCount; int biCompression; } ;
struct TYPE_7__ {scalar_t__ bmiColors; TYPE_1__ bmiHeader; } ;
typedef long RGBQUAD ;
typedef int LPCREATESTRUCT ;
typedef int HWND ;
typedef int BOOL ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_2__ BITMAPINFO ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,long*,int) ;
 int FUNC_9 () ;
 int VAR_11 ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static BOOL FUNC_13(HWND VAR_12, LPCREATESTRUCT VAR_13)
{
    FUNC_10((unsigned) FUNC_12(((void*)0)));

    FUNC_5();

    if (VAR_11 < 2) {
        VAR_11 = 7 + (FUNC_9() % 30);
    }
    VAR_6 = VAR_5 = VAR_11;
    VAR_4 = (VAR_11 > 6 ? 3 : (VAR_11 - 1) / 2);
    VAR_7 = FUNC_2(FUNC_4(255, 0, 0));

    VAR_8 = FUNC_2(FUNC_4(0, 255, 0));
    VAR_10 = FUNC_1(VAR_2, 3, FUNC_4(150, 150, 150));

    VAR_9 = FUNC_3(VAR_12);

    FUNC_11(VAR_12, 1);

    return VAR_3;
}
