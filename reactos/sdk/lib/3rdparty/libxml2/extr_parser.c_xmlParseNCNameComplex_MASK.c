
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int options; scalar_t__ instate; int dict; TYPE_1__* input; } ;
struct TYPE_7__ {int cur; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int const* FUNC_2 (int ,size_t,int) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,int) ;

__attribute__((used)) static const xmlChar *
FUNC_6(xmlParserCtxtPtr VAR_9) {
    int VAR_10 = 0, VAR_11;
    int VAR_12;
    int VAR_13 = 0;
    size_t VAR_14 = 0;
    VAR_2;
    VAR_14 = VAR_1 - VAR_0;
    VAR_12 = FUNC_0(VAR_11);
    if ((VAR_12 == ' ') || (VAR_12 == '>') || (VAR_12 == '/') ||
 (!FUNC_5(VAR_9, VAR_12) || (VAR_12 == ':'))) {
 return(((void*)0));
    }

    while ((VAR_12 != ' ') && (VAR_12 != '>') && (VAR_12 != '/') &&
    (FUNC_4(VAR_9, VAR_12) && (VAR_12 != ':'))) {
 if (VAR_13++ > VAR_5) {
            if ((VAR_10 > VAR_4) &&
                ((VAR_9->options & VAR_7) == 0)) {
                FUNC_3(VAR_9, VAR_3, "NCName");
                return(((void*)0));
            }
     VAR_13 = 0;
     VAR_2;
            if (VAR_9->instate == VAR_6)
                return(((void*)0));
 }
 VAR_10 += VAR_11;
 FUNC_1(VAR_11);
 VAR_12 = FUNC_0(VAR_11);
 if (VAR_12 == 0) {
     VAR_13 = 0;





     VAR_9->input->cur -= VAR_11;
     VAR_2;
            if (VAR_9->instate == VAR_6)
                return(((void*)0));
     VAR_9->input->cur += VAR_11;
     VAR_12 = FUNC_0(VAR_11);
 }
    }
    if ((VAR_10 > VAR_4) &&
        ((VAR_9->options & VAR_7) == 0)) {
        FUNC_3(VAR_9, VAR_3, "NCName");
        return(((void*)0));
    }
    return(FUNC_2(VAR_9->dict, (VAR_0 + VAR_14), VAR_10));
}
