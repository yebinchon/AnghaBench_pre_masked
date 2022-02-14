
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lpStruct ;
typedef int attributes ;
struct TYPE_3__ {int nLength; int lpSecurityDescriptor; int member_0; } ;
typedef TYPE_1__ SECURITY_ATTRIBUTES ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char const*,int ,int *,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (char*,char*,int *) ;
 scalar_t__ FUNC_6 (char*,char*,char*,int *) ;
 scalar_t__ FUNC_7 (char*,char*,char*,int,int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int,char*,scalar_t__) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static void FUNC_11(void)
{
    BOOL VAR_4;
    CHAR VAR_5[VAR_1];
    CHAR VAR_6[VAR_1];
    const char *VAR_7 = "D:PAI(A;;0x1200a9;;;WD)";
    SECURITY_ATTRIBUTES VAR_8 = {0};
    char VAR_9[] = { 's', 't', 'r', 'i', 'n', 'g' };

    VAR_8.nLength = sizeof(VAR_8);
    VAR_4 = FUNC_0(VAR_7, VAR_2, &VAR_8.lpSecurityDescriptor, ((void*)0));
    FUNC_9(VAR_4 == VAR_3, "ConvertStringSecurityDescriptorToSecurityDescriptor failed: %d\n", FUNC_2());

    FUNC_3(VAR_1, VAR_5);
    FUNC_8(VAR_5, "wine-test");

    FUNC_10(VAR_6, VAR_5);
    FUNC_8(VAR_6, "\\tmp.ini");

    VAR_4 = FUNC_1(VAR_5, &VAR_8);
    FUNC_9(VAR_4 == VAR_3, "CreateDirectoryA failed: %d\n", FUNC_2());

    VAR_4 = FUNC_6("App", "key", "string", VAR_6);
    FUNC_9(VAR_4 == VAR_0, "Expected FALSE, got %d\n", VAR_4);

    VAR_4 = FUNC_5("App", "key=string", VAR_6);
    FUNC_9(VAR_4 == VAR_0, "Expected FALSE, got %d\n", VAR_4);

    VAR_4 = FUNC_7("App", "key", VAR_9, sizeof(VAR_9), VAR_6);
    FUNC_9(VAR_4 == VAR_0, "Expected FALSE, got %d\n", VAR_4);

    VAR_4 = FUNC_4(VAR_5);
    FUNC_9(VAR_4 == VAR_3, "RemoveDirectoryA failed: %d\n", FUNC_2());
}
