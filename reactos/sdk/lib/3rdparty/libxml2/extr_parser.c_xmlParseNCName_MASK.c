
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int options; int nbChars; TYPE_1__* input; int dict; } ;
struct TYPE_7__ {int* cur; int* end; int col; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_0 (int ,int const*,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int const* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static const xmlChar *
FUNC_4(xmlParserCtxtPtr VAR_4) {
    const xmlChar *VAR_5, *VAR_6;
    const xmlChar *VAR_7;
    int VAR_8 = 0;
    VAR_5 = VAR_4->input->cur;
    VAR_6 = VAR_4->input->end;
    if ((((*VAR_5 >= 0x61) && (*VAR_5 <= 0x7A)) ||
  ((*VAR_5 >= 0x41) && (*VAR_5 <= 0x5A)) ||
  (*VAR_5 == '_')) && (VAR_5 < VAR_6)) {
 VAR_5++;
 while ((((*VAR_5 >= 0x61) && (*VAR_5 <= 0x7A)) ||
         ((*VAR_5 >= 0x41) && (*VAR_5 <= 0x5A)) ||
         ((*VAR_5 >= 0x30) && (*VAR_5 <= 0x39)) ||
         (*VAR_5 == '_') || (*VAR_5 == '-') ||
         (*VAR_5 == '.')) && (VAR_5 < VAR_6))
     VAR_5++;
 if (VAR_5 >= VAR_6)
     goto complex;
 if ((*VAR_5 > 0) && (*VAR_5 < 0x80)) {
     VAR_8 = VAR_5 - VAR_4->input->cur;
            if ((VAR_8 > VAR_1) &&
                ((VAR_4->options & VAR_2) == 0)) {
                FUNC_2(VAR_4, VAR_0, "NCName");
                return(((void*)0));
            }
     VAR_7 = FUNC_0(VAR_4->dict, VAR_4->input->cur, VAR_8);
     VAR_4->input->cur = VAR_5;
     VAR_4->nbChars += VAR_8;
     VAR_4->input->col += VAR_8;
     if (VAR_7 == ((void*)0)) {
         FUNC_1(VAR_4, ((void*)0));
     }
     return(VAR_7);
 }
    }
complex:
    return(FUNC_3(VAR_4));
}
