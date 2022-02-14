
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int cx; int cy; int hInstance; } ;
struct TYPE_4__ {int bmHeight; int bmWidth; } ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBITMAP ;
typedef TYPE_1__ BITMAP ;


 int FUNC_0 (scalar_t__,int,int,int ,int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static VOID
FUNC_8(HDC VAR_5)
{
    HBITMAP VAR_6;
    BITMAP VAR_7;
    HDC VAR_8;


    VAR_6 = (HBITMAP)FUNC_5(VAR_4->hInstance,
                                  FUNC_6(VAR_0),
                                  VAR_1,
                                  0,
                                  0,
                                  VAR_2);
    if (VAR_6)
    {

        FUNC_4(VAR_6, sizeof(BITMAP), &VAR_7);


        VAR_8 = FUNC_1(VAR_5);
        if (VAR_8)
        {

            FUNC_7(VAR_8, VAR_6);


            FUNC_0(VAR_5,
                   (VAR_4->cx / 2) + 35,
                   (VAR_4->cy / 2) - 72,
                   VAR_7.bmWidth,
                   VAR_7.bmHeight,
                   VAR_8,
                   0,
                   0,
                   VAR_3);


            FUNC_2(VAR_8);
        }


        FUNC_3(VAR_6);
    }
}
