
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OAFilterState ;
typedef int IMediaControl ;
typedef int IFilterGraph2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(IFilterGraph2 *VAR_6)
{
    IMediaControl *VAR_7;
    OAFilterState VAR_8;
    HRESULT VAR_9;

    VAR_9 = FUNC_0(VAR_6, &VAR_0, (void **)&VAR_7);
    FUNC_7(VAR_9 == VAR_2, "QueryInterface(IMediaControl) failed: %x\n", VAR_9);

    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_5, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_4(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Run() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, VAR_1, &VAR_8);
    FUNC_7(FUNC_6(VAR_9), "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_4, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_5(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Stop() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_5, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_2(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Pause() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_3, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_4(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Run() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_4, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_2(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Pause() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_3, "wrong state %d\n", VAR_8);

    VAR_9 = FUNC_5(VAR_7);
    FUNC_7(FUNC_6(VAR_9), "Stop() failed: %x\n", VAR_9);
    VAR_9 = FUNC_1(VAR_7, 1000, &VAR_8);
    FUNC_7(VAR_9 == VAR_2, "GetState() failed: %x\n", VAR_9);
    FUNC_7(VAR_8 == VAR_5, "wrong state %d\n", VAR_8);

    FUNC_3(VAR_7);
}
