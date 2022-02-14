
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * member_0; } ;
typedef TYPE_1__ IUnknown ;
typedef int IStillImageW ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*,int ,int *,void**) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,void**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int ,int ,int **,TYPE_1__*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    if (&FUNC_10)
    {
        IUnknown VAR_9 = { &VAR_8 };
        IStillImageW *VAR_10;
        IUnknown *VAR_11;
        HRESULT VAR_12;






        VAR_12 = FUNC_10(FUNC_2(((void*)0)), VAR_6, &VAR_10, &VAR_9);
        if (FUNC_7(VAR_12))
        {
            IStillImageW *VAR_13 = ((void*)0);


            VAR_7 = VAR_3;
            FUNC_3(VAR_10);
            FUNC_9(!VAR_7, "the aggregated IStillImageW shouldn't delegate\n");
            FUNC_5(VAR_10);







            VAR_12 = FUNC_4(VAR_10, &VAR_4, (void**)&VAR_13);
            if (FUNC_7(VAR_12))
            {
                FUNC_9(VAR_10 != VAR_13, "the aggregated IStillImageW and its queried IStillImageW unexpectedly match\n");

                VAR_7 = VAR_3;
                FUNC_3(VAR_13);
                FUNC_9(VAR_7, "the created IStillImageW's IStillImageW should delegate\n");
                FUNC_5(VAR_13);
                FUNC_5(VAR_13);
            }
            else
                FUNC_9(0, "could not query for IID_IStillImageW, hr = 0x%x\n", VAR_12);

            FUNC_5(VAR_10);
        }
        else
            FUNC_9(0, "could not create StillImageW, hr = 0x%X\n", VAR_12);



        VAR_12 = FUNC_0(&VAR_2, &VAR_9, VAR_1, &VAR_4, (void**)&VAR_10);
        FUNC_9(FUNC_1(VAR_12), "CoCreateInstance unexpectedly succeeded when querying for IStillImageW during aggregation\n");
        if (FUNC_7(VAR_12))
            FUNC_5(VAR_10);
        VAR_12 = FUNC_0(&VAR_2, &VAR_9, VAR_1, &VAR_5, (void**)&VAR_11);
        FUNC_9(FUNC_7(VAR_12) ||
            FUNC_8(VAR_12 == VAR_0),
                "CoCreateInstance unexpectedly failed when querying for IUnknown during aggregation, hr = 0x%x\n", VAR_12);
        if (FUNC_7(VAR_12))
            FUNC_6(VAR_11);
    }
    else
        FUNC_11("No StiCreateInstanceW function\n");
}
