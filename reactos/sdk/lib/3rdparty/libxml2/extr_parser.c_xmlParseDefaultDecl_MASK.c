
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlParserErrors ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef int xmlChar ;
struct TYPE_5__ {scalar_t__ errNo; int instate; } ;


 scalar_t__ FUNC_0 (int ,char,float,char,char,char,char) ;
 scalar_t__ FUNC_1 (int ,char,char,char,char,char,char,char,char) ;
 scalar_t__ FUNC_2 (int ,char,char,char,char,unsigned char,char,char,char,char) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int * FUNC_5 (TYPE_1__*) ;

int
FUNC_6(xmlParserCtxtPtr VAR_8, xmlChar **VAR_9) {
    int VAR_10;
    xmlChar *VAR_11;

    *VAR_9 = ((void*)0);
    if (FUNC_2(VAR_0, '#', 'R', 'E', 'Q', 'U', 'I', 'R', 'E', 'D')) {
 FUNC_3(9);
 return(VAR_5);
    }
    if (FUNC_1(VAR_0, '#', 'I', 'M', 'P', 'L', 'I', 'E', 'D')) {
 FUNC_3(8);
 return(VAR_3);
    }
    VAR_10 = VAR_4;
    if (FUNC_0(VAR_0, '#', 'F', 'I', 'X', 'E', 'D')) {
 FUNC_3(6);
 VAR_10 = VAR_2;
 if (VAR_1 == 0) {
     FUNC_4(VAR_8, VAR_6,
      "Space required after '#FIXED'\n");
 }
    }
    VAR_11 = FUNC_5(VAR_8);
    VAR_8->instate = VAR_7;
    if (VAR_11 == ((void*)0)) {
 FUNC_4(VAR_8, (xmlParserErrors)VAR_8->errNo,
         "Attribute default value declaration error\n");
    } else
        *VAR_9 = VAR_11;
    return(VAR_10);
}
