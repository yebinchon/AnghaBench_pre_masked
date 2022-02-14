
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(type_t *VAR_1)
{
    FUNC_0( "static const MIDL_SERVER_INFO %s_ServerInfo =\n", VAR_1->name );
    FUNC_0( "{\n" );
    VAR_0++;
    FUNC_0( "&%s_StubDesc,\n", VAR_1->name );
    FUNC_0( "%s_ServerRoutineTable,\n", VAR_1->name );
    FUNC_0( "__MIDL_ProcFormatString.Format,\n" );
    FUNC_0( "%s_FormatStringOffsetTable,\n", VAR_1->name );
    FUNC_0( "0,\n" );
    FUNC_0( "0,\n" );
    FUNC_0( "0,\n" );
    FUNC_0( "0\n" );
    VAR_0--;
    FUNC_0( "};\n\n" );
}
