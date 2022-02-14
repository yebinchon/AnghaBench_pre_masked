
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XmlNodeType ;
__attribute__((used)) static const char *FUNC_0(XmlNodeType VAR_0)
{
    static const char* VAR_1[] = {
        "XmlNodeType_None",
        "XmlNodeType_Element",
        "XmlNodeType_Attribute",
        "XmlNodeType_Text",
        "XmlNodeType_CDATA",
        "", "",
        "XmlNodeType_ProcessingInstruction",
        "XmlNodeType_Comment",
        "",
        "XmlNodeType_DocumentType",
        "", "",
        "XmlNodeType_Whitespace",
        "",
        "XmlNodeType_EndElement",
        "",
        "XmlNodeType_XmlDeclaration"
    };

    static const char VAR_2[] = "unknown";

    switch (VAR_0)
    {
    case 132:
    case 134:
    case 138:
    case 130:
    case 137:
    case 131:
    case 136:
    case 135:
    case 129:
    case 133:
    case 128:
        return VAR_1[VAR_0];
    default:
        return VAR_2;
    }
}
