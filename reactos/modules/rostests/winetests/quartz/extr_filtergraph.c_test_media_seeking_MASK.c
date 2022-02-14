
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGLONG ;
typedef int IMediaSeeking ;
typedef int IMediaFilter ;
typedef int IFilterGraph2 ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int*,int *,int,int *) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int*,int ,int *,int ) ;
 int FUNC_11 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(IFilterGraph2 *VAR_8)
{
    IMediaSeeking *VAR_9;
    IMediaFilter *VAR_10;
    LONGLONG VAR_11, VAR_12, VAR_13;
    GUID VAR_14;
    HRESULT VAR_15;

    FUNC_1(VAR_8);
    VAR_15 = FUNC_0(VAR_8, &VAR_5, (void **)&VAR_9);
    FUNC_12(VAR_15 == VAR_6, "QueryInterface(IMediaControl) failed: %08x\n", VAR_15);

    VAR_15 = FUNC_0(VAR_8, &VAR_4, (void **)&VAR_10);
    FUNC_12(VAR_15 == VAR_6, "QueryInterface(IMediaFilter) failed: %08x\n", VAR_15);

    VAR_14 = VAR_3;
    VAR_15 = FUNC_8(VAR_9, &VAR_14);
    FUNC_12(VAR_15 == VAR_6, "GetTimeFormat failed: %#x\n", VAR_15);
    FUNC_12(FUNC_11(&VAR_14, &VAR_7), "got %s\n", FUNC_13(&VAR_14));

    VAR_11 = 0xdeadbeef;
    VAR_15 = FUNC_4(VAR_9, &VAR_11, ((void*)0), 0x123456789a, ((void*)0));
    FUNC_12(VAR_15 == VAR_6, "ConvertTimeFormat failed: %#x\n", VAR_15);
    FUNC_12(VAR_11 == 0x123456789a, "got %s\n", FUNC_14(VAR_11));

    VAR_11 = 0xdeadbeef;
    VAR_15 = FUNC_4(VAR_9, &VAR_11, &VAR_7, 0x123456789a, ((void*)0));
    FUNC_12(VAR_15 == VAR_6, "ConvertTimeFormat failed: %#x\n", VAR_15);
    FUNC_12(VAR_11 == 0x123456789a, "got %s\n", FUNC_14(VAR_11));

    VAR_11 = 0xdeadbeef;
    VAR_15 = FUNC_4(VAR_9, &VAR_11, ((void*)0), 0x123456789a, &VAR_7);
    FUNC_12(VAR_15 == VAR_6, "ConvertTimeFormat failed: %#x\n", VAR_15);
    FUNC_12(VAR_11 == 0x123456789a, "got %s\n", FUNC_14(VAR_11));

    VAR_15 = FUNC_5(VAR_9, &VAR_11);
    FUNC_12(VAR_15 == VAR_6, "GetCurrentPosition failed: %#x\n", VAR_15);
    FUNC_12(VAR_11 == 0, "got %s\n", FUNC_14(VAR_11));

    VAR_15 = FUNC_6(VAR_9, &VAR_13);
    FUNC_12(VAR_15 == VAR_6, "GetDuration failed: %#x\n", VAR_15);
    FUNC_12(VAR_13 > 0, "got %s\n", FUNC_14(VAR_13));

    VAR_15 = FUNC_7(VAR_9, &VAR_12);
    FUNC_12(VAR_15 == VAR_6, "GetCurrentPosition failed: %08x\n", VAR_15);
    FUNC_12(VAR_12 == VAR_13 || VAR_12 == VAR_13 + 1, "expected %s, got %s\n",
        FUNC_14(VAR_13), FUNC_14(VAR_12));

    VAR_15 = FUNC_10(VAR_9, ((void*)0), VAR_2, ((void*)0), VAR_1);
    FUNC_12(VAR_15 == VAR_6, "SetPositions failed: %#x\n", VAR_15);
    VAR_15 = FUNC_10(VAR_9, ((void*)0), VAR_1, ((void*)0), VAR_2);
    FUNC_12(VAR_15 == VAR_6, "SetPositions failed: %#x\n", VAR_15);

    VAR_11 = 0;
    VAR_15 = FUNC_10(VAR_9, &VAR_11, VAR_0, ((void*)0), VAR_1);
    FUNC_12(VAR_15 == VAR_6, "SetPositions failed: %08x\n", VAR_15);

    FUNC_3(VAR_10, ((void*)0));
    VAR_11 = 0xdeadbeef;
    VAR_15 = FUNC_5(VAR_9, &VAR_11);
    FUNC_12(VAR_15 == VAR_6, "GetCurrentPosition failed: %08x\n", VAR_15);
    FUNC_12(VAR_11 == 0, "Position != 0 (%s)\n", FUNC_14(VAR_11));
    FUNC_1(VAR_8);

    FUNC_9(VAR_9);
    FUNC_2(VAR_10);
}
