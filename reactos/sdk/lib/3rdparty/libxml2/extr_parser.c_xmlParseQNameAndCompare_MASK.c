
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_7__ {TYPE_1__* input; } ;
struct TYPE_6__ {char* cur; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 char const* FUNC_1 (TYPE_2__*,char const*) ;
 char* FUNC_2 (TYPE_2__*,char const**) ;

__attribute__((used)) static const xmlChar *
FUNC_3(xmlParserCtxtPtr VAR_1, xmlChar const *VAR_2,
                        xmlChar const *VAR_3) {
    const xmlChar *VAR_4;
    const xmlChar *VAR_5;
    const xmlChar *VAR_6;
    const xmlChar *VAR_7;

    if (VAR_3 == ((void*)0)) return(FUNC_1(VAR_1, VAR_2));

    VAR_0;
    VAR_5 = VAR_1->input->cur;

    VAR_4 = VAR_3;
    while (*VAR_5 != 0 && *VAR_5 == *VAR_4) {
 ++VAR_5;
 ++VAR_4;
    }
    if ((*VAR_4 == 0) && (*VAR_5 == ':')) {
        VAR_5++;
 VAR_4 = VAR_2;
 while (*VAR_5 != 0 && *VAR_5 == *VAR_4) {
     ++VAR_5;
     ++VAR_4;
 }
 if (*VAR_4 == 0 && (*VAR_5 == '>' || FUNC_0 (*VAR_5))) {

     VAR_1->input->cur = VAR_5;
     return((const xmlChar*) 1);
 }
    }



    VAR_6 = FUNC_2 (VAR_1, &VAR_7);
    if ((VAR_6 == VAR_2) && (VAR_3 == VAR_7))
 return((const xmlChar*) 1);
    return VAR_6;
}
