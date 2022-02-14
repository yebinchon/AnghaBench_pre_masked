
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_6__ {scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_5__ {scalar_t__* cur; int col; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static const xmlChar *
FUNC_2(xmlParserCtxtPtr VAR_2, xmlChar const *VAR_3) {
    register const xmlChar *VAR_4 = VAR_3;
    register const xmlChar *VAR_5;
    const xmlChar *VAR_6;

    VAR_0;
    if (VAR_2->instate == VAR_1)
        return(((void*)0));

    VAR_5 = VAR_2->input->cur;
    while (*VAR_5 != 0 && *VAR_5 == *VAR_4) {
 ++VAR_5;
 ++VAR_4;
 VAR_2->input->col++;
    }
    if (*VAR_4 == 0 && (*VAR_5 == '>' || FUNC_0 (*VAR_5))) {

 VAR_2->input->cur = VAR_5;
 return (const xmlChar*) 1;
    }

    VAR_6 = FUNC_1 (VAR_2);

    if (VAR_6 == VAR_3) {
 return (const xmlChar*) 1;
    }
    return VAR_6;
}
