
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int desc ;
struct TYPE_6__ {int * hicon; } ;
struct TYPE_5__ {int hbitmap; int * hpal; } ;
struct TYPE_7__ {int cbSizeofstruct; TYPE_2__ icon; int picType; TYPE_1__ bmp; } ;
typedef TYPE_3__ PICTDESC ;
typedef scalar_t__ OLE_YSIZE_HIMETRIC ;
typedef scalar_t__ OLE_XSIZE_HIMETRIC ;
typedef int IPicture ;
typedef scalar_t__ INT ;
typedef scalar_t__ HRESULT ;
typedef int * HICON ;
typedef int HDC ;
typedef int HBITMAP ;
typedef int BYTE ;


 int FUNC_0 (double,double,int,int,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,scalar_t__,scalar_t__,int,int,int const*,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 double FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__*) ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (scalar_t__,int,double) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int *,int ,void**) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_13 (int,char*,...) ;

__attribute__((used)) static void FUNC_14(void)
{
    static const BYTE VAR_9[1024];
    OLE_XSIZE_HIMETRIC VAR_10;
    OLE_YSIZE_HIMETRIC VAR_11;
    IPicture *VAR_12;
    PICTDESC VAR_13;
    HBITMAP VAR_14;
    HRESULT VAR_15;
    HICON VAR_16;
    HDC VAR_17;
    INT VAR_18;

    VAR_13.cbSizeofstruct = sizeof(VAR_13);
    VAR_13.picType = VAR_4;
    VAR_13.bmp.hpal = ((void*)0);

    VAR_17 = FUNC_1(0);

    VAR_14 = FUNC_0(1.9 * FUNC_6(VAR_17, VAR_2),
                       1.9 * FUNC_6(VAR_17, VAR_3), 1, 1, ((void*)0));

    VAR_13.bmp.hbitmap = VAR_14;


    VAR_15 = FUNC_12(&VAR_13, &VAR_1, VAR_0, (void**)&VAR_12);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);

    VAR_10 = 0;
    VAR_18 = FUNC_11((INT)(1.9 * FUNC_6(VAR_17, VAR_2)), 2540, FUNC_6(VAR_17, VAR_2));
    VAR_15 = FUNC_10(VAR_12, &VAR_10);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);
    FUNC_13(VAR_10 == VAR_18, "got %d, expected %d\n", VAR_10, VAR_18);

    VAR_11 = 0;
    VAR_18 = FUNC_11((INT)(1.9 * FUNC_6(VAR_17, VAR_3)), 2540, FUNC_6(VAR_17, VAR_3));
    VAR_15 = FUNC_9(VAR_12, &VAR_11);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);
    FUNC_13(VAR_11 == VAR_18, "got %d, expected %d\n", VAR_11, VAR_18);

    FUNC_4(VAR_14);
    FUNC_8(VAR_12);


    VAR_16 = FUNC_2(((void*)0), FUNC_7(VAR_6), FUNC_7(VAR_7),
                      1, 1, VAR_9, VAR_9);
    FUNC_13(VAR_16 != ((void*)0), "failed to create icon\n");

    VAR_13.picType = VAR_5;
    VAR_13.icon.hicon = VAR_16;

    VAR_15 = FUNC_12(&VAR_13, &VAR_1, VAR_0, (void**)&VAR_12);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);

    VAR_10 = 0;
    VAR_18 = FUNC_11(FUNC_7(VAR_6), 2540, FUNC_6(VAR_17, VAR_2));
    VAR_15 = FUNC_10(VAR_12, &VAR_10);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);
    FUNC_13(VAR_10 == VAR_18, "got %d, expected %d\n", VAR_10, VAR_18);

    VAR_11 = 0;
    VAR_18 = FUNC_11(FUNC_7(VAR_7), 2540, FUNC_6(VAR_17, VAR_3));
    VAR_15 = FUNC_9(VAR_12, &VAR_11);
    FUNC_13(VAR_15 == VAR_8, "got 0x%08x\n", VAR_15);
    FUNC_13(VAR_11 == VAR_18, "got %d, expected %d\n", VAR_11, VAR_18);

    FUNC_8(VAR_12);
    FUNC_5(VAR_16);

    FUNC_3(VAR_17);
}
