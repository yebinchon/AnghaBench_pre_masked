
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_10__ {scalar_t__ instate; scalar_t__ external; int inputNr; } ;


 char VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int) ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(xmlParserCtxtPtr VAR_5) {
    VAR_1;
    if (VAR_0 == '<') {
        if (FUNC_0(1) == '!') {
     switch (FUNC_0(2)) {
         case 'E':
      if (FUNC_0(3) == 'L')
   FUNC_4(VAR_5);
      else if (FUNC_0(3) == 'N')
   FUNC_5(VAR_5);
      break;
         case 'A':
      FUNC_1(VAR_5);
      break;
         case 'N':
      FUNC_6(VAR_5);
      break;
         case '-':
      FUNC_2(VAR_5);
      break;
  default:

      break;
     }
 } else if (FUNC_0(1) == '?') {
     FUNC_7(VAR_5);
 }
    }





    if (VAR_5->instate == VAR_4)
        return;





    if ((VAR_5->external == 0) && (VAR_5->inputNr > 1)) {
        if ((VAR_2 == '<') && (FUNC_0(1) == '!') && (FUNC_0(2) == '[')) {
     FUNC_3(VAR_5);
 }
    }

    VAR_5->instate = VAR_3;
}
