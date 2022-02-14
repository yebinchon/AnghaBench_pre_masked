
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int * Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;
typedef int Buf2 ;
typedef int Buf1 ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    WCHAR VAR_1[10];
    WCHAR VAR_2[10];

    UNICODE_STRING VAR_3, VAR_4;
    UNICODE_STRING VAR_5;
    NTSTATUS VAR_6;

    FUNC_1(&VAR_3, VAR_1, sizeof(VAR_1));
    FUNC_1(&VAR_4, VAR_2, sizeof(VAR_2));

    FUNC_2(&VAR_5, L"kernel32.dll");
    VAR_6 = FUNC_0(&VAR_5, &VAR_3, &VAR_4);
    FUNC_4(VAR_6 == VAR_0, "0x%lx\n", VAR_6);
    FUNC_5(&VAR_3, &VAR_4, L"kernel32.dll");
    FUNC_4(VAR_3 != VAR_1, "Expected a changed buffer\n");
    FUNC_4(VAR_4 != VAR_2, "Expected a changed buffer\n");
    FUNC_3(&VAR_3, VAR_1, sizeof(VAR_1));
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
}
