
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VARIANT ;
typedef int LPOLESTR ;
typedef int IBindCtx ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(BSTR VAR_3, VARIANT *VAR_4, VARIANT *VAR_5, VARIANT *VAR_6,
        VARIANT *VAR_7, IBindCtx *VAR_8, LPOLESTR VAR_9)
{
    FUNC_2(!FUNC_3(VAR_3, VAR_2), "uri = %s\n", FUNC_4(VAR_3));
    FUNC_2(FUNC_1(VAR_4) == VAR_0, "V_VT(flags) = %d\n", FUNC_1(VAR_4));
    FUNC_2(FUNC_0(VAR_4) == VAR_1, "V_I4(flags) = %x\n", FUNC_0(VAR_4));
    FUNC_2(!VAR_5, "target_frame != NULL\n");
    FUNC_2(!VAR_6, "post_data != NULL\n");
    FUNC_2(!VAR_7, "headers != NULL\n");
    FUNC_2(VAR_8 != ((void*)0), "bind_ctx == NULL\n");
    FUNC_2(!VAR_9, "url_dragment = %s\n", FUNC_4(VAR_9));
}
