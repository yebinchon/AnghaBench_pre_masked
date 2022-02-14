
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int bm ;
struct TYPE_15__ {int bmHeight; int bmWidth; } ;
struct TYPE_14__ {scalar_t__ hbmColor; scalar_t__ hbmMask; } ;
struct TYPE_10__ {scalar_t__ hicon; } ;
struct TYPE_11__ {TYPE_1__ icon; } ;
struct TYPE_12__ {TYPE_2__ u; } ;
struct TYPE_13__ {int origHeight; TYPE_3__ desc; int himetricHeight; int origWidth; int himetricWidth; } ;
typedef TYPE_4__ OLEPictureImpl ;
typedef TYPE_5__ ICONINFO ;
typedef int HDC ;
typedef TYPE_6__ BITMAP ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_5__*) ;
 int FUNC_4 (scalar_t__,int,TYPE_6__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(OLEPictureImpl * VAR_0)
{
    ICONINFO VAR_1;

    FUNC_6("icon handle %p\n", VAR_0->desc.u.icon.hicon);
    if (FUNC_3(VAR_0->desc.u.icon.hicon, &VAR_1)) {
        HDC VAR_2;
        BITMAP VAR_3;

        FUNC_6("bitmap handle for icon is %p\n", VAR_1.hbmColor);
        if(FUNC_4(VAR_1.hbmColor ? VAR_1.hbmColor : VAR_1.hbmMask, sizeof(VAR_3), &VAR_3) != sizeof(VAR_3)) {
            FUNC_1("GetObject fails on icon bitmap\n");
            return;
        }

        VAR_0->origWidth = VAR_3.bmWidth;
        VAR_0->origHeight = VAR_1.hbmColor ? VAR_3.bmHeight : VAR_3.bmHeight / 2;

        VAR_2 = FUNC_2(0);

        VAR_0->himetricWidth = FUNC_7(VAR_0->origWidth, VAR_2);
        VAR_0->himetricHeight = FUNC_8(VAR_0->origHeight, VAR_2);

        FUNC_5(0, VAR_2);

        FUNC_0(VAR_1.hbmMask);
        if (VAR_1.hbmColor) FUNC_0(VAR_1.hbmColor);
    } else {
        FUNC_1("GetIconInfo() fails on icon %p\n", VAR_0->desc.u.icon.hicon);
    }
}
