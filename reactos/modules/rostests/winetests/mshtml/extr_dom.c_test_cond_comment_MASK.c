
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int elem_type_t ;
typedef int all_types ;
typedef int IUnknown ;
typedef int IHTMLElementCollection ;
typedef int IHTMLDocument2 ;
typedef scalar_t__ HRESULT ;







 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_4(IHTMLDocument2 *VAR_1)
{
    IHTMLElementCollection *VAR_2;
    HRESULT VAR_3;

    static const elem_type_t VAR_4[] = {
        129,
        130,
        128,
        132,
        131
    };

    VAR_3 = FUNC_0(VAR_1, &VAR_2);
    FUNC_2(VAR_3 == VAR_0, "get_all failed: %08x\n", VAR_3);
    FUNC_3((IUnknown*)VAR_2, VAR_4, sizeof(VAR_4)/sizeof(VAR_4[0]));
    FUNC_1(VAR_2);
}
