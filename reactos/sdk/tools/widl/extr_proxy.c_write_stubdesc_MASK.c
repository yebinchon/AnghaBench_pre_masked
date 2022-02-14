
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(int VAR_3)
{
  FUNC_2( "static const MIDL_STUB_DESC Object_StubDesc =\n{\n");
  VAR_1++;
  FUNC_2( "0,\n");
  FUNC_2( "NdrOleAllocate,\n");
  FUNC_2( "NdrOleFree,\n");
  FUNC_2( "{0}, 0, 0, %s, 0,\n", VAR_3 ? "ExprEvalRoutines" : "0");
  FUNC_2( "__MIDL_TypeFormatString.Format,\n");
  FUNC_2( "1, /* -error bounds_check flag */\n");
  FUNC_2( "0x%x, /* Ndr library version */\n", FUNC_0() == VAR_0 ? 0x50002 : 0x10001);
  FUNC_2( "0,\n");
  FUNC_2( "0x50100a4, /* MIDL Version 5.1.164 */\n");
  FUNC_2( "0,\n");
  FUNC_2("%s,\n", FUNC_1(&VAR_2) ? "0" : "UserMarshalRoutines");
  FUNC_2( "0,  /* notify & notify_flag routine table */\n");
  FUNC_2( "1,  /* Flags */\n");
  FUNC_2( "0,  /* Reserved3 */\n");
  FUNC_2( "0,  /* Reserved4 */\n");
  FUNC_2( "0   /* Reserved5 */\n");
  VAR_1--;
  FUNC_2( "};\n");
  FUNC_2( "\n");
}
