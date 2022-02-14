
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;

void FUNC_1( FILE *VAR_0 )
{
    FUNC_0( VAR_0, "#ifndef USE_COMPILER_EXCEPTIONS\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#include \"wine/exception.h\"\n");
    FUNC_0( VAR_0, "#undef RpcTryExcept\n");
    FUNC_0( VAR_0, "#undef RpcExcept\n");
    FUNC_0( VAR_0, "#undef RpcEndExcept\n");
    FUNC_0( VAR_0, "#undef RpcTryFinally\n");
    FUNC_0( VAR_0, "#undef RpcFinally\n");
    FUNC_0( VAR_0, "#undef RpcEndFinally\n");
    FUNC_0( VAR_0, "#undef RpcExceptionCode\n");
    FUNC_0( VAR_0, "#undef RpcAbnormalTermination\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "struct __exception_frame;\n");
    FUNC_0( VAR_0, "typedef int (*__filter_func)(struct __exception_frame *);\n");
    FUNC_0( VAR_0, "typedef void (*__finally_func)(struct __exception_frame *);\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define __DECL_EXCEPTION_FRAME \\\n");
    FUNC_0( VAR_0, "    EXCEPTION_REGISTRATION_RECORD frame; \\\n");
    FUNC_0( VAR_0, "    __filter_func                 filter; \\\n");
    FUNC_0( VAR_0, "    __finally_func                finally; \\\n");
    FUNC_0( VAR_0, "    sigjmp_buf                    jmp; \\\n");
    FUNC_0( VAR_0, "    DWORD                         code; \\\n");
    FUNC_0( VAR_0, "    unsigned char                 abnormal_termination; \\\n");
    FUNC_0( VAR_0, "    unsigned char                 filter_level; \\\n");
    FUNC_0( VAR_0, "    unsigned char                 finally_level;\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "struct __exception_frame\n{\n");
    FUNC_0( VAR_0, "    __DECL_EXCEPTION_FRAME\n");
    FUNC_0( VAR_0, "};\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "static inline void __widl_unwind_target(void)\n" );
    FUNC_0( VAR_0, "{\n");
    FUNC_0( VAR_0, "    struct __exception_frame *exc_frame = (struct __exception_frame *)__wine_get_frame();\n" );
    FUNC_0( VAR_0, "    if (exc_frame->finally_level > exc_frame->filter_level)\n" );
    FUNC_0( VAR_0, "    {\n");
    FUNC_0( VAR_0, "        exc_frame->abnormal_termination = 1;\n");
    FUNC_0( VAR_0, "        exc_frame->finally( exc_frame );\n");
    FUNC_0( VAR_0, "        __wine_pop_frame( &exc_frame->frame );\n");
    FUNC_0( VAR_0, "    }\n");
    FUNC_0( VAR_0, "    exc_frame->filter_level = 0;\n");
    FUNC_0( VAR_0, "    siglongjmp( exc_frame->jmp, 1 );\n");
    FUNC_0( VAR_0, "}\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "static DWORD __widl_exception_handler( EXCEPTION_RECORD *record,\n");
    FUNC_0( VAR_0, "                                       EXCEPTION_REGISTRATION_RECORD *frame,\n");
    FUNC_0( VAR_0, "                                       CONTEXT *context,\n");
    FUNC_0( VAR_0, "                                       EXCEPTION_REGISTRATION_RECORD **pdispatcher )\n");
    FUNC_0( VAR_0, "{\n");
    FUNC_0( VAR_0, "    struct __exception_frame *exc_frame = (struct __exception_frame *)frame;\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "    if (record->ExceptionFlags & (EH_UNWINDING | EH_EXIT_UNWIND | EH_NESTED_CALL))\n");
    FUNC_0( VAR_0, "    {\n" );
    FUNC_0( VAR_0, "        if (exc_frame->finally_level && (record->ExceptionFlags & (EH_UNWINDING | EH_EXIT_UNWIND)))\n");
    FUNC_0( VAR_0, "        {\n" );
    FUNC_0( VAR_0, "            exc_frame->abnormal_termination = 1;\n");
    FUNC_0( VAR_0, "            exc_frame->finally( exc_frame );\n");
    FUNC_0( VAR_0, "        }\n" );
    FUNC_0( VAR_0, "        return ExceptionContinueSearch;\n");
    FUNC_0( VAR_0, "    }\n" );
    FUNC_0( VAR_0, "    exc_frame->code = record->ExceptionCode;\n");
    FUNC_0( VAR_0, "    if (exc_frame->filter_level && exc_frame->filter( exc_frame ) == EXCEPTION_EXECUTE_HANDLER)\n" );
    FUNC_0( VAR_0, "        __wine_rtl_unwind( frame, record, __widl_unwind_target );\n");
    FUNC_0( VAR_0, "    return ExceptionContinueSearch;\n");
    FUNC_0( VAR_0, "}\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcTryExcept \\\n");
    FUNC_0( VAR_0, "    if (!sigsetjmp( __frame->jmp, 0 )) \\\n");
    FUNC_0( VAR_0, "    { \\\n");
    FUNC_0( VAR_0, "        if (!__frame->finally_level) \\\n" );
    FUNC_0( VAR_0, "            __wine_push_frame( &__frame->frame ); \\\n");
    FUNC_0( VAR_0, "        __frame->filter_level = __frame->finally_level + 1;\n" );
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcExcept(expr) \\\n");
    FUNC_0( VAR_0, "        if (!__frame->finally_level) \\\n" );
    FUNC_0( VAR_0, "            __wine_pop_frame( &__frame->frame ); \\\n");
    FUNC_0( VAR_0, "        __frame->filter_level = 0; \\\n" );
    FUNC_0( VAR_0, "    } \\\n");
    FUNC_0( VAR_0, "    else \\\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcEndExcept\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcExceptionCode() (__frame->code)\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcTryFinally \\\n");
    FUNC_0( VAR_0, "    if (!__frame->filter_level) \\\n");
    FUNC_0( VAR_0, "        __wine_push_frame( &__frame->frame ); \\\n");
    FUNC_0( VAR_0, "    __frame->finally_level = __frame->filter_level + 1;\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcFinally \\\n");
    FUNC_0( VAR_0, "    if (!__frame->filter_level) \\\n");
    FUNC_0( VAR_0, "        __wine_pop_frame( &__frame->frame ); \\\n");
    FUNC_0( VAR_0, "    __frame->finally_level = 0;\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcEndFinally\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcAbnormalTermination() (__frame->abnormal_termination)\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcExceptionInit(filter_func,finally_func) \\\n");
    FUNC_0( VAR_0, "    do { \\\n");
    FUNC_0( VAR_0, "        __frame->frame.Handler = __widl_exception_handler; \\\n");
    FUNC_0( VAR_0, "        __frame->filter = (__filter_func)(filter_func); \\\n" );
    FUNC_0( VAR_0, "        __frame->finally = (__finally_func)(finally_func); \\\n");
    FUNC_0( VAR_0, "        __frame->abnormal_termination = 0; \\\n");
    FUNC_0( VAR_0, "        __frame->filter_level = 0; \\\n");
    FUNC_0( VAR_0, "        __frame->finally_level = 0; \\\n");
    FUNC_0( VAR_0, "    } while (0)\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#else /* USE_COMPILER_EXCEPTIONS */\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define RpcExceptionInit(filter_func,finally_func) \\\n");
    FUNC_0( VAR_0, "    do { (void)(filter_func); } while(0)\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#define __DECL_EXCEPTION_FRAME \\\n");
    FUNC_0( VAR_0, "    DWORD code;\n");
    FUNC_0( VAR_0, "\n");
    FUNC_0( VAR_0, "#endif /* USE_COMPILER_EXCEPTIONS */\n");
}
