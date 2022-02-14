
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_pred_t ;
typedef int statement_list_t ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int *,int,char*,...) ;
 int FUNC_5 (int *,int,char*) ;

void FUNC_6(FILE *VAR_0, int VAR_1, const statement_list_t *VAR_2, type_pred_t VAR_3)
{
    FUNC_0();

    FUNC_4(VAR_0, VAR_1, "#define TYPE_FORMAT_STRING_SIZE %d\n",
               FUNC_3(VAR_2, VAR_3));

    FUNC_4(VAR_0, VAR_1, "#define PROC_FORMAT_STRING_SIZE %d\n",
               FUNC_2(VAR_2, VAR_3));

    FUNC_1(VAR_0, "\n");
    FUNC_5(VAR_0, VAR_1, "TYPE");
    FUNC_5(VAR_0, VAR_1, "PROC");
    FUNC_1(VAR_0, "\n");
    FUNC_4(VAR_0, VAR_1, "static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;\n");
    FUNC_4(VAR_0, VAR_1, "static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;\n");
    FUNC_4(VAR_0, VAR_1, "\n");
}
