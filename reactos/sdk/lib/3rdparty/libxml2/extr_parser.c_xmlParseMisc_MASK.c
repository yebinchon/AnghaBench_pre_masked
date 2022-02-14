
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlParserCtxtPtr ;
struct TYPE_5__ {scalar_t__ instate; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 char FUNC_2 (int) ;
 char VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void
FUNC_5(xmlParserCtxtPtr VAR_5) {
    while ((VAR_5->instate != VAR_4) &&
           (((VAR_3 == '<') && (FUNC_2(1) == '?')) ||
            (FUNC_0(VAR_1, '<', '!', '-', '-')) ||
            FUNC_1(VAR_0))) {
        if ((VAR_3 == '<') && (FUNC_2(1) == '?')) {
     FUNC_4(VAR_5);
 } else if (FUNC_1(VAR_0)) {
     VAR_2;
 } else
     FUNC_3(VAR_5);
    }
}
