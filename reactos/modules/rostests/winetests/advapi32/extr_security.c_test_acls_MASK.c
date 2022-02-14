
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int PACL ;
typedef int BOOL ;
typedef int ACL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_8[256];
    PACL VAR_9 = (PACL)VAR_8;
    BOOL VAR_10;

    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_9, sizeof(ACL) - 1, VAR_0);
    if (!VAR_10 && FUNC_0() == VAR_5)
    {
        FUNC_5("InitializeAcl is not implemented\n");
        return;
    }

    FUNC_4(!VAR_10 && FUNC_0() == VAR_6, "InitializeAcl with too small a buffer should have failed with ERROR_INSUFFICIENT_BUFFER instead of %d\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_9, 0xffffffff, VAR_0);
    FUNC_4(!VAR_10 && FUNC_0() == VAR_7, "InitializeAcl with too large a buffer should have failed with ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_9, sizeof(VAR_8), VAR_1);
    FUNC_4(!VAR_10 && FUNC_0() == VAR_7, "InitializeAcl(ACL_REVISION1) should have failed with ERROR_INVALID_PARAMETER instead of %d\n", FUNC_0());

    VAR_10 = FUNC_1(VAR_9, sizeof(VAR_8), VAR_2);
    FUNC_4(VAR_10, "InitializeAcl(ACL_REVISION2) failed with error %d\n", FUNC_0());

    VAR_10 = FUNC_2(VAR_9);
    FUNC_4(VAR_10, "IsValidAcl failed with error %d\n", FUNC_0());

    VAR_10 = FUNC_1(VAR_9, sizeof(VAR_8), VAR_3);
    FUNC_4(VAR_10, "InitializeAcl(ACL_REVISION3) failed with error %d\n", FUNC_0());

    VAR_10 = FUNC_2(VAR_9);
    FUNC_4(VAR_10, "IsValidAcl failed with error %d\n", FUNC_0());

    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_9, sizeof(VAR_8), VAR_4);
    if (FUNC_0() != VAR_7)
    {
        FUNC_4(VAR_10, "InitializeAcl(ACL_REVISION4) failed with error %d\n", FUNC_0());

        VAR_10 = FUNC_2(VAR_9);
        FUNC_4(VAR_10, "IsValidAcl failed with error %d\n", FUNC_0());
    }
    else
        FUNC_5("ACL_REVISION4 is not implemented on NT4\n");

    FUNC_3(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_9, sizeof(VAR_8), -1);
    FUNC_4(!VAR_10 && FUNC_0() == VAR_7, "InitializeAcl(-1) failed with error %d\n", FUNC_0());
}
