
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VARIANT_BOOL ;
typedef int IXMLDOMSchemaCollection2 ;
typedef int HRESULT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int,int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(void)
{
    IXMLDOMSchemaCollection2 *VAR_5;
    VARIANT_BOOL VAR_6;
    HRESULT VAR_7;

    VAR_5 = FUNC_3(40, &VAR_1);
    if (!VAR_5) return;

    VAR_7 = FUNC_2(VAR_5, ((void*)0));
    FUNC_0(VAR_7, VAR_0);

    VAR_6 = VAR_3;
    VAR_7 = FUNC_2(VAR_5, &VAR_6);
    FUNC_0(VAR_7, VAR_2);
    FUNC_4(VAR_6 == VAR_4, "got %d\n", VAR_6);

    FUNC_1(VAR_5);
}
