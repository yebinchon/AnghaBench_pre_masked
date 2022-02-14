
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int signatureW ;
typedef int signature ;
struct TYPE_4__ {int len; int data; } ;
typedef TYPE_1__ bin_file ;
typedef char WCHAR ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int *,int ,int *,int ,int *,int,char*) ;
 int FUNC_4 (scalar_t__,int ,int *,int ,int *,int ,int *,int,char*) ;
 int FUNC_5 (char*,int ,int *,int ,int *,int ,int *,int,char*) ;
 char* FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int ,int ,char*,int,char*,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,char*,int,char*,int ,int *,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char*,TYPE_1__ const*) ;
 int FUNC_12 (unsigned char*,int ,int ) ;
 int FUNC_13 (char*,int,int) ;
 int FUNC_14 (int,char*,char*,...) ;

__attribute__((used)) static void FUNC_15(const char* VAR_7, const char* VAR_8, const bin_file* VAR_9, const char* VAR_10)
{
    char VAR_11[VAR_5];
    WCHAR VAR_12[VAR_5];
    HANDLE VAR_13;
    unsigned char VAR_14[0x100];
    char VAR_15[0x20] = {0};
    WCHAR VAR_16[0x20] = {0};
    BOOL VAR_17;

    FUNC_13(VAR_15, 0xaa, sizeof(VAR_15));
    FUNC_12(VAR_14, VAR_9->data, VAR_9->len);

    if (!FUNC_11(VAR_11, VAR_9))
        return;

    FUNC_13(VAR_15, 0xaa, sizeof(VAR_15)-1);
    VAR_17 = FUNC_3(VAR_11, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0), sizeof(VAR_15), VAR_15);
    FUNC_14(VAR_17, "GetFilePatchSignatureA failed %lu, %s.%s\n", FUNC_6(), VAR_7, VAR_8);
    if (VAR_17)
    {

        FUNC_14(!FUNC_10(VAR_10, VAR_15), "Got %s for %s.%s\n", VAR_15, VAR_7, VAR_8);
    }

    FUNC_13(VAR_15, 0xaa, sizeof(VAR_15)-1);
    FUNC_13(VAR_16, 0xaa, sizeof(VAR_16)-sizeof(WCHAR));

    FUNC_7(VAR_0, 0, VAR_11, -1, VAR_12, FUNC_9(VAR_12));
    VAR_17 = FUNC_5(VAR_12, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0), sizeof(VAR_16), VAR_16);
    FUNC_14(VAR_17, "GetFilePatchSignatureW failed %lu, %s.%s\n", FUNC_6(), VAR_7, VAR_8);
    if (VAR_17)
    {
        FUNC_8(VAR_0, 0, VAR_16, -1, VAR_15, FUNC_9(VAR_15), ((void*)0), ((void*)0));

        FUNC_14(!FUNC_10(VAR_10, VAR_15), "Got %s for %s.%s\n", VAR_15, VAR_7, VAR_8);
    }

    FUNC_13(VAR_15, 0xaa, sizeof(VAR_15)-1);

    VAR_13 = FUNC_1(VAR_11, VAR_3, VAR_1|VAR_2, ((void*)0), VAR_6, 0, 0);
    FUNC_14(VAR_13 != VAR_4, "Unable to open file %lu\n", FUNC_6());
    if (VAR_13 != VAR_4)
    {
        VAR_17 = FUNC_4(VAR_13, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0), sizeof(VAR_15), VAR_15);
        FUNC_14(VAR_17, "GetFilePatchSignatureByHandle failed %lu, %s.%s\n", FUNC_6(), VAR_7, VAR_8);
        if (VAR_17)
        {

            FUNC_14(!FUNC_10(VAR_10, VAR_15), "Got %s for %s.%s\n", VAR_15, VAR_7, VAR_8);
        }

        FUNC_0(VAR_13);
    }

    FUNC_2(VAR_11);
}
