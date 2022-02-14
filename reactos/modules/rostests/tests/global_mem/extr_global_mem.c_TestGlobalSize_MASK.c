
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_STATUS ;
typedef scalar_t__ SIZE_T ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;

TEST_STATUS FUNC_8()
{
    HGLOBAL VAR_6 = 0;
    SIZE_T VAR_7 = 0;
    TEST_STATUS VAR_8 = VAR_5;
    TEST_STATUS VAR_9 = VAR_5;
    FUNC_3("Testing GlobalSize()");

    FUNC_5("Testing GlobalSize with a block of GMEM_FIXED memory");
    VAR_6 = FUNC_0(VAR_1, VAR_3);
    if (0 != VAR_6)
    {
        VAR_7 = FUNC_2(VAR_6);
        if (VAR_3 <= VAR_7)
        {
            VAR_8 = FUNC_7(VAR_8, VAR_4);
        }
        else
        {
            FUNC_5("GlobalSize returned:");
            FUNC_4(VAR_7);
            VAR_8 = FUNC_7(VAR_8, VAR_0);
        }

        FUNC_1(VAR_6);
    }
    else
    {
        FUNC_5("GlobalAlloc failed!");
        VAR_8 = FUNC_7(VAR_8, VAR_0);
    }

    FUNC_5("Result from subtest:");
    FUNC_6(VAR_8);
    VAR_9 = FUNC_7(VAR_9, VAR_8);

    FUNC_5("Testing GlobalSize with a block of GMEM_MOVEABLE memory");
    VAR_6 = FUNC_0(VAR_2, VAR_3);
    if (0 != VAR_6)
    {
        VAR_7 = FUNC_2(VAR_6);
        if (VAR_3 <= VAR_7)
        {
            VAR_8 = FUNC_7(VAR_8, VAR_4);
        }
        else
        {
            FUNC_5("GlobalSize returned:");
            FUNC_4(VAR_7);
            VAR_8 = FUNC_7(VAR_8, VAR_0);
        }

        FUNC_1(VAR_6);
    }
    else
    {
        FUNC_5("GlobalAlloc failed!");
        VAR_8 = FUNC_7(VAR_8, VAR_0);
    }

    FUNC_5("Result from subtest:");
    FUNC_6(VAR_8);
    VAR_9 = FUNC_7(VAR_9, VAR_8);

    FUNC_5("Testing GlobalSize with discarded memory");
    VAR_6 = FUNC_0(VAR_2, 0);
    if (0 != VAR_6)
    {
        VAR_7 = FUNC_2(VAR_6);
        if (0 == VAR_7)
        {
            VAR_8 = FUNC_7(VAR_8, VAR_4);
        }
        else
        {
            FUNC_5("GlobalSize returned:");
            FUNC_4(VAR_7);
            VAR_8 = FUNC_7(VAR_8, VAR_0);
        }

        FUNC_1(VAR_6);
    }
    else
    {
        FUNC_5("GlobalAlloc failed!");
        VAR_8 = FUNC_7(VAR_8, VAR_0);
    }

    FUNC_5("Result from subtest:");
    FUNC_6(VAR_8);
    VAR_9 = FUNC_7(VAR_9, VAR_8);

    FUNC_5("Test result:");
    FUNC_6(VAR_9);
    return VAR_9;
}
