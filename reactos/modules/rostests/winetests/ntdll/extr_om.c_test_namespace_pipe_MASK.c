
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {int Length; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_7__ {int QuadPart; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef scalar_t__ HANDLE ;


 scalar_t__ FUNC_0 (char*,int,int,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,TYPE_1__*,int ,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__*,int,int *,int *,int,int ,int ,int ,int ,int ,int,int,int,TYPE_2__*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int,int *,int *,int,int ) ;
 int FUNC_7 (TYPE_1__*,char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_16[] = {'\\','?','?','\\','P','I','P','E','\\','t','e','s','t','\\','p','i','p','e',0};
    static const WCHAR VAR_17[] = {'\\','?','?','\\','P','I','P','E','\\','T','E','S','T','\\','P','I','P','E',0};
    static const WCHAR VAR_18[] = {'\\','?','?','\\','p','i','p','e','\\','t','e','s','t','\\','p','i','p','e',0};
    static const WCHAR VAR_19[] = {'\\','?','?','\\','p','i','p','e','\\','t','e','s','t',0};
    OBJECT_ATTRIBUTES VAR_20;
    UNICODE_STRING VAR_21;
    IO_STATUS_BLOCK VAR_22;
    NTSTATUS VAR_23;
    LARGE_INTEGER VAR_24;
    HANDLE VAR_25, VAR_26;

    VAR_24.QuadPart = -10000;

    FUNC_7(&VAR_21, VAR_16);
    FUNC_2(&VAR_20, &VAR_21, 0, 0, ((void*)0));
    VAR_23 = FUNC_5(&VAR_25, VAR_5|VAR_6, &VAR_20, &VAR_22, VAR_3|VAR_4,
                                    VAR_1, VAR_2, VAR_0, VAR_0, VAR_0, 1, 256, 256, &VAR_24);
    FUNC_3(VAR_23 == VAR_15, "Failed to create NamedPipe(%08x)\n", VAR_23);

    VAR_23 = FUNC_5(&VAR_25, VAR_5|VAR_6, &VAR_20, &VAR_22, VAR_3|VAR_4,
                                    VAR_1, VAR_2, VAR_0, VAR_0, VAR_0, 1, 256, 256, &VAR_24);
    FUNC_3(VAR_23 == VAR_10,
        "NtCreateNamedPipeFile should have failed with STATUS_INSTANCE_NOT_AVAILABLE got(%08x)\n", VAR_23);

    FUNC_7(&VAR_21, VAR_17);
    FUNC_2(&VAR_20, &VAR_21, 0, 0, ((void*)0));
    VAR_23 = FUNC_5(&VAR_25, VAR_5|VAR_6, &VAR_20, &VAR_22, VAR_3|VAR_4,
                                    VAR_1, VAR_2, VAR_0, VAR_0, VAR_0, 1, 256, 256, &VAR_24);
    FUNC_3(VAR_23 == VAR_10,
        "NtCreateNamedPipeFile should have failed with STATUS_INSTANCE_NOT_AVAILABLE got(%08x)\n", VAR_23);

    VAR_26 = FUNC_0("\\\\.\\pipe\\test\\pipe", VAR_5, VAR_3|VAR_4, ((void*)0),
                    VAR_9, 0, 0 );
    FUNC_3(VAR_26 != VAR_7, "Failed to open NamedPipe (%u)\n", FUNC_1());
    FUNC_4(VAR_26);

    FUNC_7(&VAR_21, VAR_18);
    FUNC_2(&VAR_20, &VAR_21, 0, 0, ((void*)0));
    VAR_23 = FUNC_6(&VAR_26, VAR_5, &VAR_20, &VAR_22, VAR_3|VAR_4, 0);
    FUNC_3(VAR_23 == VAR_13 ||
       VAR_23 == VAR_14 ||
       VAR_23 == VAR_11 ||
       VAR_23 == VAR_12,
        "NtOpenFile should have failed with STATUS_OBJECT_PATH_NOT_FOUND got(%08x)\n", VAR_23);

    FUNC_7(&VAR_21, VAR_19);
    FUNC_2(&VAR_20, &VAR_21, VAR_8, 0, ((void*)0));
    VAR_23 = FUNC_6(&VAR_26, VAR_5, &VAR_20, &VAR_22, VAR_3|VAR_4, 0);
    FUNC_3(VAR_23 == VAR_12 ||
       VAR_23 == VAR_11,
        "NtOpenFile should have failed with STATUS_OBJECT_NAME_NOT_FOUND got(%08x)\n", VAR_23);

    VAR_21.Length -= 4 * sizeof(WCHAR);
    VAR_23 = FUNC_6(&VAR_26, VAR_5, &VAR_20, &VAR_22, VAR_3|VAR_4, 0);
    FUNC_3(VAR_23 == VAR_15, "NtOpenFile should have succeeded got %08x\n", VAR_23);
    FUNC_4( VAR_26 );

    VAR_21.Length -= sizeof(WCHAR);
    VAR_23 = FUNC_6(&VAR_26, VAR_5, &VAR_20, &VAR_22, VAR_3|VAR_4, 0);
    FUNC_3(VAR_23 == VAR_15, "NtOpenFile should have succeeded got %08x\n", VAR_23);
    FUNC_4( VAR_26 );

    FUNC_4(VAR_25);
}
