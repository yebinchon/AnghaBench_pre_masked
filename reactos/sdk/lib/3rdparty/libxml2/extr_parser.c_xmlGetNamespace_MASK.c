
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_3__ {scalar_t__ const* str_xml; scalar_t__ const* str_xml_ns; int nsNr; scalar_t__ const** nsTab; } ;



__attribute__((used)) static const xmlChar *
FUNC_0(xmlParserCtxtPtr VAR_0, const xmlChar *VAR_1) {
    int VAR_2;

    if (VAR_1 == VAR_0->str_xml) return(VAR_0->str_xml_ns);
    for (VAR_2 = VAR_0->nsNr - 2;VAR_2 >= 0;VAR_2-=2)
        if (VAR_0->nsTab[VAR_2] == VAR_1) {
     if ((VAR_1 == ((void*)0)) && (*VAR_0->nsTab[VAR_2 + 1] == 0))
         return(((void*)0));
     return(VAR_0->nsTab[VAR_2 + 1]);
 }
    return(((void*)0));
}
