
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_pred_t ;
typedef int statement_list_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char*) ;
 int FUNC_1 (int *,int const*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(FILE *VAR_1, const statement_list_t *VAR_2, type_pred_t VAR_3)
{
    int VAR_4 = 0;

    FUNC_0(VAR_1, VAR_4, "static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =\n");
    FUNC_0(VAR_1, VAR_4, "{\n");
    VAR_4++;
    FUNC_0(VAR_1, VAR_4, "0,\n");
    FUNC_0(VAR_1, VAR_4, "{\n");
    VAR_4++;
    FUNC_0(VAR_1, VAR_4, "NdrFcShort(0x0),\n");

    FUNC_2(VAR_0);
    FUNC_1(VAR_1, VAR_2, VAR_3);

    FUNC_0(VAR_1, VAR_4, "0x0\n");
    VAR_4--;
    FUNC_0(VAR_1, VAR_4, "}\n");
    VAR_4--;
    FUNC_0(VAR_1, VAR_4, "};\n");
    FUNC_0(VAR_1, VAR_4, "\n");
}
