
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_STATUS ;
typedef int LPVOID ;
typedef scalar_t__ HGLOBAL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__) ;

TEST_STATUS FUNC_11()
{
    HGLOBAL VAR_5 = 0;
    HGLOBAL VAR_6 = 0;
    LPVOID VAR_7 = 0;
    TEST_STATUS VAR_8 = VAR_4;
    TEST_STATUS VAR_9 = VAR_4;

    FUNC_6("Testing GlobalReAlloc() on memory allocated as GMGM_MOVEABLE");


    FUNC_6("Allocating buffer");
    VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (0 != VAR_5)
    {
        FUNC_6("Testing GlobalReAlloc on a unlocked block.");
        VAR_6 = FUNC_3(VAR_5, VAR_2 - 100, 0);
        if (0 == VAR_6)
        {
            FUNC_6("GlobalReAlloc failed-- returned NULL");
            VAR_8 = FUNC_8(VAR_8, VAR_0);
            FUNC_7(VAR_8);
        }
        else
        {
            FUNC_6("Alloced Handle: ");
            FUNC_5(VAR_5);
            FUNC_6("ReAlloced Handle: ");
            FUNC_5(VAR_6);

            VAR_7 = FUNC_2(VAR_6);
            VAR_5 = VAR_6;
            VAR_8 = FUNC_8(VAR_8, VAR_3);
            VAR_8 = FUNC_8(VAR_8, FUNC_9(VAR_7, VAR_2 - 100));
            VAR_8 = FUNC_8(VAR_8, FUNC_10(VAR_7, VAR_2 - 100));
            FUNC_4(VAR_6);
        }

        FUNC_1(VAR_5);
    }
    else
    {
        VAR_8 = FUNC_8(VAR_8, VAR_0);
    }
    FUNC_6("Subtest result:");
    FUNC_7(VAR_8);
    FUNC_6("");

    VAR_9 = FUNC_8(VAR_9, VAR_8);
    VAR_8 = VAR_4;


    FUNC_6("Allocating buffer");
    VAR_5 = FUNC_0(VAR_1, VAR_2);
    if (0 != VAR_5)
    {

        FUNC_6("Testing GlobalReAlloc on a locked block.");
        VAR_7 = FUNC_2(VAR_5);
        VAR_6 = FUNC_3(VAR_5, VAR_2 - 100, 0);
        if (0 == VAR_6)
        {
            FUNC_6("GlobalReAlloc failed-- returned NULL");
            VAR_8 = FUNC_8(VAR_8, VAR_0);
            FUNC_7(VAR_8);
        }
        else
        {
            FUNC_6("Alloced Handle: ");
            FUNC_5(VAR_5);
            FUNC_6("ReAlloced Handle: ");
            FUNC_5(VAR_6);
            if (VAR_5 != VAR_6)
            {
                FUNC_6("GlobalReAlloc returned a different block.");
            }
            VAR_7 = FUNC_2(VAR_6);
            VAR_8 = FUNC_8(VAR_8, VAR_3);
            VAR_8 = FUNC_8(VAR_8, FUNC_9(VAR_7, VAR_2 - 100));
            VAR_8 = FUNC_8(VAR_8, FUNC_10(VAR_7 , VAR_2 - 100));
            FUNC_4(VAR_6);

        }

        FUNC_4(VAR_5);

        FUNC_1(VAR_5);
    }
    else
    {
        VAR_8 = FUNC_8(VAR_8, VAR_0);
    }
    FUNC_6("Subtest result:");
    FUNC_7(VAR_8);
    FUNC_6("");

    VAR_9 = FUNC_8(VAR_9, VAR_8);

    FUNC_6("");
    return VAR_9;
}
