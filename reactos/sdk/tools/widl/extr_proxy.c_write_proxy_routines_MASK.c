
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* iface; } ;
struct TYPE_9__ {char* name; TYPE_2__ details; } ;
typedef TYPE_3__ type_t ;
typedef int statement_list_t ;
struct TYPE_7__ {TYPE_3__* async_iface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_3__ const**) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,...) ;
 int VAR_6 ;
 char* VAR_7 ;
 TYPE_3__** FUNC_5 (int const*,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,int const*,int ) ;
 int FUNC_10 (int ,int const*,int ) ;
 int FUNC_11 (int const*,unsigned int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int const*,int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16(const statement_list_t *VAR_8)
{
  int VAR_9;
  unsigned int VAR_10 = 0;
  char *VAR_11 = VAR_7;
  int VAR_12, VAR_13, VAR_14 = 0;
  unsigned int VAR_15;
  type_t **VAR_16;
  const type_t * VAR_17;

  FUNC_4( "#ifndef __REDQ_RPCPROXY_H_VERSION__\n");
  FUNC_4( "#define __REQUIRED_RPCPROXY_H_VERSION__ %u\n", FUNC_3() == VAR_0 ? 475 : 440);
  FUNC_4( "#endif\n");
  FUNC_4( "\n");
  if (FUNC_3() == VAR_0) FUNC_4( "#define USE_STUBLESS_PROXY\n");
  FUNC_4( "#include \"rpcproxy.h\"\n");
  FUNC_4( "#ifndef __RPCPROXY_H_VERSION__\n");
  FUNC_4( "#error This code needs a newer version of rpcproxy.h\n");
  FUNC_4( "#endif /* __RPCPROXY_H_VERSION__ */\n");
  FUNC_4( "\n");
  FUNC_4( "#include \"%s\"\n", VAR_1);
  FUNC_4( "\n");

  if (FUNC_0(VAR_8, VAR_4))
  {
      FUNC_6( VAR_6 );
      FUNC_4( "\n");
      FUNC_4( "struct __proxy_frame\n");
      FUNC_4( "{\n");
      FUNC_4( "    __DECL_EXCEPTION_FRAME\n");
      FUNC_4( "    MIDL_STUB_MESSAGE _StubMsg;\n");
      FUNC_4( "    void             *This;\n");
      FUNC_4( "};\n");
      FUNC_4( "\n");
      FUNC_4("static int __proxy_filter( struct __proxy_frame *__frame )\n");
      FUNC_4( "{\n");
      FUNC_4( "    return (__frame->_StubMsg.dwStubPhase != PROXY_SENDRECEIVE);\n");
      FUNC_4( "}\n");
      FUNC_4( "\n");
  }

  FUNC_9(VAR_6, VAR_2, VAR_8, VAR_3);
  FUNC_13();
  FUNC_11(VAR_8, &VAR_10);

  VAR_9 = FUNC_8(VAR_6, VAR_7);
  if (VAR_9)
      FUNC_7(VAR_6, VAR_7);
  FUNC_15(VAR_6);
  FUNC_12(VAR_9);

  FUNC_4( "#if !defined(__RPC_WIN%u__)\n", VAR_5 == 8 ? 64 : 32);
  FUNC_4( "#error Invalid build platform for this proxy.\n");
  FUNC_4( "#endif\n");
  FUNC_4( "\n");
  FUNC_10(VAR_6, VAR_8, VAR_3);
  FUNC_14(VAR_6, VAR_8, VAR_3);

  VAR_16 = FUNC_5(VAR_8, &VAR_13);
  FUNC_1(VAR_6, "static const CInterfaceProxyVtbl* const _%s_ProxyVtblList[] =\n", VAR_11);
  FUNC_1(VAR_6, "{\n");
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      FUNC_1(VAR_6, "    (const CInterfaceProxyVtbl*)&_%sProxyVtbl,\n", VAR_16[VAR_12]->name);
  FUNC_1(VAR_6, "    0\n");
  FUNC_1(VAR_6, "};\n");
  FUNC_1(VAR_6, "\n");

  FUNC_1(VAR_6, "static const CInterfaceStubVtbl* const _%s_StubVtblList[] =\n", VAR_11);
  FUNC_1(VAR_6, "{\n");
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      FUNC_1(VAR_6, "    &_%sStubVtbl,\n", VAR_16[VAR_12]->name);
  FUNC_1(VAR_6, "    0\n");
  FUNC_1(VAR_6, "};\n");
  FUNC_1(VAR_6, "\n");

  FUNC_1(VAR_6, "static PCInterfaceName const _%s_InterfaceNamesList[] =\n", VAR_11);
  FUNC_1(VAR_6, "{\n");
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      FUNC_1(VAR_6, "    \"%s\",\n", VAR_16[VAR_12]->name);
  FUNC_1(VAR_6, "    0\n");
  FUNC_1(VAR_6, "};\n");
  FUNC_1(VAR_6, "\n");

  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      if ((VAR_14 = FUNC_2( VAR_16[VAR_12], ((void*)0) ))) break;

  if (VAR_14)
  {
      FUNC_1(VAR_6, "static const IID * _%s_BaseIIDList[] =\n", VAR_11);
      FUNC_1(VAR_6, "{\n");
      for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
      {
          if (FUNC_2(VAR_16[VAR_12], &VAR_17))
              FUNC_1( VAR_6, "    &IID_%s,  /* %s */\n", VAR_17->name, VAR_16[VAR_12]->name );
          else
              FUNC_1( VAR_6, "    0,\n" );
      }
      FUNC_1(VAR_6, "    0\n");
      FUNC_1(VAR_6, "};\n");
      FUNC_1(VAR_6, "\n");
  }

  FUNC_1(VAR_6, "static int __stdcall _%s_IID_Lookup(const IID* pIID, int* pIndex)\n", VAR_11);
  FUNC_1(VAR_6, "{\n");
  FUNC_1(VAR_6, "    int low = 0, high = %d;\n", VAR_13 - 1);
  FUNC_1(VAR_6, "\n");
  FUNC_1(VAR_6, "    while (low <= high)\n");
  FUNC_1(VAR_6, "    {\n");
  FUNC_1(VAR_6, "        int pos = (low + high) / 2;\n");
  FUNC_1(VAR_6, "        int res = IID_GENERIC_CHECK_IID(_%s, pIID, pos);\n", VAR_11);
  FUNC_1(VAR_6, "        if (!res) { *pIndex = pos; return 1; }\n");
  FUNC_1(VAR_6, "        if (res > 0) low = pos + 1;\n");
  FUNC_1(VAR_6, "        else high = pos - 1;\n");
  FUNC_1(VAR_6, "    }\n");
  FUNC_1(VAR_6, "    return 0;\n");
  FUNC_1(VAR_6, "}\n");
  FUNC_1(VAR_6, "\n");

  VAR_15 = FUNC_3() == VAR_0 ? 2 : 1;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  {
      if (VAR_16[VAR_12]->details.iface->async_iface != VAR_16[VAR_12]) continue;
      if (VAR_15 != 6)
      {
          FUNC_1(VAR_6, "static const IID *_AsyncInterfaceTable[] =\n");
          FUNC_1(VAR_6, "{\n");
          VAR_15 = 6;
      }
      FUNC_1(VAR_6, "    &IID_%s,\n", VAR_16[VAR_12]->name);
      FUNC_1(VAR_6, "    (IID*)(LONG_PTR)-1,\n");
  }
  if (VAR_15 == 6)
  {
      FUNC_1(VAR_6, "    0\n");
      FUNC_1(VAR_6, "};\n");
      FUNC_1(VAR_6, "\n");
  }

  FUNC_1(VAR_6, "const ExtendedProxyFileInfo %s_ProxyFileInfo DECLSPEC_HIDDEN =\n", VAR_11);
  FUNC_1(VAR_6, "{\n");
  FUNC_1(VAR_6, "    (const PCInterfaceProxyVtblList*)_%s_ProxyVtblList,\n", VAR_11);
  FUNC_1(VAR_6, "    (const PCInterfaceStubVtblList*)_%s_StubVtblList,\n", VAR_11);
  FUNC_1(VAR_6, "    _%s_InterfaceNamesList,\n", VAR_11);
  if (VAR_14) FUNC_1(VAR_6, "    _%s_BaseIIDList,\n", VAR_11);
  else FUNC_1(VAR_6, "    0,\n");
  FUNC_1(VAR_6, "    _%s_IID_Lookup,\n", VAR_11);
  FUNC_1(VAR_6, "    %d,\n", VAR_13);
  FUNC_1(VAR_6, "    %u,\n", VAR_15);
  FUNC_1(VAR_6, "    %s,\n", VAR_15 == 6 ? "_AsyncInterfaceTable" : "0");
  FUNC_1(VAR_6, "    0,\n");
  FUNC_1(VAR_6, "    0,\n");
  FUNC_1(VAR_6, "    0\n");
  FUNC_1(VAR_6, "};\n");
}
