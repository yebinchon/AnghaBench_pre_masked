
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int REFIID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char const* FUNC_1 (int ) ;

__attribute__((used)) static const char *FUNC_2(REFIID VAR_6)
{
    if(!VAR_6)
        return "(null)";

    if (FUNC_0(&VAR_1, VAR_6))
        return "IXMLDOMDocument";
    else if (FUNC_0(&VAR_2, VAR_6))
        return "IXMLDOMDocument2";
    else if (FUNC_0(&VAR_3, VAR_6))
        return "IXMLDOMDocument3";
    else if (FUNC_0(&VAR_4, VAR_6))
        return "IXMLDOMSchemaCollection";
    else if (FUNC_0(&VAR_5, VAR_6))
        return "IXSLTemplate";
    else if (FUNC_0(&VAR_0, VAR_6))
        return "IMXNamespaceManager";
    else
        return FUNC_1(VAR_6);
}
