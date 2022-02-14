
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_STATUS ;
typedef scalar_t__ HGLOBAL ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int ,int ) ;

TEST_STATUS FUNC_10()
{
    HGLOBAL VAR_6 = 0;
    HGLOBAL VAR_7 = 0;
    DWORD VAR_8 = 0;
    TEST_STATUS VAR_9 = VAR_5;
    TEST_STATUS VAR_10 = VAR_5;

    FUNC_4("Testing GlobalDiscard()");
    VAR_6 = FUNC_0(VAR_2, VAR_3);
    if (0 != VAR_6)
    {
        FUNC_7("Allocation handle: ");
        FUNC_5(VAR_6);

        VAR_7 = FUNC_1(VAR_6);
        if (0 == VAR_7)
        {
            FUNC_7("GlobalDiscard returned NULL");
            VAR_9 = FUNC_9(VAR_9, VAR_0);
        }
        else
        {
            VAR_8 = FUNC_2(VAR_7);
            FUNC_7("Flags from the new memory block.");
            FUNC_6(VAR_8);
            if (0 != (VAR_8 & VAR_1))
            {
                VAR_9 = FUNC_9(VAR_9, VAR_4);
            }
            else
            {
                FUNC_7("Block is not marked as discardable.");
                VAR_9 = FUNC_9(VAR_9, VAR_0);
            }
        }

        FUNC_3(VAR_7);
    }
    else
    {
        FUNC_7("GlobalAlloc failed!");
        VAR_9 = FUNC_9(VAR_9, VAR_0);
    }

    FUNC_7("Result from subtest:");
    FUNC_8(VAR_9);

    VAR_10 = FUNC_9(VAR_10, VAR_9);

    FUNC_8(VAR_10);
    return VAR_10;
}
