
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_7__ {TYPE_2__* Info; int BlueVal; int GreenVal; int RedVal; } ;
struct TYPE_6__ {TYPE_1__* ImageEditors; } ;
struct TYPE_5__ {int hSelf; int hBitmap; } ;
typedef TYPE_3__* PIMAGEADJUST ;
typedef int HWND ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;


 int FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static BOOL
FUNC_4(PIMAGEADJUST VAR_2,
          HWND VAR_3,
          UINT VAR_4)
{
    switch (VAR_4)
    {
        case 128:
        {
            HDC VAR_5;

            VAR_5 = FUNC_2(VAR_2->Info->ImageEditors->hSelf);

            FUNC_0(VAR_2->Info->ImageEditors->hBitmap,
                             VAR_2->Info->ImageEditors->hBitmap,
                             VAR_2->Info->ImageEditors->hSelf,
                             VAR_5,
                             VAR_2->RedVal,
                             VAR_2->GreenVal,
                             VAR_2->BlueVal);

            FUNC_3(VAR_2->Info->ImageEditors->hSelf,
                      VAR_5);

            FUNC_1(VAR_3,
                      VAR_4);

            return VAR_1;
        }

        case 129:
        {
            FUNC_1(VAR_3,
                      VAR_4);
            return VAR_1;
        }
    }

    return VAR_0;
}
