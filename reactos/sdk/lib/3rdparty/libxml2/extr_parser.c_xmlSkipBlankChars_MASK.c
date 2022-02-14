
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_7__ {char* cur; int col; int line; } ;
struct TYPE_6__ {int inputNr; scalar_t__ instate; scalar_t__ external; TYPE_4__* input; } ;


 char VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_2 ;
 char FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(xmlParserCtxtPtr VAR_4) {
    int VAR_5 = 0;





    if ((VAR_4->inputNr == 1) && (VAR_4->instate != VAR_3)) {
 const xmlChar *VAR_6;



 VAR_6 = VAR_4->input->cur;
 while (FUNC_0(*VAR_6)) {
     if (*VAR_6 == '\n') {
  VAR_4->input->line++; VAR_4->input->col = 1;
     } else {
  VAR_4->input->col++;
     }
     VAR_6++;
     VAR_5++;
     if (*VAR_6 == 0) {
  VAR_4->input->cur = VAR_6;
  FUNC_3(VAR_4->input, VAR_1);
  VAR_6 = VAR_4->input->cur;
     }
 }
 VAR_4->input->cur = VAR_6;
    } else {
        int VAR_7 = ((VAR_4->external != 0) || (VAR_4->inputNr != 1));

 while (1) {
            if (FUNC_0(VAR_0)) {
  VAR_2;
     } else if (VAR_0 == '%') {



         if ((VAR_7 == 0) || (FUNC_0(FUNC_1(1))) || (FUNC_1(1) == 0))
                    break;
         FUNC_2(VAR_4);
            } else if (VAR_0 == 0) {
                if (VAR_4->inputNr <= 1)
                    break;
                FUNC_4(VAR_4);
            } else {
                break;
            }
     VAR_5++;
        }
    }
    return(VAR_5);
}
