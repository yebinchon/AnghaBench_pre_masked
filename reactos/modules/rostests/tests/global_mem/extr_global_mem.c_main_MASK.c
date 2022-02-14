
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TEST_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(int VAR_6, char ** VAR_7)
{
    TEST_STATUS VAR_8 = VAR_5;
    FUNC_0("Testing GlobalXXX memory management functions.");

    VAR_8 = FUNC_3(VAR_8, FUNC_4(VAR_4));
    VAR_8 = FUNC_3(VAR_8, FUNC_4(VAR_1));
    VAR_8 = FUNC_3(VAR_8, FUNC_4(VAR_2));
    VAR_8 = FUNC_3(VAR_8, FUNC_4(VAR_3));

    if (VAR_0 == VAR_8)
    {
        FUNC_1("Skipping any further tests.  GlobalAlloc/Free fails.");
        FUNC_2(VAR_8);
        return VAR_8;
    }

    VAR_8 = FUNC_3(VAR_8, FUNC_8(VAR_4));
    VAR_8 = FUNC_3(VAR_8, FUNC_8(VAR_1));
    VAR_8 = FUNC_3(VAR_8, FUNC_8(VAR_2));
    VAR_8 = FUNC_3(VAR_8, FUNC_8(VAR_3));

    VAR_8 = FUNC_3(VAR_8, FUNC_9());

    VAR_8 = FUNC_3(VAR_8, FUNC_6());

    VAR_8 = FUNC_3(VAR_8, FUNC_7());

    VAR_8 = FUNC_3(VAR_8, FUNC_10());

    VAR_8 = FUNC_3(VAR_8, FUNC_5());


    FUNC_0("Test suite result");
    FUNC_2(VAR_8);
    return VAR_8;
}
