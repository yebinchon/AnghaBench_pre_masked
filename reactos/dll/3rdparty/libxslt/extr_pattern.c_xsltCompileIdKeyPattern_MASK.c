
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xsltParserContextPtr ;
typedef scalar_t__ xsltAxis ;
typedef int xmlChar ;
struct TYPE_4__ {int error; } ;


 scalar_t__ VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int const*) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int *,char*) ;

__attribute__((used)) static void
FUNC_5(xsltParserContextPtr VAR_11, xmlChar *VAR_12,
  int VAR_13, int VAR_14, xsltAxis VAR_15) {
    xmlChar *VAR_16 = ((void*)0);
    xmlChar *VAR_17 = ((void*)0);

    if (VAR_1 != '(') {
 FUNC_4(((void*)0), ((void*)0), ((void*)0),
  "xsltCompileIdKeyPattern : ( expected\n");
 VAR_11->error = 1;
 return;
    }
    if ((VAR_13) && (FUNC_2(VAR_12, (const xmlChar *)"id"))) {
 if (VAR_15 != 0) {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : NodeTest expected\n");
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 VAR_3;
        VAR_16 = FUNC_3(VAR_11);
 if (VAR_11->error) {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : Literal expected\n");
     return;
 }
 VAR_3;
 if (VAR_1 != ')') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : ) expected\n");
     FUNC_1(VAR_16);
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 FUNC_0(VAR_6, VAR_16, ((void*)0), VAR_14);
 VAR_16 = ((void*)0);
    } else if ((VAR_13) && (FUNC_2(VAR_12, (const xmlChar *)"key"))) {
 if (VAR_15 != 0) {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : NodeTest expected\n");
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 VAR_3;
        VAR_16 = FUNC_3(VAR_11);
 if (VAR_11->error) {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : Literal expected\n");
     return;
 }
 VAR_3;
 if (VAR_1 != ',') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : , expected\n");
     FUNC_1(VAR_16);
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 VAR_3;
        VAR_17 = FUNC_3(VAR_11);
 if (VAR_11->error) {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : Literal expected\n");
     FUNC_1(VAR_16);
     return;
 }
 VAR_3;
 if (VAR_1 != ')') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : ) expected\n");
     FUNC_1(VAR_16);
     FUNC_1(VAR_17);
     VAR_11->error = 1;
     return;
 }
 VAR_2;

 FUNC_0(VAR_7, VAR_16, VAR_17, VAR_14);
 VAR_16 = ((void*)0);
 VAR_17 = ((void*)0);
    } else if (FUNC_2(VAR_12, (const xmlChar *)"processing-instruction")) {
 VAR_2;
 VAR_3;
 if (VAR_1 != ')') {
     VAR_16 = FUNC_3(VAR_11);
     if (VAR_11->error) {
  FUNC_4(((void*)0), ((void*)0), ((void*)0),
   "xsltCompileIdKeyPattern : Literal expected\n");
  return;
     }
     VAR_3;
     if (VAR_1 != ')') {
  FUNC_4(((void*)0), ((void*)0), ((void*)0),
   "xsltCompileIdKeyPattern : ) expected\n");
  VAR_11->error = 1;
                FUNC_1(VAR_16);
  return;
     }
 }
 VAR_2;
 FUNC_0(VAR_9, VAR_16, ((void*)0), VAR_14);
 VAR_16 = ((void*)0);
    } else if (FUNC_2(VAR_12, (const xmlChar *)"text")) {
 VAR_2;
 VAR_3;
 if (VAR_1 != ')') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : ) expected\n");
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 FUNC_0(VAR_10, ((void*)0), ((void*)0), VAR_14);
    } else if (FUNC_2(VAR_12, (const xmlChar *)"comment")) {
 VAR_2;
 VAR_3;
 if (VAR_1 != ')') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : ) expected\n");
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 FUNC_0(VAR_5, ((void*)0), ((void*)0), VAR_14);
    } else if (FUNC_2(VAR_12, (const xmlChar *)"node")) {
 VAR_2;
 VAR_3;
 if (VAR_1 != ')') {
     FUNC_4(((void*)0), ((void*)0), ((void*)0),
      "xsltCompileIdKeyPattern : ) expected\n");
     VAR_11->error = 1;
     return;
 }
 VAR_2;
 if (VAR_15 == VAR_0) {
     FUNC_0(VAR_4, ((void*)0), ((void*)0), VAR_14);
 }
 else {
     FUNC_0(VAR_8, ((void*)0), ((void*)0), VAR_14);
 }
    } else if (VAR_13) {
 FUNC_4(((void*)0), ((void*)0), ((void*)0),
     "xsltCompileIdKeyPattern : expecting 'key' or 'id' or node type\n");
 VAR_11->error = 1;
 return;
    } else {
 FUNC_4(((void*)0), ((void*)0), ((void*)0),
     "xsltCompileIdKeyPattern : node type\n");
 VAR_11->error = 1;
 return;
    }
error:
    return;
}
