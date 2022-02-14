
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TEST_STATUS ;
typedef int LPVOID ;
typedef scalar_t__ HGLOBAL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;

TEST_STATUS FUNC_12()
{
    HGLOBAL VAR_7 = 0;
    HGLOBAL VAR_8 = 0;
    LPVOID VAR_9 = 0;
    TEST_STATUS VAR_10 = VAR_6;
    TEST_STATUS VAR_11 = VAR_6;

    FUNC_7("Testing GlobalReAlloc() on memory allocated as GMEM_FIXED");


    FUNC_7("Allocating buffer");
    VAR_7 = FUNC_0(VAR_1, VAR_4);
    if (0 != VAR_7)
    {
        FUNC_7("Testing to see if this is converted into a movable block");
        VAR_8 = FUNC_3(VAR_7, VAR_4 + 100, VAR_3 | VAR_2);
        if (0 == VAR_8)
        {
            FUNC_7("GlobalReAlloc failed-- returned NULL");
            VAR_10 = FUNC_9(VAR_10, VAR_0);
            FUNC_8(VAR_10);
        }
        else
        {
            VAR_7 = VAR_8;
            if (0 == FUNC_5(VAR_7))
            {
                FUNC_7("GlobalReAlloc returned a fixed pointer.");
                VAR_10 = FUNC_9(VAR_10, VAR_0);
                FUNC_8(VAR_10);
            }
            else
            {
                VAR_9 = FUNC_2(VAR_7);
                VAR_10 = FUNC_9(VAR_10, VAR_5);
                VAR_10 = FUNC_9(VAR_10, FUNC_10(VAR_9, VAR_4 + 100));
                if (VAR_0 == VAR_10)
                {
                    FUNC_7("Memory Read failed.");
                }
                VAR_10 = FUNC_9(VAR_10, FUNC_11(VAR_9, VAR_4 + 100));
                if (VAR_0 == VAR_10)
                {
                    FUNC_7("Memory Write failed.");
                }
                FUNC_4(VAR_7);
            }
        }

        FUNC_1(VAR_7);
    }
    else
    {
        FUNC_7("Global Alloc Failed.");
        VAR_10 = FUNC_9(VAR_10, VAR_0);
    }
    FUNC_7("Subtest result:");
    FUNC_8(VAR_10);
    FUNC_7("");

    VAR_11 = FUNC_9(VAR_11, VAR_10);
    VAR_10 = VAR_6;


    FUNC_7("Allocating buffer");
    VAR_7 = FUNC_0(VAR_1, VAR_4);
    if (0 != VAR_7)
    {
        FUNC_7("Testing to see if a new fixed block is returned.");
        VAR_8 = FUNC_3(VAR_7, VAR_4 - 100, VAR_3);
        if (0 == VAR_8)
        {
            FUNC_7("GlobalReAlloc failed-- returned NULL");
            VAR_10 = FUNC_9(VAR_10, VAR_0);
            FUNC_8(VAR_10);
        }
        else
        {
            FUNC_7("Alloced Handle: ");
            FUNC_6(VAR_7);
            FUNC_7("ReAlloced Handle: ");
            FUNC_6(VAR_8);
            if (VAR_7 == VAR_8)
            {
                FUNC_7("GlobalReAlloc returned the same pointer.  The documentation states that this is wrong, but Windows NT works this way.");
            }

            VAR_7 = VAR_8;
            VAR_10 = FUNC_9(VAR_10, VAR_5);
            VAR_10 = FUNC_9(VAR_10, FUNC_10((LPVOID)VAR_7, VAR_4 - 100));
            VAR_10 = FUNC_9(VAR_10, FUNC_11((LPVOID)VAR_7, VAR_4 - 100));
        }

        FUNC_1(VAR_7);
    }
    else
    {
        VAR_10 = FUNC_9(VAR_10, VAR_0);
    }
    FUNC_7("Subtest result:");
    FUNC_8(VAR_10);
    FUNC_7("");

    VAR_11 = FUNC_9(VAR_11, VAR_10);
    VAR_10 = VAR_6;


    FUNC_7("Allocating buffer");
    VAR_7 = FUNC_0(VAR_1, VAR_4);
    if (0 != VAR_7)
    {
        FUNC_7("Testing to see if a fixed pointer is reallocated in place.");
        VAR_8 = FUNC_3(VAR_7, VAR_4 - 100, 0);
        if (0 == VAR_8)
        {
            FUNC_7("GlobalReAlloc failed-- returned NULL");
            VAR_10 = FUNC_9(VAR_10, VAR_0);
            FUNC_8(VAR_10);
        }
        else
        {
            FUNC_7("Alloced Handle: ");
            FUNC_6(VAR_7);
            FUNC_7("ReAlloced Handle: ");
            FUNC_6(VAR_8);
            if (VAR_7 != VAR_8)
            {
                FUNC_7("GlobalReAlloc returned a different.");
                VAR_10 = FUNC_9(VAR_10, VAR_0);
                FUNC_8(VAR_10);
            }
            else
            {
                VAR_10 = FUNC_9(VAR_10, VAR_5);
                VAR_10 = FUNC_9(VAR_10, FUNC_10((LPVOID)VAR_7, VAR_4 - 100));
                VAR_10 = FUNC_9(VAR_10, FUNC_11((LPVOID)VAR_7, VAR_4 - 100));
            }
        }

        FUNC_1(VAR_7);
    }
    else
    {
        VAR_10 = FUNC_9(VAR_10, VAR_0);
    }
    FUNC_7("Subtest result:");
    FUNC_8(VAR_10);
    FUNC_7("");

    VAR_11 = FUNC_9(VAR_11, VAR_10);

    FUNC_7("");
    return VAR_11;
}
