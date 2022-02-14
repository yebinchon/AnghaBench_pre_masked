
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hash_unicodestring_test {char const* str; int hash; int case_insensitive; } ;
typedef int strW ;
typedef char WCHAR ;
struct TYPE_4__ {int Length; int MaximumLength; scalar_t__ Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef int ULONG ;
typedef scalar_t__ PWSTR ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char const*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct hash_unicodestring_test* VAR_5 ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static const WCHAR VAR_6[] = {'T','e','s','t',0,'1',0};
    const struct hash_unicodestring_test *VAR_7;
    UNICODE_STRING VAR_8;
    NTSTATUS VAR_9;
    ULONG VAR_10;

    if (!&FUNC_2)
    {
        FUNC_3("RtlHashUnicodeString is not available\n");
        return;
    }

    VAR_9 = FUNC_2(((void*)0), VAR_0, VAR_2, &VAR_10);
    FUNC_1(VAR_9 == VAR_3, "got status 0x%08x\n", VAR_9);

    FUNC_0(&VAR_8, VAR_6);
    VAR_9 = FUNC_2(&VAR_8, VAR_0, VAR_2, ((void*)0));
    FUNC_1(VAR_9 == VAR_3, "got status 0x%08x\n", VAR_9);

    VAR_9 = FUNC_2(&VAR_8, VAR_0, VAR_1, &VAR_10);
    FUNC_1(VAR_9 == VAR_3, "got status 0x%08x\n", VAR_9);


    VAR_8.Buffer = (PWSTR)VAR_6;
    VAR_8.Length = sizeof(VAR_6) - sizeof(WCHAR);
    VAR_8.MaximumLength = sizeof(VAR_6);
    VAR_9 = FUNC_2(&VAR_8, VAR_0, VAR_2, &VAR_10);
    FUNC_1(VAR_9 == VAR_4, "got status 0x%08x\n", VAR_9);
    FUNC_1(VAR_10 == 0x32803083, "got 0x%08x\n", VAR_10);

    VAR_7 = VAR_5;
    while (*VAR_7->str)
    {
        FUNC_0(&VAR_8, VAR_7->str);
        VAR_10 = 0;
        VAR_9 = FUNC_2(&VAR_8, VAR_7->case_insensitive, VAR_2, &VAR_10);
        FUNC_1(VAR_9 == VAR_4, "got status 0x%08x for %s\n", VAR_9, FUNC_4(VAR_7->str));
        FUNC_1(VAR_10 == VAR_7->hash, "got wrong hash 0x%08x, expected 0x%08x, for %s, mode %d\n", VAR_10, VAR_7->hash,
            FUNC_4(VAR_7->str), VAR_7->case_insensitive);

        VAR_7++;
    }
}
