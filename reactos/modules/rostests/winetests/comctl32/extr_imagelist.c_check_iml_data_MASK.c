
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct memstream {int IStream_iface; int stream; } ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_6__ {int LowPart; } ;
struct TYPE_7__ {TYPE_1__ cbSize; } ;
typedef TYPE_2__ STATSTG ;
typedef int SIZE ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef scalar_t__ INT ;
typedef int ILHEAD ;
typedef char const* HRESULT ;
typedef int * HIMAGELIST ;
typedef int HGLOBAL ;
typedef int BOOL ;


 char* FUNC_0 (int ,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,TYPE_3__,int ,int *) ;
 char* FUNC_4 (int ,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 scalar_t__ FUNC_5 (int const*,char*,int,int *,int,char const*) ;
 int FUNC_6 (int const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct memstream*) ;
 int FUNC_8 (int const*,int *) ;
 int FUNC_9 (struct memstream*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_14 (int *) ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static void FUNC_17(HIMAGELIST VAR_4, INT VAR_5, INT VAR_6, INT VAR_7, INT VAR_8, INT VAR_9,
        INT VAR_10, const char *VAR_11)
{
    INT VAR_12, VAR_13, VAR_14, VAR_15;
    struct memstream VAR_16;
    const ILHEAD *VAR_17;
    LARGE_INTEGER VAR_18;
    HIMAGELIST VAR_19;
    HGLOBAL VAR_20;
    STATSTG VAR_21;
    char *VAR_22;
    HRESULT VAR_23;
    SIZE VAR_24;
    BOOL VAR_25;

    VAR_12 = FUNC_14(VAR_4);
    FUNC_11(VAR_12 == VAR_7, "%s: expected image count %d got %d\n", VAR_11, VAR_7, VAR_12);

    VAR_12 = FUNC_13(VAR_4, &VAR_13, &VAR_14);
    FUNC_11(VAR_12, "ImageList_GetIconSize failed\n");
    FUNC_11(VAR_13 == VAR_5, "%s: wrong cx %d (expected %d)\n", VAR_11, VAR_13, VAR_5);
    FUNC_11(VAR_14 == VAR_6, "%s: wrong cy %d (expected %d)\n", VAR_11, VAR_14, VAR_6);

    FUNC_9(&VAR_16);
    VAR_25 = FUNC_16(VAR_4, &VAR_16.IStream_iface);
    FUNC_11(VAR_25, "%s: ImageList_Write failed\n", VAR_11);

    VAR_23 = FUNC_0(VAR_16.stream, &VAR_20);
    FUNC_11(VAR_23 == VAR_3, "%s: Failed to get hglobal, %#x\n", VAR_11, VAR_23);

    VAR_23 = FUNC_4(VAR_16.stream, &VAR_21, VAR_1);
    FUNC_11(VAR_23 == VAR_3, "Stat() failed, hr %#x.\n", VAR_23);

    VAR_22 = FUNC_1(VAR_20);

    FUNC_11(VAR_22 != 0, "%s: ImageList_Write didn't write any data\n", VAR_11);
    FUNC_11(VAR_21.cbSize.LowPart > sizeof(ILHEAD), "%s: ImageList_Write wrote not enough data\n", VAR_11);

    VAR_17 = (const ILHEAD *)VAR_22;
    FUNC_6(VAR_17, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
    FUNC_8(VAR_17, &VAR_24);
    VAR_15 = FUNC_5(VAR_17, VAR_22 + sizeof(ILHEAD), VAR_21.cbSize.LowPart - sizeof(ILHEAD),
            &VAR_24, VAR_10 & 0xfe, VAR_11);
    if (!FUNC_10(VAR_17) && VAR_15 < VAR_21.cbSize.LowPart - sizeof(ILHEAD))
    {
        FUNC_11( VAR_10 & VAR_0, "%s: extra data %u/%u but mask not expected\n", VAR_11, VAR_21.cbSize.LowPart, VAR_15 );
        FUNC_5(VAR_17, VAR_22 + sizeof(ILHEAD) + VAR_15, VAR_21.cbSize.LowPart - sizeof(ILHEAD) - VAR_15,
            &VAR_24, 1, VAR_11);
    }


    VAR_18.QuadPart = 0;
    FUNC_3(VAR_16.stream, VAR_18, VAR_2, ((void*)0));
    VAR_19 = FUNC_15(&VAR_16.IStream_iface);
    FUNC_11(VAR_19 != ((void*)0), "%s: Failed to deserialize imagelist\n", VAR_11);
    FUNC_12(VAR_19);

    FUNC_2(VAR_20);
    FUNC_7(&VAR_16);
}
