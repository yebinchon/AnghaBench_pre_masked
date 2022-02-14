
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_9__ {int inputNr; scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_8__ {unsigned int consumed; } ;


 int const* VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(xmlParserCtxtPtr VAR_8) {



    if (VAR_2 == '[') {
        int VAR_9 = VAR_8->inputNr;
        VAR_8->instate = VAR_6;
        VAR_1;





 while (((VAR_2 != ']') || (VAR_8->inputNr > VAR_9)) &&
               (VAR_8->instate != VAR_7)) {
     const xmlChar *VAR_10 = VAR_0;
     unsigned int VAR_11 = VAR_8->input->consumed;

     VAR_3;
     FUNC_1(VAR_8);
     FUNC_2(VAR_8);

     if ((VAR_0 == VAR_10) && (VAR_11 == VAR_8->input->consumed)) {
  FUNC_0(VAR_8, VAR_5,
      "xmlParseInternalSubset: error detected in Markup declaration\n");
                if (VAR_8->inputNr > VAR_9)
                    FUNC_3(VAR_8);
                else
      break;
     }
 }
 if (VAR_2 == ']') {
     VAR_1;
     VAR_3;
 }
    }




    if (VAR_2 != '>') {
 FUNC_0(VAR_8, VAR_4, ((void*)0));
 return;
    }
    VAR_1;
}
