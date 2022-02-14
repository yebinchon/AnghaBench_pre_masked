
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UserObjectFlags ;
typedef int USEROBJECTFLAGS ;
typedef int ULONG ;
typedef int * PVOID ;
typedef int * PCHAR ;
typedef int * HWINSTA ;
typedef int * HDESK ;


 int * FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int * FUNC_3 () ;
 int * FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *,int,int *,int,int ,int,int) ;
 int FUNC_6 (int *,int,int *,int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*) ;

__attribute__((used)) static
void
FUNC_8(void)
{
    USEROBJECTFLAGS VAR_10;
    PCHAR VAR_11;
    ULONG VAR_12 = 64;
    HDESK VAR_13;
    HWINSTA VAR_14;

    VAR_11 = FUNC_0(VAR_12);

    FUNC_5(((void*)0), 5, ((void*)0), 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_7, ((void*)0), 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_7, (PVOID)1, 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_7, ((void*)0), 1, VAR_4, VAR_3, VAR_5);
    FUNC_5(((void*)0), VAR_7, (PVOID)1, 1, VAR_4, VAR_3, VAR_5);
    FUNC_5(((void*)0), VAR_7, &VAR_10, sizeof(VAR_10), VAR_4, VAR_1, 0);

    FUNC_5(((void*)0), VAR_9, ((void*)0), 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_9, (PVOID)1, 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_9, ((void*)0), 1, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_9, (PVOID)1, 1, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_9, VAR_11, VAR_12, VAR_4, VAR_1, 0);

    FUNC_5(((void*)0), VAR_8, ((void*)0), 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_8, (PVOID)1, 0, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_8, ((void*)0), 1, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_8, (PVOID)1, 1, VAR_4, VAR_1, 0);
    FUNC_5(((void*)0), VAR_8, VAR_11, VAR_12, VAR_4, VAR_1, 0);

    VAR_13 = FUNC_4(FUNC_2());
    if (!VAR_13)
    {
        FUNC_7("Failed to get desktop handle\n");
        FUNC_1(VAR_11);
        return;
    }

    VAR_14 = FUNC_3();
    if (!VAR_14)
    {
        FUNC_7("Failed to get winsta handle\n");
        FUNC_1(VAR_11);
        return;
    }

    FUNC_5(VAR_13, 5, ((void*)0), 0, VAR_4, VAR_2, 0);
    FUNC_5(VAR_13, VAR_7, ((void*)0), 0, VAR_4, VAR_0, sizeof(USEROBJECTFLAGS));
    FUNC_5(VAR_13, VAR_7, (PVOID)1, 0, VAR_4, VAR_0, sizeof(USEROBJECTFLAGS));
    FUNC_5(VAR_13, VAR_7, ((void*)0), 1, VAR_4, VAR_3, VAR_5);
    FUNC_5(VAR_13, VAR_7, (PVOID)1, 1, VAR_4, VAR_3, VAR_5);
    FUNC_5(VAR_13, VAR_7, &VAR_10, sizeof(VAR_10), VAR_6, 0xdeadbeef, sizeof(USEROBJECTFLAGS));

    FUNC_6(VAR_13, VAR_9, VAR_11, VAR_12, "Desktop");
    FUNC_6(VAR_13, VAR_8, VAR_11, VAR_12, "Default");

    FUNC_6(VAR_14, VAR_9, VAR_11, VAR_12, "WindowStation");
    FUNC_6(VAR_14, VAR_8, VAR_11, VAR_12, "WinSta0");

    FUNC_1(VAR_11);


    VAR_12 = sizeof("Desktop");
    VAR_11 = FUNC_0(VAR_12);
    FUNC_5(VAR_13, VAR_9, VAR_11, VAR_12, VAR_6, 0xdeadbeef, sizeof("Desktop"));
    FUNC_5(VAR_13, VAR_9, VAR_11, VAR_12 + 1, VAR_6, 0xdeadbeef, sizeof("Desktop"));
    FUNC_1(VAR_11);
}
