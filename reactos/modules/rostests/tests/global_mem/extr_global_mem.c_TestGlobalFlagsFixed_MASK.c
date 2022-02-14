
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
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;

TEST_STATUS FUNC_8()
{
    HGLOBAL VAR_6 = 0;
    UINT VAR_7 = 0;
    TEST_STATUS VAR_8 = VAR_5;

    FUNC_5("Testing for correct handling of GMEM_FIXED memory");
    VAR_6 = FUNC_0(VAR_1, VAR_3);
    if (0 != VAR_6)
    {

        FUNC_5("Allocation handle: ");
        FUNC_4(VAR_6);

        FUNC_5("Testing initial allocation");
        FUNC_5("Testing for non-discarded and lock of 0");
        VAR_7 = FUNC_1(VAR_6);
        if (((VAR_2 & VAR_7) == 0) &&
            (((VAR_7 >> 8) & 0xff) == 0 ))
        {
            VAR_8 = FUNC_7(VAR_8, VAR_4);
        }
        else
        {
            VAR_8 = FUNC_7(VAR_8, VAR_0);
        }
        FUNC_6(VAR_8);

        FUNC_5("Pointer from handle: ");
        FUNC_4(FUNC_3(VAR_6));
        FUNC_5("Testing after a lock");
        FUNC_5("Testing for non-discarded and lock of 0");
        VAR_7 = FUNC_1(VAR_6);
        if (((VAR_2 & VAR_7) == 0) &&
            (((VAR_7 >> 8) & 0xff) == 0 ))
        {
            VAR_8 = FUNC_7(VAR_8, VAR_4);
        }
        else
        {
            VAR_8 = FUNC_7(VAR_8, VAR_0);
        }
        FUNC_6(VAR_8);

        FUNC_2(VAR_6);
    }
    else
    {
        FUNC_5("GlobalAlloc failed!");
        VAR_8 = FUNC_7(VAR_8, VAR_0);
    }

    return VAR_8;
}
