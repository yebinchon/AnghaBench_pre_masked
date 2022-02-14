
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int desc ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {scalar_t__ hbitmap; scalar_t__ hpal; } ;
struct TYPE_7__ {int cbSizeofstruct; short picType; TYPE_1__ bmp; } ;
typedef TYPE_2__ PICTDESC ;
typedef int OLE_HANDLE ;
typedef int LONG ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IPicture ;
typedef int IPersistStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int,int,int,int,int *) ;
 int FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ,int*) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 (int *,short*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,TYPE_3__,int ,int *) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (TYPE_2__*,int *,int ,void**) ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_18 (int*,char*,int) ;
 int FUNC_19 (int,char*,int) ;

__attribute__((used)) static void FUNC_20(void)
{
    IPicture *VAR_9;
    PICTDESC VAR_10;
    short VAR_11;
    OLE_HANDLE VAR_12;
    HGLOBAL VAR_13;
    DWORD *VAR_14;
    IPersistStream *VAR_15;
    IStream *VAR_16;
    LARGE_INTEGER VAR_17;
    HRESULT VAR_18;
    LONG VAR_19;

    VAR_10.cbSizeofstruct = sizeof(VAR_10);
    VAR_10.picType = VAR_5;
    VAR_10.bmp.hpal = 0;
    VAR_10.bmp.hbitmap = FUNC_0(1, 1, 1, 1, ((void*)0));
    VAR_18 = FUNC_17(&VAR_10, &VAR_4, VAR_1, (void**)&VAR_9);
    FUNC_19(VAR_18 == VAR_7, "OleCreatePictureIndirect error %#x\n", VAR_18);

    VAR_11 = -1;
    VAR_18 = FUNC_13(VAR_9, &VAR_11);
    FUNC_19(VAR_18 == VAR_7,"get_Type error %#8x\n", VAR_18);
    FUNC_19(VAR_11 == VAR_5,"expected picture type PICTYPE_BITMAP, got %d\n", VAR_11);

    VAR_18 = FUNC_12(VAR_9, &VAR_12);
    FUNC_19(VAR_18 == VAR_7,"get_Handle error %#8x\n", VAR_18);
    FUNC_19(FUNC_16(VAR_12) == VAR_10.bmp.hbitmap, "get_Handle returned wrong handle %#x\n", VAR_12);

    VAR_13 = FUNC_3(VAR_2, 4096);
    VAR_18 = FUNC_1(VAR_13, VAR_1, &VAR_16);
    FUNC_19(VAR_18 == VAR_7, "createstreamonhglobal error %#x\n", VAR_18);

    VAR_19 = -1;
    VAR_18 = FUNC_11(VAR_9, VAR_16, VAR_8, &VAR_19);
    FUNC_19(VAR_18 == VAR_7, "IPicture_SaveasFile error %#x\n", VAR_18);
    FUNC_19(VAR_19 == 66, "expected 66, got %d\n", VAR_19);
    VAR_14 = FUNC_5(VAR_13);
    FUNC_19(!FUNC_18(&VAR_14[0], "BM", 2), "got wrong bmp header %04x\n", VAR_14[0]);
    FUNC_6(VAR_13);

    VAR_19 = -1;
    VAR_18 = FUNC_11(VAR_9, VAR_16, VAR_1, &VAR_19);
    FUNC_19(VAR_18 == VAR_0, "expected E_FAIL, got %#x\n", VAR_18);
    FUNC_19(VAR_19 == -1, "expected -1, got %d\n", VAR_19);

    VAR_17.QuadPart = 0;
    VAR_18 = FUNC_15(VAR_16, VAR_17, VAR_6, ((void*)0));
    FUNC_19(VAR_18 == VAR_7, "IStream_Seek %#x\n", VAR_18);

    VAR_18 = FUNC_9(VAR_9, &VAR_3, (void **)&VAR_15);
    FUNC_19(VAR_18 == VAR_7, "QueryInterface error %#x\n", VAR_18);

    VAR_18 = FUNC_8(VAR_15, VAR_16, VAR_8);
    FUNC_19(VAR_18 == VAR_7, "Save error %#x\n", VAR_18);

    FUNC_7(VAR_15);
    FUNC_14(VAR_16);

    VAR_14 = FUNC_5(VAR_13);
    FUNC_19(!FUNC_18(VAR_14, "lt\0\0", 4), "got wrong stream header %04x\n", VAR_14[0]);
    FUNC_19(VAR_14[1] == 66, "expected stream size 66, got %u\n", VAR_14[1]);
    FUNC_19(!FUNC_18(&VAR_14[2], "BM", 2), "got wrong bmp header %04x\n", VAR_14[2]);

    FUNC_6(VAR_13);
    FUNC_4(VAR_13);

    FUNC_2(VAR_10.bmp.hbitmap);
    FUNC_10(VAR_9);
}
