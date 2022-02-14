
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* TargetName; char* Comment; char* UserName; void* Type; int Persist; int * TargetAlias; int * Attributes; scalar_t__ AttributeCount; int * CredentialBlob; scalar_t__ CredentialBlobSize; scalar_t__ Flags; } ;
typedef TYPE_1__ CREDENTIALA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (scalar_t__,void*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    CREDENTIALA VAR_11;
    BOOL VAR_12;

    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(((void*)0), 0);
    FUNC_3(!VAR_12 && FUNC_0() == VAR_6,
        "CredWriteA should have failed with ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    VAR_11.Flags = 0;
    VAR_11.Type = VAR_4;
    VAR_11.TargetName = ((void*)0);
    VAR_11.Comment = (char *)"Comment";
    VAR_11.CredentialBlobSize = 0;
    VAR_11.CredentialBlob = ((void*)0);
    VAR_11.Persist = VAR_0;
    VAR_11.AttributeCount = 0;
    VAR_11.Attributes = ((void*)0);
    VAR_11.TargetAlias = ((void*)0);
    VAR_11.UserName = (char *)"winetest";

    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(!VAR_12 && FUNC_0() == VAR_6,
        "CredWriteA should have failed with ERROR_INVALID_PARAMETER instead of %d\n",
        FUNC_0());

    VAR_11.TargetName = (char *)VAR_10;
    VAR_11.Type = VAR_3;

    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    if (VAR_12)
    {
        FUNC_3(FUNC_0() == VAR_9 ||
           FUNC_0() == VAR_7,
           "Expected ERROR_IO_PENDING, got %d\n", FUNC_0());
    }
    else
    {
        FUNC_3(FUNC_0() == VAR_5 ||
           FUNC_0() == VAR_8,
           "CredWrite with username without domain should return ERROR_BAD_USERNAME"
           "or ERROR_NO_SUCH_LOGON_SESSION not %d\n", FUNC_0());
    }

    VAR_11.UserName = ((void*)0);
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(!VAR_12 && FUNC_0() == VAR_5,
        "CredWriteA with NULL username should have failed with ERROR_BAD_USERNAME instead of %d\n",
        FUNC_0());

    VAR_11.UserName = (char *)"winetest";
    VAR_11.Persist = VAR_1;
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(VAR_12 || FUNC_2(!VAR_12), "CredWriteA failed with error %u\n", FUNC_0());
    if (VAR_12)
    {
        VAR_12 = FUNC_4(VAR_10, VAR_3, 0);
        FUNC_3(VAR_12, "CredDeleteA failed with error %u\n", FUNC_0());
    }
    VAR_11.Type = VAR_4;
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(VAR_12 || FUNC_2(!VAR_12), "CredWriteA failed with error %u\n", FUNC_0());
    if (VAR_12)
    {
        VAR_12 = FUNC_4(VAR_10, VAR_4, 0);
        FUNC_3(VAR_12, "CredDeleteA failed with error %u\n", FUNC_0());
    }
    VAR_11.Persist = VAR_2;
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(VAR_12, "CredWriteA failed with error %u\n", FUNC_0());

    VAR_12 = FUNC_4(VAR_10, VAR_4, 0);
    FUNC_3(VAR_12, "CredDeleteA failed with error %u\n", FUNC_0());

    VAR_11.Type = VAR_3;
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(VAR_12 || FUNC_2(!VAR_12), "CredWriteA failed with error %u\n", FUNC_0());
    if (VAR_12)
    {
        VAR_12 = FUNC_4(VAR_10, VAR_3, 0);
        FUNC_3(VAR_12, "CredDeleteA failed with error %u\n", FUNC_0());
    }
    VAR_11.UserName = ((void*)0);
    FUNC_1(0xdeadbeef);
    VAR_12 = FUNC_5(&VAR_11, 0);
    FUNC_3(!VAR_12, "CredWriteA succeeded\n");
    FUNC_3(FUNC_0() == VAR_5, "got %u\n", FUNC_0());
}
