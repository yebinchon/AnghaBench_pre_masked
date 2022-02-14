
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
struct TYPE_7__ {scalar_t__ instate; TYPE_1__* input; int nbChars; } ;
struct TYPE_6__ {int cur; int col; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_2 ;
 char FUNC_1 (int) ;
 char VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ,char*,unsigned int) ;

int
FUNC_5(xmlParserCtxtPtr VAR_9) {
    unsigned int VAR_10 = 0;
    int VAR_11 = 0;
    unsigned int VAR_12 = 0;




    if ((VAR_3 == '&') && (FUNC_1(1) == '#') &&
        (FUNC_1(2) == 'x')) {
 FUNC_2(3);
 VAR_1;
 while (VAR_3 != ';') {
     if (VAR_11++ > 20) {
  VAR_11 = 0;
  VAR_1;
                if (VAR_9->instate == VAR_8)
                    return(0);
     }
     if ((VAR_3 >= '0') && (VAR_3 <= '9'))
         VAR_10 = VAR_10 * 16 + (VAR_0 - '0');
     else if ((VAR_3 >= 'a') && (VAR_3 <= 'f') && (VAR_11 < 20))
         VAR_10 = VAR_10 * 16 + (VAR_0 - 'a') + 10;
     else if ((VAR_3 >= 'A') && (VAR_3 <= 'F') && (VAR_11 < 20))
         VAR_10 = VAR_10 * 16 + (VAR_0 - 'A') + 10;
     else {
  FUNC_3(VAR_9, VAR_7, ((void*)0));
  VAR_10 = 0;
  break;
     }
     if (VAR_10 > 0x10FFFF)
         VAR_12 = VAR_10;

     VAR_2;
     VAR_11++;
 }
 if (VAR_3 == ';') {

     VAR_9->input->col++;
     VAR_9->nbChars ++;
     VAR_9->input->cur++;
 }
    } else if ((VAR_3 == '&') && (FUNC_1(1) == '#')) {
 FUNC_2(2);
 VAR_1;
 while (VAR_3 != ';') {
     if (VAR_11++ > 20) {
  VAR_11 = 0;
  VAR_1;
                if (VAR_9->instate == VAR_8)
                    return(0);
     }
     if ((VAR_3 >= '0') && (VAR_3 <= '9'))
         VAR_10 = VAR_10 * 10 + (VAR_0 - '0');
     else {
  FUNC_3(VAR_9, VAR_6, ((void*)0));
  VAR_10 = 0;
  break;
     }
     if (VAR_10 > 0x10FFFF)
         VAR_12 = VAR_10;

     VAR_2;
     VAR_11++;
 }
 if (VAR_3 == ';') {

     VAR_9->input->col++;
     VAR_9->nbChars ++;
     VAR_9->input->cur++;
 }
    } else {
        FUNC_3(VAR_9, VAR_5, ((void*)0));
    }






    if ((FUNC_0(VAR_10) && (VAR_12 == 0))) {
        return(VAR_10);
    } else {
        FUNC_4(VAR_9, VAR_4,
                          "xmlParseCharRef: invalid xmlChar value %d\n",
                   VAR_10);
    }
    return(0);
}
