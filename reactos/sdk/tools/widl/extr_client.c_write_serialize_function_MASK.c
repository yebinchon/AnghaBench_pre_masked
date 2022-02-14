
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int typestring_offset; char* name; } ;
typedef TYPE_1__ type_t ;
typedef enum stub_mode { ____Placeholder_stub_mode } stub_mode ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_1, const type_t *VAR_2, const type_t *VAR_3,
                                     const char *VAR_4, const char *VAR_5)
{
    enum stub_mode VAR_6 = FUNC_1();
    static int VAR_7;

    if (VAR_3 && !VAR_2->typestring_offset)
    {


        if (VAR_5) FUNC_2("Serialization of type %s is not supported\n", VAR_2->name);
        return;
    }

    if (!VAR_7 && VAR_3 && VAR_6 != VAR_0)
    {
        FUNC_0(VAR_1, "static const MIDL_TYPE_PICKLING_INFO __MIDL_TypePicklingInfo =\n");
        FUNC_0(VAR_1, "{\n");
        FUNC_0(VAR_1, "    0x33205054,\n");
        FUNC_0(VAR_1, "    0x3,\n");
        FUNC_0(VAR_1, "    0,\n");
        FUNC_0(VAR_1, "    0,\n");
        FUNC_0(VAR_1, "    0\n");
        FUNC_0(VAR_1, "};\n");
        FUNC_0(VAR_1, "\n");
        VAR_7 = 1;
    }



    FUNC_0(VAR_1, "%s __cdecl %s_%s(handle_t IDL_handle, %s *IDL_type)%s\n",
            VAR_5 ? VAR_5 : "void", VAR_2->name, VAR_4, VAR_2->name, VAR_3 ? "" : ";");
    if (!VAR_3) return;

    FUNC_0(VAR_1, "{\n");
    FUNC_0(VAR_1, "    %sNdrMesType%s%s(\n", VAR_5 ? "return " : "", VAR_4,
            VAR_6 != VAR_0 ? "2" : "");
    FUNC_0(VAR_1, "        IDL_handle,\n");
    if (VAR_6 != VAR_0)
        FUNC_0(VAR_1, "        (MIDL_TYPE_PICKLING_INFO*)&__MIDL_TypePicklingInfo,\n");
    FUNC_0(VAR_1, "        &%s_StubDesc,\n", VAR_3->name);
    FUNC_0(VAR_1, "        (PFORMAT_STRING)&__MIDL_TypeFormatString.Format[%u],\n",
            VAR_2->typestring_offset);
    FUNC_0(VAR_1, "        IDL_type);\n");
    FUNC_0(VAR_1, "}\n");
    FUNC_0(VAR_1, "\n");
}
