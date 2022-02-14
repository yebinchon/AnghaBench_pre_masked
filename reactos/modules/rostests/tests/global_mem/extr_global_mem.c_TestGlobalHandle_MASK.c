
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_STATUS ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;

TEST_STATUS FUNC_10()
{
    HGLOBAL VAR_6 = 0;
    HGLOBAL VAR_7 = 0;
    PVOID VAR_8 = 0;
    TEST_STATUS VAR_9 = VAR_5;
    TEST_STATUS VAR_10 = VAR_5;

    FUNC_5("Testing GlobalHandle()");

    FUNC_7("Testing GlobalHandle with a block of GMEM_FIXED memory");
    VAR_6 = FUNC_0(VAR_1, VAR_3);
    if (0 != VAR_6)
    {

        FUNC_7("Allocation handle: ");
        FUNC_6(VAR_6);

        VAR_7 = FUNC_2(VAR_6);
        if (VAR_6 == VAR_7)
        {
            VAR_9 = FUNC_9(VAR_9, VAR_4);
        }
        else
        {
            FUNC_7("GlobalHandle returned:");
            FUNC_6(VAR_7);
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }

        FUNC_1(VAR_6);
    }
    else
    {
        FUNC_7("GlobalAlloc failed!");
        VAR_9 = FUNC_9(VAR_9, VAR_0);
    }

    FUNC_7("Result from subtest:");
    FUNC_8(VAR_9);
    VAR_10 = FUNC_9(VAR_10, VAR_9);


    VAR_9 = VAR_5;
    FUNC_7("Testing GlobalHandle with a block of GMEM_MOVEABLE memory");
    VAR_6 = FUNC_0(VAR_2, VAR_3);
    if (0 != VAR_6)
    {

        FUNC_7("Allocation handle: ");
        FUNC_6(VAR_6);
        VAR_8 = FUNC_3(VAR_6);
        VAR_7 = FUNC_2(VAR_8);
        if (VAR_6 == VAR_7)
        {
            VAR_9 = FUNC_9(VAR_9, VAR_4);
        }
        else
        {
            FUNC_7("GlobalHandle returned:");
            FUNC_6(VAR_7);
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }

        FUNC_4(VAR_6);
        FUNC_1(VAR_6);
    }
    else
    {
        FUNC_7("GlobalAlloc failed!");
        VAR_9 = FUNC_9(VAR_9, VAR_0);
    }

    FUNC_7("Result from subtest:");
    FUNC_8(VAR_9);
    VAR_10 = FUNC_9(VAR_10, VAR_9);


    FUNC_7("Global Handle test results:");
    FUNC_8(VAR_10);
    return VAR_10;
}
