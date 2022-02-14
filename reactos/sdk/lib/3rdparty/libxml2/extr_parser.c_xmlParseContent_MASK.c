
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef char xmlChar ;
struct TYPE_13__ {scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_12__ {unsigned int consumed; char* cur; } ;


 scalar_t__ FUNC_0 (char const*,char,char,char,char,char,char,char,char,char) ;
 char const* VAR_0 ;
 int VAR_1 ;
 char FUNC_1 (int) ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;

void
FUNC_10(xmlParserCtxtPtr VAR_7) {
    VAR_1;
    while ((VAR_2 != 0) &&
    ((VAR_2 != '<') || (FUNC_1(1) != '/')) &&
    (VAR_7->instate != VAR_6)) {
 const xmlChar *VAR_8 = VAR_0;
 unsigned int VAR_9 = VAR_7->input->consumed;
 const xmlChar *VAR_10 = VAR_7->input->cur;




 if ((*VAR_10 == '<') && (VAR_10[1] == '?')) {
     FUNC_8(VAR_7);
 }





 else if (FUNC_0(VAR_0, '<', '!', '[', 'C', 'D', 'A', 'T', 'A', '[')) {
     FUNC_4(VAR_7);
 }




 else if ((*VAR_10 == '<') && (FUNC_1(1) == '!') &&
   (FUNC_1(2) == '-') && (FUNC_1(3) == '-')) {
     FUNC_6(VAR_7);
     VAR_7->instate = VAR_5;
 }




 else if (*VAR_10 == '<') {
     FUNC_7(VAR_7);
 }






 else if (*VAR_10 == '&') {
     FUNC_9(VAR_7);
 }




 else {
     FUNC_5(VAR_7, 0);
 }

 VAR_1;
 VAR_3;

 if ((VAR_9 == VAR_7->input->consumed) && (VAR_8 == VAR_0)) {
     FUNC_2(VAR_7, VAR_4,
                 "detected an error in element content\n");
     FUNC_3(VAR_7);
            break;
 }
    }
}
