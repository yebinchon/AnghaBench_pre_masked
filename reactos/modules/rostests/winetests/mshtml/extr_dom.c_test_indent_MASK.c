
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int indent_types ;
typedef int elem_type_t ;
typedef int all_types ;
typedef int IUnknown ;
typedef int IHTMLTxtRange ;
typedef int IHTMLElementCollection ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int *,int ,int *,int *) ;

__attribute__((used)) static void FUNC_7(IHTMLDocument2 *VAR_3)
{
    IHTMLElementCollection *VAR_4;
    IHTMLTxtRange *VAR_5;
    HRESULT VAR_6;

    static const elem_type_t VAR_7[] = {
        130,
        131,
        128,
        133,
        132,
        135,
    };

    static const elem_type_t VAR_8[] = {
        130,
        131,
        128,
        133,
        134,
        129,
        132,
        135,
    };

    VAR_6 = FUNC_0(VAR_3, &VAR_4);
    FUNC_3(VAR_6 == VAR_2, "get_all failed: %08x\n", VAR_6);
    FUNC_5((IUnknown*)VAR_4, VAR_7, sizeof(VAR_7)/sizeof(VAR_7[0]));
    FUNC_1(VAR_4);

    VAR_5 = FUNC_4(VAR_3);
    FUNC_6((IUnknown*)VAR_5, &VAR_0, VAR_1, ((void*)0), ((void*)0));
    FUNC_2(VAR_5);

    VAR_6 = FUNC_0(VAR_3, &VAR_4);
    FUNC_3(VAR_6 == VAR_2, "get_all failed: %08x\n", VAR_6);
    FUNC_5((IUnknown*)VAR_4, VAR_8, sizeof(VAR_8)/sizeof(VAR_8[0]));
    FUNC_1(VAR_4);
}
