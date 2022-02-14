
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int statement_list_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int const*,int ) ;
 int FUNC_6 (int ,int const*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int const*,int,unsigned int*) ;
 int FUNC_9 (int ,int const*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(const statement_list_t *VAR_4)
{
    unsigned int VAR_5 = 0;
    int VAR_6;

    if (FUNC_0( VAR_4 ))
    {
        FUNC_2( VAR_2 );
        FUNC_1("\n");
        FUNC_1("struct __server_frame\n");
        FUNC_1("{\n");
        FUNC_1("    __DECL_EXCEPTION_FRAME\n");
        FUNC_1("    MIDL_STUB_MESSAGE _StubMsg;\n");
        FUNC_1("};\n");
        FUNC_1("\n");
        FUNC_1("static int __server_filter( struct __server_frame *__frame )\n");
        FUNC_1( "{\n");
        FUNC_1( "    return (__frame->code == STATUS_ACCESS_VIOLATION) ||\n");
        FUNC_1( "           (__frame->code == STATUS_DATATYPE_MISALIGNMENT) ||\n");
        FUNC_1( "           (__frame->code == RPC_X_BAD_STUB_DATA) ||\n");
        FUNC_1( "           (__frame->code == RPC_S_INVALID_BOUND);\n");
        FUNC_1( "}\n");
        FUNC_1( "\n");
    }

    FUNC_5(VAR_2, VAR_0, VAR_4, VAR_1);
    VAR_6 = FUNC_4(VAR_2, VAR_3);
    if (VAR_6)
        FUNC_3(VAR_2, VAR_3);
    FUNC_10(VAR_2);
    FUNC_7();

    FUNC_8(VAR_4, VAR_6, &VAR_5);

    FUNC_6(VAR_2, VAR_4, VAR_1);
    FUNC_9(VAR_2, VAR_4, VAR_1);
}
