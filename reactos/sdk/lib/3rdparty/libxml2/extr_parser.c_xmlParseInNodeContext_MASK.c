
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__ xmlParserErrors ;
typedef TYPE_1__* xmlParserCtxtPtr ;
typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef TYPE_4__* xmlDocPtr ;
typedef int * xmlCharEncodingHandlerPtr ;
typedef int xmlChar ;
struct TYPE_30__ {int const type; int * dict; int * encoding; } ;
struct TYPE_29__ {int type; struct TYPE_29__* next; struct TYPE_29__* parent; int * prev; struct TYPE_29__* last; TYPE_2__* nsDef; TYPE_4__* doc; } ;
struct TYPE_28__ {struct TYPE_28__* next; int * href; int * prefix; } ;
struct TYPE_27__ {int input_id; scalar_t__ replaceEntities; scalar_t__ errNo; int * dict; scalar_t__ wellFormed; TYPE_3__* node; int loadsubset; scalar_t__ validate; int instate; TYPE_4__* myDoc; int * encoding; } ;


 int VAR_0 ;
 char FUNC_0 (int) ;
 char VAR_1 ;






 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;

 int VAR_10 ;

 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int const*,int const*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*) ;
 TYPE_1__* FUNC_7 (char*,int) ;
 int FUNC_8 (TYPE_1__*,int,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int *,int) ;
 int FUNC_12 (TYPE_1__*,int ,int *) ;
 int * FUNC_13 (char const*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int * FUNC_18 (TYPE_1__*,int const*) ;
 TYPE_3__* FUNC_19 (int *) ;
 int FUNC_20 (TYPE_1__*) ;
 int * FUNC_21 (int const*) ;
 int FUNC_22 (TYPE_1__*,int *) ;
 int FUNC_23 (TYPE_3__*) ;

xmlParserErrors
FUNC_24(xmlNodePtr VAR_11, const char *VAR_12, int VAR_13,
                      int VAR_14, xmlNodePtr *VAR_15) {
    return(VAR_3);

}
