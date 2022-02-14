
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int XFORM ;
struct TYPE_9__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_8__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_6__ {int dwSize; int nCount; int nRgnSize; TYPE_4__ rcBound; int iType; } ;
struct TYPE_7__ {TYPE_1__ rdh; int Buffer; } ;
typedef int RgnDataBuffer ;
typedef int RGNDATAHEADER ;
typedef TYPE_2__ RGNDATA ;
typedef int RECT ;
typedef TYPE_3__* PRECT ;
typedef int * HRGN ;
typedef float FLOAT ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int,int,int) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int * FUNC_2 (int *,int,TYPE_2__ const*) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int,int,int,int,int) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (float) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (float) ;

void FUNC_9()
{
    struct
    {
        RGNDATA rgndata;
        CHAR data[sizeof(RECT) - 1];
    } VAR_2;
    PRECT VAR_3 = (PRECT)&VAR_2.rgndata.Buffer;
    const RGNDATA *VAR_4 = (const RGNDATA *)&VAR_2;
    XFORM VAR_5;
    FLOAT VAR_6;
    HRGN VAR_7;
    RECT VAR_8;

    VAR_2.rgndata.rdh.dwSize = sizeof(RGNDATAHEADER);
    VAR_2.rgndata.rdh.iType = VAR_1;
    VAR_2.rgndata.rdh.nCount = 1;
    VAR_2.rgndata.rdh.nRgnSize = sizeof(RGNDATAHEADER) + sizeof(RECT);
    VAR_2.rgndata.rdh.rcBound.left = 0;
    VAR_2.rgndata.rdh.rcBound.top = 0;
    VAR_2.rgndata.rdh.rcBound.right = 10;
    VAR_2.rgndata.rdh.rcBound.bottom = 10;
    VAR_3->left = 0;
    VAR_3->top = 0;
    VAR_3->right = 10;
    VAR_3->bottom = 10;

    FUNC_5(&VAR_2.rgndata.rdh.rcBound);

    VAR_7 = FUNC_2(((void*)0), sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with without transform\n");
    FUNC_1(VAR_7, 0, 0, 10, 10);

    FUNC_4(&VAR_5, 1., 0., 0., 1., 0., 0.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with identity transform\n");
    FUNC_1(VAR_7, 0, 0, 10, 10);

    FUNC_4(&VAR_5, 1., 0., 0., 1., 10., 10.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with offset transform\n");
    FUNC_1(VAR_7, 10, 10, 20, 20);

    FUNC_4(&VAR_5, 2.5, 0., 0., 1.5, 0., 0.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with scaling transform\n");
    FUNC_1(VAR_7, 0, 0, 25, 15);

    FUNC_4(&VAR_5, 2.5, 0., 0., 1.5, 20., 40.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with scaling+offset transform\n");
    FUNC_1(VAR_7, 20, 40, 45, 55);

    FUNC_4(&VAR_5, 1., 10., 0., 1., 0., 0.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with shearing transform\n");
    FUNC_7(FUNC_3(VAR_7, &VAR_8) == VAR_0, "not a complex region\n");
    FUNC_0(&VAR_8, 0, 1, 10, 101);

    VAR_6 = 23.6f;
    FUNC_4(&VAR_5, FUNC_6(VAR_6), -FUNC_8(VAR_6), FUNC_8(VAR_6), FUNC_6(VAR_6), 10., 10.);
    VAR_7 = FUNC_2(&VAR_5, sizeof(VAR_2), VAR_4);
    FUNC_7(VAR_7 != ((void*)0), "ExtCreateRegion failed with rotating transform\n");
    FUNC_1(VAR_7, 0, 10, 10, 20);

}
