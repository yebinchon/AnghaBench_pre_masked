
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pic ;
typedef int desc ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
struct TYPE_5__ {int cbSizeofstruct; short picType; } ;
typedef TYPE_1__ PICTDESC ;
typedef short OLE_HANDLE ;
typedef int LONG ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int IPicture ;
typedef int IPersistStream ;
typedef short HRESULT ;
typedef int HGLOBAL ;
typedef short DWORD ;


 short FUNC_0 (int ,int ,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 short* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 short FUNC_5 (int *,int *,int ) ;
 short FUNC_6 (int *,int *,void**) ;
 int FUNC_7 (int *) ;
 short FUNC_8 (int *,int *,int ,int*) ;
 short FUNC_9 (int *,short*) ;
 short FUNC_10 (int *,short*) ;
 int FUNC_11 (int *) ;
 short FUNC_12 (int *,TYPE_2__,int ,int *) ;
 int * FUNC_13 (int ) ;
 short FUNC_14 (TYPE_1__*,int *,int ,void**) ;
 short VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (short*,char*,int) ;
 int FUNC_16 (int **,int ,int) ;
 int FUNC_17 (int,char*,...) ;
 short FUNC_18 (int *,int ,int ,int *,void**) ;

__attribute__((used)) static void FUNC_19(void)
{
    IPicture *VAR_8;
    PICTDESC VAR_9;
    short VAR_10;
    OLE_HANDLE VAR_11;
    HGLOBAL VAR_12;
    DWORD *VAR_13;
    IPersistStream *VAR_14;
    IStream *VAR_15, *VAR_16;
    LARGE_INTEGER VAR_17;
    HRESULT VAR_18;
    LONG VAR_19;

    FUNC_16(&VAR_8, 0, sizeof(VAR_8));
    VAR_9.cbSizeofstruct = sizeof(VAR_9);
    VAR_9.picType = VAR_4;
    VAR_18 = FUNC_14(&VAR_9, &VAR_3, VAR_0, (void **)&VAR_8);
    FUNC_17(VAR_18 == VAR_6, "OleCreatePictureIndirect error %#x\n", VAR_18);

    VAR_10 = -1;
    VAR_18 = FUNC_10(VAR_8, &VAR_10);
    FUNC_17(VAR_18 == VAR_6, "get_Type error %#x\n", VAR_18);
    FUNC_17(VAR_10 == VAR_4,"expected picture type PICTYPE_NONE, got %d\n", VAR_10);

    VAR_11 = (OLE_HANDLE)0xdeadbeef;
    VAR_18 = FUNC_9(VAR_8, &VAR_11);
    FUNC_17(VAR_18 == VAR_6,"get_Handle error %#8x\n", VAR_18);
    FUNC_17(!VAR_11, "get_Handle returned wrong handle %#x\n", VAR_11);

    VAR_12 = FUNC_1(VAR_1, 4096);
    VAR_18 = FUNC_0(VAR_12, VAR_0, &VAR_15);
    FUNC_17(VAR_18 == VAR_6, "createstreamonhglobal error %#x\n", VAR_18);

    VAR_19 = -1;
    VAR_18 = FUNC_8(VAR_8, VAR_15, VAR_7, &VAR_19);
    FUNC_17(VAR_18 == VAR_6, "IPicture_SaveasFile error %#x\n", VAR_18);
    FUNC_17(VAR_19 == -1, "expected -1, got %d\n", VAR_19);

    VAR_19 = -1;
    VAR_18 = FUNC_8(VAR_8, VAR_15, VAR_0, &VAR_19);
    FUNC_17(VAR_18 == VAR_6, "IPicture_SaveasFile error %#x\n", VAR_18);
    FUNC_17(VAR_19 == -1, "expected -1, got %d\n", VAR_19);

    VAR_18 = FUNC_6(VAR_8, &VAR_2, (void **)&VAR_14);
    FUNC_17(VAR_18 == VAR_6, "QueryInterface error %#x\n", VAR_18);

    VAR_18 = FUNC_5(VAR_14, VAR_15, VAR_7);
    FUNC_17(VAR_18 == VAR_6, "Save error %#x\n", VAR_18);

    VAR_13 = FUNC_2(VAR_12);
    FUNC_17(!FUNC_15(VAR_13, "lt\0\0", 4), "got wrong stream header %04x\n", VAR_13[0]);
    FUNC_17(VAR_13[1] == 0, "expected stream size 0, got %u\n", VAR_13[1]);
    FUNC_3(VAR_12);

    FUNC_4(VAR_14);
    FUNC_7(VAR_8);


    VAR_17.QuadPart = 0;
    VAR_18 = FUNC_12(VAR_15, VAR_17, VAR_5, ((void*)0));
    FUNC_17(VAR_18 == VAR_6, "IStream_Seek %#x\n", VAR_18);

    VAR_8 = ((void*)0);
    VAR_18 = FUNC_18(VAR_15, 0, VAR_0, &VAR_3, (void **)&VAR_8);
    FUNC_17(VAR_18 == VAR_6, "OleLoadPicture error %#x\n", VAR_18);
    FUNC_17(VAR_8 != ((void*)0),"picture should not be not NULL\n");
    if (VAR_8 != ((void*)0))
    {
        VAR_10 = -1;
        VAR_18 = FUNC_10(VAR_8, &VAR_10);
        FUNC_17(VAR_18 == VAR_6,"get_Type error %#8x\n", VAR_18);
        FUNC_17(VAR_10 == VAR_4,"expected picture type PICTYPE_NONE, got %d\n", VAR_10);

        VAR_11 = (OLE_HANDLE)0xdeadbeef;
        VAR_18 = FUNC_9(VAR_8, &VAR_11);
        FUNC_17(VAR_18 == VAR_6,"get_Handle error %#8x\n", VAR_18);
        FUNC_17(!VAR_11, "get_Handle returned wrong handle %#x\n", VAR_11);

        FUNC_7(VAR_8);
    }
    FUNC_11(VAR_15);


    VAR_16 = FUNC_13(VAR_12);
    FUNC_17(VAR_16 != ((void*)0), "failed to create empty image stream\n");

    VAR_8 = ((void*)0);
    VAR_18 = FUNC_18(VAR_16, 0, VAR_0, &VAR_3, (void **)&VAR_8);
    FUNC_17(VAR_18 == VAR_6, "OleLoadPicture error %#x\n", VAR_18);
    FUNC_17(VAR_8 != ((void*)0),"picture should not be not NULL\n");
    if (VAR_8 != ((void*)0))
    {
        VAR_10 = -1;
        VAR_18 = FUNC_10(VAR_8, &VAR_10);
        FUNC_17(VAR_18 == VAR_6,"get_Type error %#8x\n", VAR_18);
        FUNC_17(VAR_10 == VAR_4,"expected picture type PICTYPE_NONE, got %d\n", VAR_10);

        VAR_11 = (OLE_HANDLE)0xdeadbeef;
        VAR_18 = FUNC_9(VAR_8, &VAR_11);
        FUNC_17(VAR_18 == VAR_6,"get_Handle error %#8x\n", VAR_18);
        FUNC_17(!VAR_11, "get_Handle returned wrong handle %#x\n", VAR_11);

        FUNC_7(VAR_8);
    }

    FUNC_11(VAR_16);
}
