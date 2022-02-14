
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t XmlWriterProperty ;


 size_t VAR_0 ;
 char const* FUNC_0 (char*,size_t) ;

__attribute__((used)) static const char *FUNC_1(XmlWriterProperty VAR_1)
{
    static const char * const VAR_2[] =
    {
        "MultiLanguage",
        "Indent",
        "ByteOrderMark",
        "OmitXmlDeclaration",
        "ConformanceLevel"
    };

    if (VAR_1 > VAR_0)
        return FUNC_0("unknown property=%d", VAR_1);

    return VAR_2[VAR_1];
}
