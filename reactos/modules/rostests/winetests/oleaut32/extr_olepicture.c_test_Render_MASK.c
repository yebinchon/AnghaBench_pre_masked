
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hicon; } ;
struct TYPE_5__ {int cbSizeofstruct; TYPE_1__ icon; int picType; } ;
typedef TYPE_2__ PICTDESC ;
typedef int OLE_YSIZE_HIMETRIC ;
typedef int OLE_XSIZE_HIMETRIC ;
typedef int LPCSTR ;
typedef int IPicture ;
typedef int HRESULT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,short*) ;
 int FUNC_4 (int *,int*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,void**) ;
 int VAR_3 ;
 short VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int,int,int) ;
 int VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,char*,short,...) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int *,int ,int,int,int,int,int ,int,int,int,int *) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    IPicture *VAR_7;
    HRESULT VAR_8;
    short VAR_9;
    PICTDESC VAR_10;
    OLE_XSIZE_HIMETRIC VAR_11;
    OLE_YSIZE_HIMETRIC VAR_12;
    COLORREF VAR_13, VAR_14;
    HDC VAR_15 = FUNC_8();


    VAR_8 = FUNC_6(((void*)0), &VAR_2, VAR_6, (void **)&VAR_7);
    FUNC_10(VAR_8 == VAR_5, "Failed to create a picture, hr %#x.\n", VAR_8);
    VAR_8 = FUNC_3(VAR_7, &VAR_9);
    FUNC_10(VAR_8 == VAR_5, "IPicture_get_Type does not return S_OK, but 0x%08x\n", VAR_8);
    FUNC_10(VAR_9 == VAR_4, "Expected type = PICTYPE_UNINITIALIZED, got = %d\n", VAR_9);

    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 10, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 0, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 0, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 10, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 0, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 0, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);

    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_5);
    FUNC_1(VAR_7);

    VAR_10.cbSizeofstruct = sizeof(PICTDESC);
    VAR_10.picType = VAR_3;
    VAR_10.icon.hicon = FUNC_5(((void*)0), (LPCSTR)VAR_1);
    if(!VAR_10.icon.hicon){
        FUNC_13("LoadIcon failed. Skipping...\n");
        FUNC_9(VAR_15);
        return;
    }

    VAR_8 = FUNC_6(&VAR_10, &VAR_2, VAR_6, (void **)&VAR_7);
    FUNC_10(VAR_8 == VAR_5, "Failed to create a picture, hr %#x.\n", VAR_8);

    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 0, 0, 0, 0, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 10, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 0, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 10, 0, 0, 0, 0, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 10, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 10, 0, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);
    VAR_8 = FUNC_12(VAR_7, VAR_15, 0, 0, 0, 0, 0, 0, 10, 10, ((void*)0));
    FUNC_11(VAR_8, VAR_0);


    FUNC_4(VAR_7, &VAR_11);
    FUNC_2(VAR_7, &VAR_12);

    FUNC_7(VAR_15, 0, 0, 0x00223344);
    FUNC_7(VAR_15, 5, 5, 0x00223344);
    FUNC_7(VAR_15, 10, 10, 0x00223344);
    VAR_14 = FUNC_0(VAR_15, 0, 0);

    VAR_8 = FUNC_12(VAR_7, VAR_15, 1, 1, 9, 9, 0, VAR_12, VAR_11, -VAR_12, ((void*)0));
    FUNC_11(VAR_8, VAR_5);

    if(VAR_8 != VAR_5) goto done;


    VAR_13 = FUNC_0(VAR_15, 0, 0);
    FUNC_10(VAR_13 == VAR_14,
       "Color at 0,0 should be unchanged 0x%06X, but was 0x%06X\n", VAR_14, VAR_13);
    VAR_13 = FUNC_0(VAR_15, 5, 5);
    FUNC_10(VAR_13 != VAR_14,
       "Color at 5,5 should have changed, but still was 0x%06X\n", VAR_14);
    VAR_13 = FUNC_0(VAR_15, 10, 10);
    FUNC_10(VAR_13 == VAR_14,
       "Color at 10,10 should be unchanged 0x%06X, but was 0x%06X\n", VAR_14, VAR_13);

done:
    FUNC_1(VAR_7);
    FUNC_9(VAR_15);
}
