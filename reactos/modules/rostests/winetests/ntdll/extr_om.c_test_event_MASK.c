
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
typedef char WCHAR ;
typedef int UNICODE_STRING ;
struct TYPE_3__ {int EventType; scalar_t__ EventState; } ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef TYPE_1__ EVENT_BASIC_INFORMATION ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,TYPE_1__*,int,int *) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(void)
{
    HANDLE VAR_3;
    HANDLE VAR_4;
    NTSTATUS VAR_5;
    UNICODE_STRING VAR_6;
    OBJECT_ATTRIBUTES VAR_7;
    EVENT_BASIC_INFORMATION VAR_8;
    static const WCHAR VAR_9[] = {'\\','B','a','s','e','N','a','m','e','d','O','b','j','e','c','t','s','\\','t','e','s','t','E','v','e','n','t',0};

    FUNC_7(&VAR_6, VAR_9);
    FUNC_0(&VAR_7, &VAR_6, 0, 0, ((void*)0));

    VAR_5 = FUNC_3(&VAR_3, VAR_1, &VAR_7, 1, 0);
    FUNC_1( VAR_5 == VAR_2, "NtCreateEvent failed %08x\n", VAR_5 );

    VAR_5 = FUNC_5(VAR_3, ((void*)0));
    FUNC_1( VAR_5 == VAR_2, "NtPulseEvent failed %08x\n", VAR_5 );

    VAR_5 = FUNC_6(VAR_3, VAR_0, &VAR_8, sizeof(VAR_8), ((void*)0));
    FUNC_1( VAR_5 == VAR_2, "NtQueryEvent failed %08x\n", VAR_5 );
    FUNC_1( VAR_8.EventType == 1 && VAR_8.EventState == 0,
        "NtQueryEvent failed, expected 1 0, got %d %d\n", VAR_8.EventType, VAR_8.EventState );

    VAR_5 = FUNC_4(&VAR_4, VAR_1, &VAR_7);
    FUNC_1( VAR_5 == VAR_2, "NtOpenEvent failed %08x\n", VAR_5 );

    FUNC_2(VAR_3);

    VAR_5 = FUNC_6(VAR_4, VAR_0, &VAR_8, sizeof(VAR_8), ((void*)0));
    FUNC_1( VAR_5 == VAR_2, "NtQueryEvent failed %08x\n", VAR_5 );
    FUNC_1( VAR_8.EventType == 1 && VAR_8.EventState == 0,
        "NtQueryEvent failed, expected 1 0, got %d %d\n", VAR_8.EventType, VAR_8.EventState );

    FUNC_2(VAR_4);
}
