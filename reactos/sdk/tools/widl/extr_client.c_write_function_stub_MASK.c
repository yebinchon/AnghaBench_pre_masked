
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_22__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_24__ {unsigned int name; int type; int attrs; } ;
typedef TYPE_1__ var_t ;
struct TYPE_26__ {char* name; } ;
typedef TYPE_2__ type_t ;
struct TYPE_25__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_22__* FUNC_2 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_3 (TYPE_2__ const*,TYPE_1__ const*,unsigned char*,unsigned char*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 int VAR_13 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_1__ const*) ;
 scalar_t__ FUNC_10 (TYPE_2__ const*,TYPE_1__ const*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_14 ;
 int FUNC_13 (char*,...) ;
 TYPE_1__* FUNC_14 (int ) ;
 int FUNC_15 (int ,TYPE_2__ const*,TYPE_1__ const*,char*,unsigned int) ;
 int FUNC_16 (TYPE_2__ const*,TYPE_1__ const*) ;
 int FUNC_17 (int ,int ,TYPE_1__ const*) ;
 int FUNC_18 (int ,int ,TYPE_1__ const*,int ) ;
 int FUNC_19 (int ,int ,TYPE_1__ const*) ;
 int FUNC_20 (int ,int ,TYPE_1__ const*,char*,int ,int ) ;
 int FUNC_21 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_22( const type_t *VAR_15, const var_t *VAR_16,
                                 int VAR_17, unsigned int VAR_18 )
{
    unsigned char VAR_19, VAR_20;
    int VAR_21 = FUNC_9(VAR_16);
    var_t *VAR_22 = FUNC_14(VAR_16->type);
    const var_t *VAR_23 = FUNC_3( VAR_15, VAR_16, &VAR_19, &VAR_20 );
    int VAR_24 = !FUNC_12(VAR_22->type);

    if (FUNC_10( VAR_15, VAR_16 ))
    {
        FUNC_16( VAR_15, VAR_16 );
        FUNC_15( VAR_12, VAR_15, VAR_16, VAR_15->name, VAR_18 );
        return;
    }

    FUNC_13( "struct __frame_%s%s\n{\n", VAR_14, FUNC_4(VAR_16) );
    VAR_13++;
    FUNC_13( "__DECL_EXCEPTION_FRAME\n" );
    FUNC_13("MIDL_STUB_MESSAGE _StubMsg;\n");
    if (VAR_23)
    {
        if (VAR_19 == 129)
            FUNC_13("%s %s;\n",
                         FUNC_2(VAR_23)->name, VAR_23->name );
        FUNC_13("RPC_BINDING_HANDLE _Handle;\n");
    }

    if (VAR_24 && FUNC_0(VAR_22->type))
    {
        FUNC_13("void *_p_%s;\n", VAR_22->name);
    }
    VAR_13--;
    FUNC_13( "};\n\n" );

    FUNC_13( "static void __finally_%s%s(", VAR_14, FUNC_4(VAR_16) );
    FUNC_13( " struct __frame_%s%s *__frame )\n{\n", VAR_14, FUNC_4(VAR_16) );
    VAR_13++;

    if (VAR_21)
        FUNC_17(VAR_12, VAR_13, VAR_16);

    FUNC_13("NdrFreeBuffer(&__frame->_StubMsg);\n");

    if (VAR_19 == 129)
    {
        FUNC_1(VAR_12, "\n");
        FUNC_13("if (__frame->_Handle)\n");
        VAR_13++;
        FUNC_13("%s_unbind(__frame->%s, __frame->_Handle);\n",
                     FUNC_2(VAR_23)->name, VAR_23->name);
        VAR_13--;
    }
    VAR_13--;
    FUNC_13( "}\n\n" );

    FUNC_16( VAR_15, VAR_16 );


    FUNC_1(VAR_12, "{\n");
    VAR_13++;
    FUNC_13( "struct __frame_%s%s __f, * const __frame = &__f;\n", VAR_14, FUNC_4(VAR_16) );


    if (VAR_24)
    {
        FUNC_13("%s", "");
        FUNC_21(VAR_12, VAR_22->type, VAR_22->name);
        FUNC_1(VAR_12, ";\n");
    }
    FUNC_13("RPC_MESSAGE _RpcMessage;\n");

    if (VAR_23)
    {
        FUNC_13( "__frame->_Handle = 0;\n" );
        if (VAR_19 == 129)
            FUNC_13("__frame->%s = %s;\n", VAR_23->name, VAR_23->name );
    }
    if (VAR_24 && FUNC_0(VAR_22->type))
    {
        FUNC_13("__frame->_p_%s = &%s;\n", VAR_22->name, VAR_22->name);
    }
    FUNC_1(VAR_12, "\n");

    FUNC_13( "RpcExceptionInit( 0, __finally_%s%s );\n", VAR_14, FUNC_4(VAR_16) );

    if (VAR_21)
        FUNC_18(VAR_12, VAR_13, VAR_16, VAR_5);


    FUNC_19( VAR_12, VAR_13, VAR_16 );

    FUNC_13("RpcTryFinally\n");
    FUNC_13("{\n");
    VAR_13++;

    FUNC_13("NdrClientInitializeNew(&_RpcMessage, &__frame->_StubMsg, &%s_StubDesc, %d);\n",
                 VAR_15->name, VAR_17);

    if (FUNC_8(VAR_16->attrs, VAR_2) || FUNC_8(VAR_16->attrs, VAR_0))
    {
        FUNC_13("_RpcMessage.RpcFlags = ( RPC_NCA_FLAGS_DEFAULT ");
        if (FUNC_8(VAR_16->attrs, VAR_2))
            FUNC_1(VAR_12, "| RPC_NCA_FLAGS_IDEMPOTENT ");
        if (FUNC_8(VAR_16->attrs, VAR_0))
            FUNC_1(VAR_12, "| RPC_NCA_FLAGS_BROADCAST ");
        FUNC_1(VAR_12, ");\n\n");
    }

    switch (VAR_19)
    {
    case 128:
        FUNC_13("__frame->_Handle = %s;\n", VAR_23->name);
        FUNC_1(VAR_12, "\n");
        break;
    case 129:
        FUNC_13("__frame->_Handle = %s_bind(%s);\n",
                     FUNC_2(VAR_23)->name, VAR_23->name);
        FUNC_1(VAR_12, "\n");
        break;
    case 130:
    {



        int VAR_25 = !FUNC_6(VAR_23->type, VAR_1);
        FUNC_13("if (%s%s != 0)\n", VAR_25 ? "*" : "", VAR_23->name);
        VAR_13++;
        FUNC_13("__frame->_Handle = NDRCContextBinding(%s%s);\n",
                     VAR_25 ? "*" : "", VAR_23->name);
        VAR_13--;
        if (FUNC_8(VAR_23->attrs, VAR_3) && !FUNC_8(VAR_23->attrs, VAR_4))
        {
            FUNC_13("else\n");
            VAR_13++;
            FUNC_13("RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);\n");
            VAR_13--;
        }
        FUNC_1(VAR_12, "\n");
        break;
    }
    case 0:
        if (VAR_23)
        {
            FUNC_13("__frame->_Handle = %s;\n", VAR_23->name);
            FUNC_1(VAR_12, "\n");
        }
        break;
    }

    FUNC_20(VAR_12, VAR_13, VAR_16, "", VAR_6, VAR_9);

    FUNC_13("NdrGetBuffer(&__frame->_StubMsg, __frame->_StubMsg.BufferLength, ");
    if (VAR_23)
        FUNC_1(VAR_12, "__frame->_Handle);\n\n");
    else
        FUNC_1(VAR_12,"%s__MIDL_AutoBindHandle);\n\n", VAR_15->name);


    FUNC_20(VAR_12, VAR_13, VAR_16, "", VAR_6, VAR_10);





    FUNC_13("NdrSendReceive(&__frame->_StubMsg, __frame->_StubMsg.Buffer);\n\n");

    FUNC_13("__frame->_StubMsg.BufferStart = _RpcMessage.Buffer;\n");
    FUNC_13("__frame->_StubMsg.BufferEnd = __frame->_StubMsg.BufferStart + _RpcMessage.BufferLength;\n");

    if (FUNC_5(VAR_16))
    {
        FUNC_1(VAR_12, "\n");

        FUNC_13("if ((_RpcMessage.DataRepresentation & 0x0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION)\n");
        VAR_13++;
        FUNC_13("NdrConvert(&__frame->_StubMsg, (PFORMAT_STRING)&__MIDL_ProcFormatString.Format[%u]);\n",
                     VAR_18);
        VAR_13--;
    }


    FUNC_1(VAR_12, "\n");
    FUNC_20(VAR_12, VAR_13, VAR_16, "", VAR_7, VAR_11);


    if (VAR_24)
    {
        if (FUNC_0(VAR_22->type))
            FUNC_13("MIDL_memset(&%s, 0, sizeof(%s));\n", VAR_22->name, VAR_22->name);
        else if (FUNC_11(VAR_22->type) || FUNC_7(VAR_22->type))
            FUNC_13("%s = 0;\n", VAR_22->name);
        FUNC_20(VAR_12, VAR_13, VAR_16, "", VAR_8, VAR_11);
    }

    VAR_13--;
    FUNC_13("}\n");
    FUNC_13("RpcFinally\n");
    FUNC_13("{\n");
    VAR_13++;
    FUNC_13( "__finally_%s%s( __frame );\n", VAR_14, FUNC_4(VAR_16) );
    VAR_13--;
    FUNC_13("}\n");
    FUNC_13("RpcEndFinally\n");



    if (VAR_24)
    {
        FUNC_1(VAR_12, "\n");
        FUNC_13("return %s;\n", VAR_22->name);
    }

    VAR_13--;
    FUNC_1(VAR_12, "}\n");
    FUNC_1(VAR_12, "\n");
}
