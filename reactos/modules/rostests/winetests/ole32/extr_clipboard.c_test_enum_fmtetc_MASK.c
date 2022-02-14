
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cfFormat; scalar_t__ dwAspect; scalar_t__ lindex; scalar_t__ tymed; int * ptd; } ;
typedef int IEnumFORMATETC ;
typedef int IDataObject ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ FORMATETC ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,int,TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int **) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_15(IDataObject *VAR_7)
{
    HRESULT VAR_8;
    IDataObject *VAR_9;
    IEnumFORMATETC *VAR_10, *VAR_11;
    FORMATETC VAR_12, VAR_13;
    DWORD VAR_14 = 0;

    VAR_8 = FUNC_9(&VAR_9);
    FUNC_12(VAR_8 == VAR_6, "OleGetClipboard failed with error 0x%08x\n", VAR_8);

    VAR_8 = FUNC_2(VAR_9, VAR_1, &VAR_10);
    FUNC_12(VAR_8 == VAR_4 ||
       FUNC_10(VAR_8 == VAR_3),
       "got %08x\n", VAR_8);

    VAR_2 = 0;
    VAR_8 = FUNC_2(VAR_9, VAR_0, &VAR_10);
    FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
    FUNC_12(VAR_2 == 0, "EnumFormatEtc was called\n");
    if (FUNC_1(VAR_8))
    {
        FUNC_13("EnumFormatEtc failed, skipping tests.\n");
        return;
    }

    if(VAR_7) FUNC_2(VAR_7, VAR_0, &VAR_11);

    while((VAR_8 = FUNC_5(VAR_10, 1, &VAR_12, ((void*)0))) == VAR_6)
    {
        FUNC_12(VAR_7 != ((void*)0), "shouldn't be here\n");
        VAR_8 = FUNC_5(VAR_11, 1, &VAR_13, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "%d: got %08x\n", VAR_14, VAR_8);
        FUNC_14("%d: %s\n", VAR_14, FUNC_11(&VAR_12));
        FUNC_12(VAR_12.cfFormat == VAR_13.cfFormat, "%d: %04x %04x\n", VAR_14, VAR_12.cfFormat, VAR_13.cfFormat);
        FUNC_12(VAR_12.dwAspect == VAR_13.dwAspect, "%d: %08x %08x\n", VAR_14, VAR_12.dwAspect, VAR_13.dwAspect);
        FUNC_12(VAR_12.lindex == VAR_13.lindex, "%d: %08x %08x\n", VAR_14, VAR_12.lindex, VAR_13.lindex);
        FUNC_12(VAR_12.tymed == VAR_13.tymed, "%d: %08x %08x\n", VAR_14, VAR_12.tymed, VAR_13.tymed);
        if(VAR_12.ptd)
        {
            FUNC_12(VAR_13.ptd != ((void*)0), "%d: expected non-NULL\n", VAR_14);
            FUNC_0(VAR_12.ptd);
            FUNC_0(VAR_13.ptd);
        }
        VAR_14++;
    }

    FUNC_12(VAR_8 == VAR_5, "%d: got %08x\n", VAR_14, VAR_8);

    if(VAR_7)
    {
        VAR_8 = FUNC_5(VAR_11, 1, &VAR_13, ((void*)0));
        FUNC_12(VAR_8 == VAR_5, "%d: got %08x\n", VAR_14, VAR_8);
        FUNC_6(VAR_11);
    }

    VAR_8 = FUNC_7(VAR_10);
    FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);

    if(VAR_7)
    {
        IEnumFORMATETC *VAR_15;
        FORMATETC VAR_16;

        VAR_8 = FUNC_5(VAR_10, 1, &VAR_16, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        VAR_8 = FUNC_5(VAR_10, 1, &VAR_16, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        VAR_8 = FUNC_5(VAR_10, 1, &VAR_16, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);

        VAR_8 = FUNC_7(VAR_10);
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        VAR_8 = FUNC_8(VAR_10, 2);
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);

        VAR_8 = FUNC_4(VAR_10, &VAR_15);
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        VAR_8 = FUNC_5(VAR_10, 1, &VAR_12, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        FUNC_12(VAR_12.cfFormat == VAR_16.cfFormat, "formats don't match\n");
        VAR_8 = FUNC_5(VAR_15, 1, &VAR_12, ((void*)0));
        FUNC_12(VAR_8 == VAR_6, "got %08x\n", VAR_8);
        FUNC_12(VAR_12.cfFormat == VAR_16.cfFormat, "formats don't match\n");
        FUNC_6(VAR_15);
    }

    FUNC_6(VAR_10);
    FUNC_3(VAR_9);
}
