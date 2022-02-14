
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int options; int nbChars; TYPE_1__* input; int dict; } ;
struct TYPE_7__ {int* cur; int col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int const* FUNC_3 (TYPE_2__*) ;

const xmlChar *
FUNC_4(xmlParserCtxtPtr VAR_5) {
    const xmlChar *VAR_6;
    const xmlChar *VAR_7;
    int VAR_8 = 0;

    VAR_0;
    VAR_6 = VAR_5->input->cur;
    if (((*VAR_6 >= 0x61) && (*VAR_6 <= 0x7A)) ||
 ((*VAR_6 >= 0x41) && (*VAR_6 <= 0x5A)) ||
 (*VAR_6 == '_') || (*VAR_6 == ':')) {
 VAR_6++;
 while (((*VAR_6 >= 0x61) && (*VAR_6 <= 0x7A)) ||
        ((*VAR_6 >= 0x41) && (*VAR_6 <= 0x5A)) ||
        ((*VAR_6 >= 0x30) && (*VAR_6 <= 0x39)) ||
        (*VAR_6 == '_') || (*VAR_6 == '-') ||
        (*VAR_6 == ':') || (*VAR_6 == '.'))
     VAR_6++;
 if ((*VAR_6 > 0) && (*VAR_6 < 0x80)) {
     VAR_8 = VAR_6 - VAR_5->input->cur;
            if ((VAR_8 > VAR_2) &&
                ((VAR_5->options & VAR_3) == 0)) {
                FUNC_2(VAR_5, VAR_1, "Name");
                return(((void*)0));
            }
     VAR_7 = FUNC_0(VAR_5->dict, VAR_5->input->cur, VAR_8);
     VAR_5->input->cur = VAR_6;
     VAR_5->nbChars += VAR_8;
     VAR_5->input->col += VAR_8;
     if (VAR_7 == ((void*)0))
         FUNC_1(VAR_5, ((void*)0));
     return(VAR_7);
 }
    }

    return(FUNC_3(VAR_5));
}
