
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TEST_STATUS ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;

TEST_STATUS FUNC_10()
{
    HGLOBAL VAR_7 = 0;
    UINT VAR_8 = 0;
    TEST_STATUS VAR_9 = VAR_6;

    FUNC_7("Test for the proper lock count");

    VAR_7 = FUNC_0(VAR_3, VAR_4);
    if (0 != VAR_7)
    {

        FUNC_7("Testing initial allocation");

        FUNC_7("Testing for a lock of 0");
        VAR_8 = FUNC_1(VAR_7);
        if (((VAR_2 & VAR_8) == 0))
        {
            VAR_9 = FUNC_9(VAR_9, VAR_5);
        }
        else
        {
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }
        FUNC_8(VAR_9);

        FUNC_7("Pointer from handle: ");
        FUNC_5(FUNC_3(VAR_7));

        FUNC_7("Testing after a lock");
        FUNC_7("Testing for a lock of 1");
        VAR_8 = FUNC_1(VAR_7);
        if (((VAR_2 & VAR_8) == 1))
        {
            VAR_9 = FUNC_9(VAR_9, VAR_5);
        }
        else
        {
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }
        FUNC_8(VAR_9);

        FUNC_4(VAR_7);
        FUNC_7("Testing after an unlock");
        FUNC_7("Testing for a lock of 0");
        VAR_8 = FUNC_1(VAR_7);
        if (((VAR_2 & VAR_8) == 0))
        {
            VAR_9 = FUNC_9(VAR_9, VAR_5);
        }
        else
        {
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }
        FUNC_8(VAR_9);
    }
    else
    {
        FUNC_7("GlobalAlloc failed!");
        VAR_9 = FUNC_9(VAR_9, VAR_0);
    }

    FUNC_7("Test for discarded memory");
    FUNC_7("Allocating an empty moveable block---automatically marked as discarded");
    VAR_7 = FUNC_0(VAR_3, 0);
    if (0 != VAR_7)
    {
        FUNC_7("Allocation handle: ");
        FUNC_5(VAR_7);
        FUNC_7("Testing for a discarded flag");
        VAR_8 = FUNC_1(VAR_7);
        if (0 != (VAR_8 & VAR_1))
        {
            VAR_9 = FUNC_9(VAR_9, VAR_5);
        }
        else
        {
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }
        FUNC_7("Flags:");
        FUNC_6(VAR_8);
        FUNC_8(VAR_9);

        FUNC_2(VAR_7);
    }
    else
    {
        FUNC_7("GlobalAlloc failed!");
        VAR_9 = FUNC_9(VAR_9, VAR_0);
    }
    return VAR_9;
}
