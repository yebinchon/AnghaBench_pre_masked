
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t XmlNodeType ;


 size_t VAR_0 ;
 char const* FUNC_0 (char*,size_t) ;

__attribute__((used)) static const char *FUNC_1(XmlNodeType VAR_1)
{
    static const char * const VAR_2[] =
    {
        "None",
        "Element",
        "Attribute",
        "Text",
        "CDATA",
        "",
        "",
        "ProcessingInstruction",
        "Comment",
        "",
        "DocumentType",
        "",
        "",
        "Whitespace",
        "",
        "EndElement",
        "",
        "XmlDeclaration"
    };

    if (VAR_1 > VAR_0)
        return FUNC_0("unknown type=%d", VAR_1);

    return VAR_2[VAR_1];
}
