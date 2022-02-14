
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int cbSize; int * lpSource; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ ACTCTXW ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int *,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_8(void)
{
    ACTCTXW VAR_19;
    HANDLE VAR_20;
    WCHAR VAR_21[VAR_4];

    FUNC_1( VAR_0, 0, "nonexistent.manifest", -1, VAR_21, VAR_4 );
    FUNC_2(&VAR_19, 0, sizeof(ACTCTXW));
    VAR_19.cbSize = sizeof(ACTCTXW);
    VAR_19.lpSource = VAR_21;

    VAR_20 = FUNC_4(&VAR_19);
    FUNC_3(VAR_20 == VAR_3, "handle != INVALID_HANDLE_VALUE\n");
    FUNC_3(FUNC_0() == VAR_1, "GetLastError == %u\n", FUNC_0());

    FUNC_7("wrong_manifest1\n");
    FUNC_5(VAR_9, ((void*)0), 0, VAR_2);
    FUNC_7("wrong_manifest2\n");
    FUNC_5(VAR_11, ((void*)0), 0, VAR_2);
    FUNC_7("wrong_manifest3\n");
    FUNC_5(VAR_12, ((void*)0), 1, VAR_2);
    FUNC_7("wrong_manifest4\n");
    FUNC_5(VAR_13, ((void*)0), 1, VAR_2);
    FUNC_7("wrong_manifest5\n");
    FUNC_5(VAR_14, ((void*)0), 0, VAR_2);
    FUNC_7("wrong_manifest6\n");
    FUNC_5(VAR_15, ((void*)0), 0, VAR_2);
    FUNC_7("wrong_manifest7\n");
    FUNC_5(VAR_16, ((void*)0), 1, VAR_2);
    FUNC_7("wrong_manifest8\n");
    FUNC_5(VAR_17, ((void*)0), 0, VAR_2);
    FUNC_7("wrong_manifest9\n");
    FUNC_5(VAR_18, ((void*)0), 0, VAR_5 );
    FUNC_7("wrong_manifest10\n");
    FUNC_5(VAR_10, ((void*)0), 0, VAR_5 );
    FUNC_7("UTF-16 manifest1 without BOM\n");
    FUNC_6(VAR_6, VAR_2 );
    FUNC_7("manifest2\n");
    FUNC_5(VAR_7, ((void*)0), 0, VAR_2);
    FUNC_7("manifest2+depmanifest1\n");
    FUNC_5(VAR_7, VAR_8, 0, VAR_2);
}
