
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TIMELINE_MAJOR_TYPE ;
typedef int IAMTimelineObj ;
typedef int IAMTimeline ;
typedef int * HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *,int ,int *,void**) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * FUNC_1 (int *,int **) ;
 int * FUNC_2 (int *,int*) ;
 int * FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int **,int) ;
 int * FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;






 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_9;
    IAMTimeline *VAR_10 = ((void*)0);
    IAMTimeline *VAR_11 = (IAMTimeline *)0xdeadbeef;
    IAMTimelineObj *VAR_12 = (IAMTimelineObj *)0xdeadbeef;
    IAMTimelineObj VAR_13;
    TIMELINE_MAJOR_TYPE VAR_14;

    VAR_9 = FUNC_0(&VAR_1, ((void*)0), VAR_0, &VAR_5, (void **)&VAR_10);
    FUNC_10(VAR_9 == VAR_8 || FUNC_9(VAR_9 == VAR_7), "CoCreateInstance failed: %08x\n", *VAR_9);
    if (!VAR_10) return;

    VAR_9 = FUNC_7(VAR_10, &VAR_6, ((void*)0));
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    VAR_9 = FUNC_7(VAR_10, &VAR_6, (void **)&VAR_12);
    FUNC_10(VAR_9 == VAR_3, "Expected E_NOINTERFACE got %08x\n", *VAR_9);
    FUNC_10(!VAR_12, "Expected NULL got %p\n", *VAR_12);

    VAR_9 = FUNC_6(VAR_10, ((void*)0), 0);
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    VAR_9 = FUNC_6(VAR_10, ((void*)0), 133);
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    for (VAR_14 = 0; VAR_14 < 256; VAR_14++)
    {
        VAR_12 = &VAR_13;
        VAR_9 = FUNC_6(VAR_10, &VAR_12, VAR_14);
        switch (VAR_14)
        {
            case 133:
            case 129:
            case 130:
            case 128:
            case 132:
            case 131:
                FUNC_10(VAR_9 == VAR_8, "CreateEmptyNode failed: %08x\n", *VAR_9);
                if (VAR_12 != &VAR_13) FUNC_4(VAR_12);
                break;
            default:
                FUNC_10(VAR_9 == VAR_2, "Expected E_INVALIDARG got %08x\n", *VAR_9);
                FUNC_10(VAR_12 == &VAR_13, "Expected %p got %p\n", VAR_13, VAR_12);
        }
    }

    VAR_12 = ((void*)0);
    VAR_9 = FUNC_6(VAR_10, &VAR_12, 133);
    FUNC_10(VAR_9 == VAR_8, "CreateEmptyNode failed: %08x\n", *VAR_9);
    if (!VAR_12) return;

    VAR_9 = FUNC_3(VAR_12, &VAR_5, ((void*)0));
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    VAR_9 = FUNC_3(VAR_12, &VAR_5, (void **)&VAR_11);
    FUNC_10(VAR_9 == VAR_3, "Expected E_NOINTERFACE got %08x\n", *VAR_9);
    FUNC_10(!VAR_11, "Expected NULL got %p\n", *VAR_11);

    VAR_9 = FUNC_2(VAR_12, ((void*)0));
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    VAR_9 = FUNC_2(VAR_12, &VAR_14);
    FUNC_10(VAR_9 == VAR_8, "GetTimelineType failed: %08x\n", *VAR_9);
    FUNC_10(VAR_14 == 133, "Expected TIMELINE_MAJOR_TYPE_COMPOSITE got %d\n", VAR_14);

    for (VAR_14 = 0; VAR_14 < 256; VAR_14++)
    {
        VAR_9 = FUNC_5(VAR_12, VAR_14);
        if (VAR_14 == 133)
            FUNC_10(VAR_9 == VAR_8, "SetTimelineType failed: %08x\n", *VAR_9);
        else
            FUNC_10(VAR_9 == VAR_2, "Expected E_INVALIDARG got %08x\n", *VAR_9);
    }

    VAR_9 = FUNC_1(VAR_12, ((void*)0));
    FUNC_10(VAR_9 == VAR_4, "Expected E_POINTER got %08x\n", *VAR_9);

    VAR_11 = (IAMTimeline *)0xdeadbeef;
    VAR_9 = FUNC_1(VAR_12, &VAR_11);
    FUNC_10(VAR_9 == VAR_3, "Expected E_NOINTERFACE got %08x\n", *VAR_9);
    FUNC_10(!VAR_11, "Expected NULL got %p\n", *VAR_11);

    FUNC_4(VAR_12);
    FUNC_8(VAR_10);
}
