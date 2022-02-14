
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
typedef TYPE_1__ var_t ;
struct TYPE_6__ {int name; int attrs; } ;
typedef TYPE_2__ type_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(type_t *VAR_6, int VAR_7)
{
    const var_t *VAR_8 = FUNC_1(VAR_6->attrs, VAR_0);

    FUNC_4("static const MIDL_STUB_DESC %s_StubDesc =\n", VAR_6->name);
    FUNC_4("{\n");
    VAR_4++;
    FUNC_4("(void *)& %s___RpcClientInterface,\n", VAR_6->name);
    FUNC_4("MIDL_user_allocate,\n");
    FUNC_4("MIDL_user_free,\n");
    FUNC_4("{\n");
    VAR_4++;
    if (VAR_8)
        FUNC_4("&%s,\n", VAR_8->name);
    else
        FUNC_4("&%s__MIDL_AutoBindHandle,\n", VAR_6->name);
    VAR_4--;
    FUNC_4("},\n");
    FUNC_4("0,\n");
    if (!FUNC_3( &VAR_3 ))
        FUNC_4("BindingRoutines,\n");
    else
        FUNC_4("0,\n");
    if (VAR_7)
        FUNC_4("ExprEvalRoutines,\n");
    else
        FUNC_4("0,\n");
    FUNC_4("0,\n");
    FUNC_4("__MIDL_TypeFormatString.Format,\n");
    FUNC_4("1, /* -error bounds_check flag */\n");
    FUNC_4("0x%x, /* Ndr library version */\n", FUNC_2() == VAR_1 ? 0x50002 : 0x10001);
    FUNC_4("0,\n");
    FUNC_4("0x50100a4, /* MIDL Version 5.1.164 */\n");
    FUNC_4("0,\n");
    FUNC_4("%s,\n", FUNC_3(&VAR_5) ? "0" : "UserMarshalRoutines");
    FUNC_4("0,  /* notify & notify_flag routine table */\n");
    FUNC_4("1,  /* Flags */\n");
    FUNC_4("0,  /* Reserved3 */\n");
    FUNC_4("0,  /* Reserved4 */\n");
    FUNC_4("0   /* Reserved5 */\n");
    VAR_4--;
    FUNC_4("};\n");
    FUNC_0(VAR_2, "\n");
}
