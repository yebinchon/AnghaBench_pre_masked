
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltParserContextPtr ;
typedef scalar_t__ xsltAxis ;
typedef TYPE_2__* xmlNsPtr ;
typedef int xmlChar ;
struct TYPE_8__ {int const* href; } ;
struct TYPE_7__ {int error; int elem; int doc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char VAR_2 ;
 int const* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int *,int) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int * FUNC_5 (int const*) ;
 int * FUNC_6 (int const*,int) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int,scalar_t__) ;
 int * FUNC_8 (int ,int **) ;
 int * FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_11(xsltParserContextPtr VAR_11, xmlChar *VAR_12, int VAR_13) {
    xmlChar *VAR_14 = ((void*)0);
    const xmlChar *VAR_15 = ((void*)0);
    xmlChar *VAR_16 = ((void*)0);
    int VAR_17;
    xsltAxis VAR_18 = 0;

    VAR_5;
    if ((VAR_12 == ((void*)0)) && (VAR_2 == '@')) {
 VAR_4;
        VAR_18 = VAR_0;
    }
parse_node_test:
    if (VAR_12 == ((void*)0))
 VAR_12 = FUNC_9(VAR_11);
    if (VAR_12 == ((void*)0)) {
 if (VAR_2 == '*') {
     VAR_4;
     if (VAR_18 == VAR_0) {
                FUNC_0(VAR_7, ((void*)0), ((void*)0), VAR_13);
            }
            else {
                FUNC_0(VAR_6, ((void*)0), ((void*)0), VAR_13);
            }
     goto parse_predicate;
 } else {
     FUNC_10(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileStepPattern : Name expected\n");
     VAR_11->error = 1;
     goto error;
 }
    }


    VAR_5;
    if (VAR_2 == '(') {
 FUNC_7(VAR_11, VAR_12, 0, VAR_13, VAR_18);
 FUNC_2(VAR_12);
 VAR_12 = ((void*)0);
 if (VAR_11->error)
     goto error;
    } else if (VAR_2 == ':') {
 VAR_4;
 if (VAR_2 != ':') {
     xmlChar *VAR_19 = VAR_12;
     xmlNsPtr VAR_20;




     VAR_12 = FUNC_9(VAR_11);
     VAR_20 = FUNC_3(VAR_11->doc, VAR_11->elem, VAR_19);
     if (VAR_20 == ((void*)0)) {
  FUNC_10(((void*)0), ((void*)0), ((void*)0),
     "xsltCompileStepPattern : no namespace bound to prefix %s\n",
     VAR_19);
  FUNC_2(VAR_19);
  VAR_19=((void*)0);
  VAR_11->error = 1;
  goto error;
     } else {
  VAR_16 = FUNC_5(VAR_20->href);
     }
     FUNC_2(VAR_19);
     VAR_19=((void*)0);
     if (VAR_12 == ((void*)0)) {
  if (VAR_2 == '*') {
      VAR_4;
                    if (VAR_18 == VAR_0) {
                        FUNC_0(VAR_7, ((void*)0), VAR_16, VAR_13);
   VAR_16 = ((void*)0);
                    }
                    else {
                        FUNC_0(VAR_9, VAR_16, ((void*)0), VAR_13);
   VAR_16 = ((void*)0);
                    }
  } else {
      FUNC_10(((void*)0), ((void*)0), ((void*)0),
       "xsltCompileStepPattern : Name expected\n");
      VAR_11->error = 1;
                    FUNC_2(VAR_16);
      goto error;
  }
     } else {
                if (VAR_18 == VAR_0) {
                    FUNC_0(VAR_7, VAR_12, VAR_16, VAR_13);
      VAR_12 = ((void*)0);
      VAR_16 = ((void*)0);
                }
                else {
                    FUNC_0(VAR_8, VAR_12, VAR_16, VAR_13);
      VAR_12 = ((void*)0);
      VAR_16 = ((void*)0);
                }
     }
 } else {
     if (VAR_18 != 0) {
  FUNC_10(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileStepPattern : NodeTest expected\n");
  VAR_11->error = 1;
  goto error;
     }
     VAR_4;
     if (FUNC_4(VAR_12, (const xmlChar *) "child")) {
         VAR_18 = VAR_1;
     } else if (FUNC_4(VAR_12, (const xmlChar *) "attribute")) {
         VAR_18 = VAR_0;
     } else {
  FUNC_10(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileStepPattern : 'child' or 'attribute' expected\n");
  VAR_11->error = 1;
  goto error;
     }
     FUNC_2(VAR_12);
     VAR_12 = ((void*)0);
            VAR_5;
            VAR_12 = FUNC_9(VAR_11);
     goto parse_node_test;
 }
    } else {
 VAR_15 = FUNC_8(VAR_11->elem, &VAR_12);
 if (VAR_12 == ((void*)0)) {
     VAR_11->error = 1;
     goto error;
 }
 if (VAR_15 != ((void*)0))
     VAR_16 = FUNC_5(VAR_15);
        if (VAR_18 == VAR_0) {
            FUNC_0(VAR_7, VAR_12, VAR_16, VAR_13);
     VAR_12 = ((void*)0);
     VAR_16 = ((void*)0);
        }
        else {
            FUNC_0(VAR_8, VAR_12, VAR_16, VAR_13);
     VAR_12 = ((void*)0);
     VAR_16 = ((void*)0);
        }
    }
parse_predicate:
    VAR_5;
    VAR_17 = 0;
    while (VAR_2 == '[') {
 const xmlChar *VAR_21;
 xmlChar *VAR_22 = ((void*)0);

 VAR_17++;
 VAR_4;
 VAR_21 = VAR_3;
 while (VAR_2 != 0) {

     if (VAR_2 == '[')
  VAR_17++;
     else if (VAR_2 == ']') {
  VAR_17--;
  if (VAR_17 == 0)
      break;
     } else if (VAR_2 == '"') {
  VAR_4;
  while ((VAR_2 != 0) && (VAR_2 != '"'))
      VAR_4;
     } else if (VAR_2 == '\'') {
  VAR_4;
  while ((VAR_2 != 0) && (VAR_2 != '\''))
      VAR_4;
     }
     VAR_4;
 }
 if (VAR_2 == 0) {
     FUNC_10(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileStepPattern : ']' expected\n");
     VAR_11->error = 1;
     return;
        }
 VAR_22 = FUNC_6(VAR_21, VAR_3 - VAR_21);
 FUNC_0(VAR_10, VAR_22, ((void*)0), VAR_13);
 VAR_22 = ((void*)0);

 FUNC_1();
 VAR_4;
 VAR_5;
    }
    return;
error:
    if (VAR_12 != ((void*)0))
 FUNC_2(VAR_12);
    if (VAR_14 != ((void*)0))
 FUNC_2(VAR_14);
}
