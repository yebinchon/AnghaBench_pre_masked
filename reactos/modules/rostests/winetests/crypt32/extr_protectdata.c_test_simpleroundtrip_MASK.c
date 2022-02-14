
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WCHAR ;
struct TYPE_6__ {unsigned char* pbData; scalar_t__ cbData; } ;
typedef TYPE_1__ DATA_BLOB ;


 char const* FUNC_0 () ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,char*,scalar_t__) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (TYPE_1__*,scalar_t__*,int *,int *,int *,int ,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *,int *,int *,int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const char *VAR_0)
{
    DATA_BLOB VAR_1;
    DATA_BLOB VAR_2;
    DATA_BLOB VAR_3;
    int VAR_4;
    WCHAR VAR_5[1];

    VAR_5[0] = 0;
    VAR_1.pbData = (unsigned char *)VAR_0;
    VAR_1.cbData = FUNC_8(VAR_0);
    VAR_4 = FUNC_6(&VAR_1, VAR_5, ((void*)0), ((void*)0), ((void*)0), 0, &VAR_2);
    FUNC_5(VAR_4 != 0 || FUNC_2(!VAR_4), "can't protect\n");
    if (!VAR_4)
    {

        FUNC_9("CryptProtectData failed\n");
        return;
    }

    VAR_4 = FUNC_7(&VAR_2, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, &VAR_3);
    FUNC_5(VAR_4 != 0, "can't unprotect; last error %u\n", FUNC_0());
    FUNC_5(VAR_3.cbData == FUNC_8(VAR_0), "output wrong length %d for input '%s', wanted %d\n", VAR_3.cbData, VAR_0, FUNC_3(VAR_0));
    FUNC_5(!FUNC_4(VAR_0, (char *)VAR_3.pbData, VAR_3.cbData), "output wrong contents for input '%s'\n", VAR_0);
    FUNC_1(VAR_3.pbData);
    FUNC_1(VAR_2.pbData);
}
