
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IXMLDOMSchemaCollection2 ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_3 (int,int *) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    IXMLDOMSchemaCollection2 *VAR_3;
    IUnknown *VAR_4;
    HRESULT VAR_5;

    VAR_3 = FUNC_3(60, &VAR_1);
    if (!VAR_3) return;


    VAR_5 = FUNC_1(VAR_3, &VAR_0, (void**)&VAR_4);
    FUNC_4 (VAR_5 == VAR_2, "Could not get CLSID_XMLSchemaCache60 iface: %08x\n", VAR_5);
    FUNC_4 (VAR_4 == (IUnknown*)VAR_3, "unk != cache\n");

    FUNC_0(VAR_4);
    FUNC_2(VAR_3);
}
