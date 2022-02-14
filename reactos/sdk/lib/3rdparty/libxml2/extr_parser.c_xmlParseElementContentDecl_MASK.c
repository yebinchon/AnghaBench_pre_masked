
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xmlParserCtxtPtr ;
typedef int * xmlElementContentPtr ;
typedef int xmlChar ;
struct TYPE_8__ {scalar_t__ instate; TYPE_1__* input; } ;
struct TYPE_7__ {int id; } ;


 scalar_t__ FUNC_0 (int ,char,char,char,char,char,char,char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int const*) ;
 int * FUNC_2 (TYPE_2__*,int,int) ;
 int * FUNC_3 (TYPE_2__*,int) ;

int
FUNC_4(xmlParserCtxtPtr VAR_9, const xmlChar *VAR_10,
                           xmlElementContentPtr *VAR_11) {

    xmlElementContentPtr VAR_12 = ((void*)0);
    int VAR_13 = VAR_9->input->id;
    int VAR_14;

    *VAR_11 = ((void*)0);

    if (VAR_3 != '(') {
 FUNC_1(VAR_9, VAR_7,
  "xmlParseElementContentDecl : %s '(' expected\n", VAR_10);
 return(-1);
    }
    VAR_2;
    VAR_1;
    if (VAR_9->instate == VAR_8)
        return(-1);
    VAR_4;
    if (FUNC_0(VAR_0, '#', 'P', 'C', 'D', 'A', 'T', 'A')) {
        VAR_12 = FUNC_3(VAR_9, VAR_13);
 VAR_14 = VAR_6;
    } else {
        VAR_12 = FUNC_2(VAR_9, VAR_13, 1);
 VAR_14 = VAR_5;
    }
    VAR_4;
    *VAR_11 = VAR_12;
    return(VAR_14);
}
