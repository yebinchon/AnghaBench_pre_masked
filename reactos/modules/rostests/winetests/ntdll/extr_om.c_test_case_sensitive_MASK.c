
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_6__ {scalar_t__ Attributes; } ;
typedef TYPE_1__ OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef int HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_1__*) ;
 int FUNC_6 (int *,char const*) ;

__attribute__((used)) static void FUNC_7 (void)
{
    static const WCHAR VAR_7[] = {'\\','B','a','s','e','N','a','m','e','d','O','b','j','e','c','t','s','\\','t','e','s','t',0};
    static const WCHAR VAR_8[] = {'\\','B','a','s','e','N','a','m','e','d','O','b','j','e','c','t','s','\\','T','e','s','t',0};
    static const WCHAR VAR_9[] = {'\\','B','a','s','e','N','a','m','e','d','O','b','j','e','c','t','s','\\','T','E','s','t',0};
    static const WCHAR VAR_10[] = {'\\','B','A','S','E','N','a','m','e','d','O','b','j','e','c','t','s','\\','t','e','s','t',0};
    NTSTATUS VAR_11;
    OBJECT_ATTRIBUTES VAR_12;
    UNICODE_STRING VAR_13;
    HANDLE VAR_14, VAR_15, VAR_16;

    FUNC_6(&VAR_13, VAR_7);
    FUNC_0(&VAR_12, &VAR_13, 0, 0, ((void*)0));
    VAR_11 = FUNC_4(&VAR_15, VAR_1, &VAR_12, VAR_0);
    FUNC_1(VAR_11 == VAR_6, "Failed to create Mutant(%08x)\n", VAR_11);

    VAR_11 = FUNC_3(&VAR_14, VAR_1, &VAR_12, VAR_0, VAR_0);
    FUNC_1(VAR_11 == VAR_3 || VAR_11 == VAR_5,
        "NtCreateEvent should have failed with STATUS_OBJECT_NAME_COLLISION or STATUS_OBJECT_TYPE_MISMATCH got (%08x)\n", VAR_11);

    FUNC_6(&VAR_13, VAR_8);
    FUNC_0(&VAR_12, &VAR_13, 0, 0, ((void*)0));
    VAR_11 = FUNC_3(&VAR_14, VAR_1, &VAR_12, VAR_0, VAR_0);
    FUNC_1(VAR_11 == VAR_6, "Failed to create Event(%08x)\n", VAR_11);

    FUNC_6(&VAR_13, VAR_9);
    FUNC_0(&VAR_12, &VAR_13, VAR_2, 0, ((void*)0));
    VAR_11 = FUNC_5(&VAR_16, VAR_1, &VAR_12);
    FUNC_1(VAR_11 == VAR_5,
        "NtOpenMutant should have failed with STATUS_OBJECT_TYPE_MISMATCH got(%08x)\n", VAR_11);

    FUNC_2(VAR_15);

    FUNC_6(&VAR_13, VAR_10);
    FUNC_0(&VAR_12, &VAR_13, VAR_2, 0, ((void*)0));
    VAR_11 = FUNC_4(&VAR_15, VAR_1, &VAR_12, VAR_0);
    FUNC_1(VAR_11 == VAR_3 || VAR_11 == VAR_5,
        "NtCreateMutant should have failed with STATUS_OBJECT_NAME_COLLISION or STATUS_OBJECT_TYPE_MISMATCH got (%08x)\n", VAR_11);

    VAR_11 = FUNC_3(&VAR_16, VAR_1, &VAR_12, VAR_0, VAR_0);
    FUNC_1(VAR_11 == VAR_3,
        "NtCreateEvent should have failed with STATUS_OBJECT_NAME_COLLISION got(%08x)\n", VAR_11);

    VAR_12.Attributes = 0;
    VAR_11 = FUNC_4(&VAR_15, VAR_1, &VAR_12, VAR_0);
    FUNC_1(VAR_11 == VAR_4,
        "NtCreateMutant should have failed with STATUS_OBJECT_PATH_NOT_FOUND got(%08x)\n", VAR_11);

    FUNC_2(VAR_14);
}
