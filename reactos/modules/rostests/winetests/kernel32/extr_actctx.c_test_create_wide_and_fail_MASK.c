
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int cbSize; int * lpSource; } ;
typedef scalar_t__ HANDLE ;
typedef int BOOL ;
typedef TYPE_1__ ACTCTXW ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,char*,int,int *,int) ;
 int FUNC_3 (char*,char const*,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int,char*,...) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(const char *VAR_5, BOOL VAR_6)
{
    ACTCTXW VAR_7;
    HANDLE VAR_8;
    WCHAR VAR_9[VAR_4];

    FUNC_2( VAR_0, 0, "bad.manifest", -1, VAR_9, VAR_4 );
    FUNC_4(&VAR_7, 0, sizeof(ACTCTXW));
    VAR_7.cbSize = sizeof(ACTCTXW);
    VAR_7.lpSource = VAR_9;

    FUNC_3("bad.manifest", VAR_5, VAR_6, VAR_2);
    VAR_8 = FUNC_6(&VAR_7);
    FUNC_5(VAR_8 == VAR_3, "handle != INVALID_HANDLE_VALUE\n");
    FUNC_5(FUNC_1() == VAR_1, "GetLastError == %u\n", FUNC_1());

    if (VAR_8 != VAR_3) FUNC_7( VAR_8 );
    FUNC_0("bad.manifest");
}
