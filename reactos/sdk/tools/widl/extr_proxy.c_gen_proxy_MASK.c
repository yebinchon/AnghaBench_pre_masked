
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {TYPE_3__* type; int name; int attrs; } ;
typedef TYPE_1__ var_t ;
typedef int var_list_t ;
struct TYPE_25__ {int name; } ;
typedef TYPE_2__ type_t ;
struct TYPE_26__ {int attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__ const*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (char*,...) ;
 int VAR_11 ;
 int FUNC_13 (int *,char*) ;
 TYPE_1__* FUNC_14 (TYPE_3__*) ;
 int * FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int ,int const*,int ,int,int ) ;
 int FUNC_17 (int ,TYPE_2__*,TYPE_1__ const*,char*,unsigned int) ;
 int FUNC_18 (int ,scalar_t__,TYPE_1__ const*) ;
 int FUNC_19 (int ,scalar_t__,TYPE_1__ const*,int ) ;
 int FUNC_20 (int ,scalar_t__,TYPE_1__ const*) ;
 int FUNC_21 (int ,scalar_t__,TYPE_1__ const*,char*,int ,int ) ;
 int FUNC_22 (int ,TYPE_3__*,int ) ;
 int FUNC_23 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_24(type_t *VAR_12, const var_t *VAR_13, int VAR_14,
                      unsigned int VAR_15)
{
  var_t *VAR_16 = FUNC_14(VAR_13->type);
  int VAR_17 = !FUNC_11(VAR_16->type);
  int VAR_18 = FUNC_8(VAR_13);
  const char *VAR_19 = FUNC_3(VAR_13->type->attrs, VAR_0);
  const var_list_t *VAR_20 = FUNC_15(VAR_13->type);
  if (!VAR_19) VAR_19 = "STDMETHODCALLTYPE";

  VAR_10 = 0;
  if (FUNC_9( VAR_12, VAR_13 ))
  {
      if (FUNC_5() == VAR_2 && !FUNC_7( VAR_13->attrs )) return;
      FUNC_23(VAR_11, VAR_16->type);
      FUNC_12( " %s %s_%s_Proxy(\n", VAR_19, VAR_12->name, FUNC_4(VAR_13));
      FUNC_16(VAR_11, VAR_20, VAR_12->name, 1, VAR_9);
      FUNC_12( ")\n");
      FUNC_17( VAR_11, VAR_12, VAR_13, "Object", VAR_15 );
      return;
  }
  FUNC_12( "static void __finally_%s_%s_Proxy( struct __proxy_frame *__frame )\n",
               VAR_12->name, FUNC_4(VAR_13) );
  FUNC_12( "{\n");
  VAR_10++;
  if (VAR_18) FUNC_18(VAR_11, VAR_10, VAR_13);
  FUNC_12( "NdrProxyFreeBuffer( __frame->This, &__frame->_StubMsg );\n" );
  VAR_10--;
  FUNC_12( "}\n");
  FUNC_12( "\n");

  FUNC_23(VAR_11, VAR_16->type);
  FUNC_12( " %s %s_%s_Proxy(\n", VAR_19, VAR_12->name, FUNC_4(VAR_13));
  FUNC_16(VAR_11, VAR_20, VAR_12->name, 1, VAR_9);
  FUNC_12( ")\n");
  FUNC_12( "{\n");
  VAR_10 ++;
  FUNC_12( "struct __proxy_frame __f, * const __frame = &__f;\n" );

  if (VAR_17) {
    FUNC_12( "%s", "" );
    FUNC_22(VAR_11, VAR_16->type, VAR_16->name);
    FUNC_2( VAR_11, ";\n" );
  }
  FUNC_12( "RPC_MESSAGE _RpcMessage;\n" );
  if (VAR_17) {
    if (FUNC_1(VAR_16->type))
        FUNC_12("void *_p_%s = &%s;\n", VAR_16->name, VAR_16->name);
  }
  FUNC_12( "\n");

  FUNC_12( "RpcExceptionInit( __proxy_filter, __finally_%s_%s_Proxy );\n", VAR_12->name, FUNC_4(VAR_13) );
  FUNC_12( "__frame->This = This;\n" );

  if (VAR_18)
    FUNC_19(VAR_11, VAR_10, VAR_13, VAR_1);


  FUNC_0( FUNC_15(VAR_13->type) );

  FUNC_12( "RpcTryExcept\n" );
  FUNC_12( "{\n" );
  VAR_10++;
  FUNC_12( "NdrProxyInitialize(This, &_RpcMessage, &__frame->_StubMsg, &Object_StubDesc, %d);\n", VAR_14);
  FUNC_20( VAR_11, VAR_10, VAR_13 );

  FUNC_12( "RpcTryFinally\n" );
  FUNC_12( "{\n" );
  VAR_10++;

  FUNC_21(VAR_11, VAR_10, VAR_13, "", VAR_3, VAR_6);

  FUNC_12( "NdrProxyGetBuffer(This, &__frame->_StubMsg);\n" );

  FUNC_21(VAR_11, VAR_10, VAR_13, "", VAR_3, VAR_7);

  FUNC_12( "NdrProxySendReceive(This, &__frame->_StubMsg);\n" );
  FUNC_2(VAR_11, "\n");
  FUNC_12( "__frame->_StubMsg.BufferStart = _RpcMessage.Buffer;\n" );
  FUNC_12( "__frame->_StubMsg.BufferEnd   = __frame->_StubMsg.BufferStart + _RpcMessage.BufferLength;\n\n" );

  FUNC_12("if ((_RpcMessage.DataRepresentation & 0xffff) != NDR_LOCAL_DATA_REPRESENTATION)\n");
  VAR_10++;
  FUNC_12("NdrConvert( &__frame->_StubMsg, &__MIDL_ProcFormatString.Format[%u]);\n", VAR_15 );
  VAR_10--;
  FUNC_2(VAR_11, "\n");

  FUNC_21(VAR_11, VAR_10, VAR_13, "", VAR_4, VAR_8);

  if (VAR_17)
  {
      if (FUNC_1(VAR_16->type))
          FUNC_12("MIDL_memset(&%s, 0, sizeof(%s));\n", VAR_16->name, VAR_16->name);
      else if (FUNC_10(VAR_16->type) || FUNC_6(VAR_16->type))
          FUNC_12("%s = 0;\n", VAR_16->name);
      FUNC_21(VAR_11, VAR_10, VAR_13, "", VAR_5, VAR_8);
  }

  VAR_10--;
  FUNC_12( "}\n");
  FUNC_12( "RpcFinally\n" );
  FUNC_12( "{\n" );
  VAR_10++;
  FUNC_12( "__finally_%s_%s_Proxy( __frame );\n", VAR_12->name, FUNC_4(VAR_13) );
  VAR_10--;
  FUNC_12( "}\n");
  FUNC_12( "RpcEndFinally\n" );
  VAR_10--;
  FUNC_12( "}\n" );
  FUNC_12( "RpcExcept(__frame->_StubMsg.dwStubPhase != PROXY_SENDRECEIVE)\n" );
  FUNC_12( "{\n" );
  if (VAR_17) {
    VAR_10++;
    FUNC_13( FUNC_15(VAR_13->type), "" );
    FUNC_12( "_RetVal = NdrProxyErrorHandler(RpcExceptionCode());\n" );
    VAR_10--;
  }
  FUNC_12( "}\n" );
  FUNC_12( "RpcEndExcept\n" );

  if (VAR_17) {
    FUNC_12( "return _RetVal;\n" );
  }
  VAR_10--;
  FUNC_12( "}\n");
  FUNC_12( "\n");
}
