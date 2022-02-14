
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ type_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_4(type_t *VAR_5, int VAR_6)
{
    FUNC_3("static const MIDL_STUB_DESC %s_StubDesc =\n", VAR_5->name);
    FUNC_3("{\n");
    VAR_2++;
    FUNC_3("(void *)& %s___RpcServerInterface,\n", VAR_5->name);
    FUNC_3("MIDL_user_allocate,\n");
    FUNC_3("MIDL_user_free,\n");
    FUNC_3("{\n");
    VAR_2++;
    FUNC_3("0,\n");
    VAR_2--;
    FUNC_3("},\n");
    if (!FUNC_2( &VAR_1 ))
        FUNC_3("RundownRoutines,\n");
    else
        FUNC_3("0,\n");
    FUNC_3("0,\n");
    if (VAR_6)
        FUNC_3("ExprEvalRoutines,\n");
    else
        FUNC_3("0,\n");
    FUNC_3("0,\n");
    FUNC_3("__MIDL_TypeFormatString.Format,\n");
    FUNC_3("1, /* -error bounds_check flag */\n");
    FUNC_3("0x%x, /* Ndr library version */\n", FUNC_1() == VAR_0 ? 0x50002 : 0x10001);
    FUNC_3("0,\n");
    FUNC_3("0x50100a4, /* MIDL Version 5.1.164 */\n");
    FUNC_3("0,\n");
    FUNC_3("%s,\n", FUNC_2(&VAR_4) ? "0" : "UserMarshalRoutines");
    FUNC_3("0,  /* notify & notify_flag routine table */\n");
    FUNC_3("1,  /* Flags */\n");
    FUNC_3("0,  /* Reserved3 */\n");
    FUNC_3("0,  /* Reserved4 */\n");
    FUNC_3("0   /* Reserved5 */\n");
    VAR_2--;
    FUNC_3("};\n");
    FUNC_0(VAR_3, "\n");
}
