
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int desc ;
struct TYPE_10__ {int iType; int dSignature; } ;
struct TYPE_9__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {scalar_t__ hemf; } ;
struct TYPE_8__ {int cbSizeofstruct; short picType; TYPE_1__ emf; } ;
typedef TYPE_2__ PICTDESC ;
typedef int OLE_HANDLE ;
typedef int LONG ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IPicture ;
typedef int IPersistStream ;
typedef int HRESULT ;
typedef int HGLOBAL ;
typedef scalar_t__ HDC ;
typedef TYPE_4__ ENHMETAHEADER ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int *,void**) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,int ,int*) ;
 int FUNC_13 (int *,int*) ;
 int FUNC_14 (int *,short*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,TYPE_3__,int ,int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (TYPE_2__*,int *,int ,void**) ;
 short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (int*,char*,int) ;
 int FUNC_20 (int,char*,...) ;

__attribute__((used)) static void FUNC_21(void)
{
    HDC VAR_11;
    IPicture *VAR_12;
    PICTDESC VAR_13;
    short VAR_14;
    OLE_HANDLE VAR_15;
    HGLOBAL VAR_16;
    DWORD *VAR_17;
    ENHMETAHEADER *VAR_18;
    IPersistStream *VAR_19;
    IStream *VAR_20;
    LARGE_INTEGER VAR_21;
    HRESULT VAR_22;
    LONG VAR_23;

    VAR_11 = FUNC_1(0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_20(VAR_11 != 0, "CreateEnhMetaFileA failed\n");

    VAR_13.cbSizeofstruct = sizeof(VAR_13);
    VAR_13.picType = VAR_7;
    VAR_13.emf.hemf = FUNC_0(VAR_11);
    FUNC_20(VAR_13.emf.hemf != 0, "CloseEnhMetaFile failed\n");
    VAR_22 = FUNC_18(&VAR_13, &VAR_6, VAR_3, (void**)&VAR_12);
    FUNC_20(VAR_22 == VAR_9, "OleCreatePictureIndirect error %#x\n", VAR_22);

    VAR_14 = -1;
    VAR_22 = FUNC_14(VAR_12, &VAR_14);
    FUNC_20(VAR_22 == VAR_9,"get_Type error %#8x\n", VAR_22);
    FUNC_20(VAR_14 == VAR_7,"expected PICTYPE_ENHMETAFILE, got %d\n", VAR_14);

    VAR_22 = FUNC_13(VAR_12, &VAR_15);
    FUNC_20(VAR_22 == VAR_9,"get_Handle error %#8x\n", VAR_22);
    FUNC_20(FUNC_17(VAR_15) == VAR_13.emf.hemf, "get_Handle returned wrong handle %#x\n", VAR_15);

    VAR_16 = FUNC_4(VAR_4, 0);
    VAR_22 = FUNC_2(VAR_16, VAR_3, &VAR_20);
    FUNC_20(VAR_22 == VAR_9, "createstreamonhglobal error %#x\n", VAR_22);

    VAR_23 = -1;
    VAR_22 = FUNC_12(VAR_12, VAR_20, VAR_10, &VAR_23);
    FUNC_20(VAR_22 == VAR_9, "IPicture_SaveasFile error %#x\n", VAR_22);
    FUNC_20(VAR_23 == 128, "expected 128, got %d\n", VAR_23);
    VAR_18 = FUNC_6(VAR_16);
if (VAR_23)
{
    FUNC_20(VAR_18->iType == VAR_0, "wrong iType %04x\n", VAR_18->iType);
    FUNC_20(VAR_18->dSignature == VAR_1, "wrong dSignature %08x\n", VAR_18->dSignature);
}
    FUNC_7(VAR_16);

    VAR_23 = -1;
    VAR_22 = FUNC_12(VAR_12, VAR_20, VAR_3, &VAR_23);
    FUNC_20(VAR_22 == VAR_2, "expected E_FAIL, got %#x\n", VAR_22);
    FUNC_20(VAR_23 == -1, "expected -1, got %d\n", VAR_23);

    VAR_21.QuadPart = 0;
    VAR_22 = FUNC_16(VAR_20, VAR_21, VAR_8, ((void*)0));
    FUNC_20(VAR_22 == VAR_9, "IStream_Seek %#x\n", VAR_22);

    VAR_22 = FUNC_10(VAR_12, &VAR_5, (void **)&VAR_19);
    FUNC_20(VAR_22 == VAR_9, "QueryInterface error %#x\n", VAR_22);

    VAR_22 = FUNC_9(VAR_19, VAR_20, VAR_10);
    FUNC_20(VAR_22 == VAR_9, "Save error %#x\n", VAR_22);

    FUNC_8(VAR_19);
    FUNC_15(VAR_20);

    VAR_17 = FUNC_6(VAR_16);
    FUNC_20(!FUNC_19(VAR_17, "lt\0\0", 4), "got wrong stream header %04x\n", VAR_17[0]);
    FUNC_20(VAR_17[1] == 128, "expected 128, got %u\n", VAR_17[1]);
    VAR_18 = (ENHMETAHEADER *)(VAR_17 + 2);
    FUNC_20(VAR_18->iType == VAR_0, "wrong iType %04x\n", VAR_18->iType);
    FUNC_20(VAR_18->dSignature == VAR_1, "wrong dSignature %08x\n", VAR_18->dSignature);

    FUNC_7(VAR_16);
    FUNC_5(VAR_16);

    FUNC_3(VAR_13.emf.hemf);
    FUNC_11(VAR_12);
}
