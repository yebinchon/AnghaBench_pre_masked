
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xsltParserContextPtr ;
typedef TYPE_4__* xsltCompMatchPtr ;
typedef void* xmlNodePtr ;
typedef int xmlDocPtr ;
typedef char xmlChar ;
struct TYPE_19__ {int nsNr; int novar; double priority; int * pattern; TYPE_1__* steps; int ** nsList; void* node; struct TYPE_19__* next; } ;
struct TYPE_18__ {scalar_t__ error; int * base; int * cur; TYPE_4__* comp; void* elem; int doc; } ;
struct TYPE_17__ {int errors; } ;
struct TYPE_16__ {scalar_t__ op; int * value2; int * value; } ;


 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int ** FUNC_1 (int ,void*) ;
 int * FUNC_2 (char const*,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*,int *,...) ;
 int VAR_9 ;
 TYPE_4__* FUNC_7 () ;
 TYPE_3__* FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_10 (int *,TYPE_2__*,void*,char*,...) ;

__attribute__((used)) static xsltCompMatchPtr
FUNC_11(const xmlChar *VAR_10, xmlDocPtr VAR_11,
            xmlNodePtr VAR_12, xsltStylesheetPtr VAR_13,
     xsltTransformContextPtr VAR_14, int VAR_15) {
    xsltParserContextPtr VAR_16 = ((void*)0);
    xsltCompMatchPtr VAR_17, VAR_18 = ((void*)0), VAR_19 = ((void*)0);
    int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

    if (VAR_10 == ((void*)0)) {
 FUNC_10(((void*)0), ((void*)0), VAR_12,
    "xsltCompilePattern : NULL pattern\n");
 return(((void*)0));
    }

    VAR_16 = FUNC_8(VAR_13, VAR_14);
    if (VAR_16 == ((void*)0))
 return(((void*)0));
    VAR_16->doc = VAR_11;
    VAR_16->elem = VAR_12;
    VAR_20 = VAR_22 = 0;
    while (VAR_10[VAR_20] != 0) {
 VAR_21 = VAR_20;
 while (FUNC_0(VAR_10[VAR_20]))
     VAR_20++;
 VAR_22 = VAR_20;
 VAR_23 = 0;
 while ((VAR_10[VAR_22] != 0) && ((VAR_10[VAR_22] != '|') || (VAR_23 != 0))) {
     if (VAR_10[VAR_22] == '[')
  VAR_23++;
     else if (VAR_10[VAR_22] == ']')
  VAR_23--;
     else if (VAR_10[VAR_22] == '\'') {
  VAR_22++;
  while ((VAR_10[VAR_22] != 0) && (VAR_10[VAR_22] != '\''))
      VAR_22++;
     } else if (VAR_10[VAR_22] == '"') {
  VAR_22++;
  while ((VAR_10[VAR_22] != 0) && (VAR_10[VAR_22] != '"'))
      VAR_22++;
     }
     if (VAR_10[VAR_22] == 0)
         break;
     VAR_22++;
 }
 if (VAR_20 == VAR_22) {
     FUNC_10(((void*)0), ((void*)0), VAR_12,
        "xsltCompilePattern : NULL pattern\n");
     goto error;
 }
 VAR_17 = FUNC_7();
 if (VAR_17 == ((void*)0)) {
     goto error;
 }
 if (VAR_18 == ((void*)0))
     VAR_18 = VAR_17;
 else if (VAR_19 != ((void*)0))
     VAR_19->next = VAR_17;
 VAR_19 = VAR_17;

 VAR_16->comp = VAR_17;
 VAR_16->base = FUNC_2(&VAR_10[VAR_21], VAR_22 - VAR_21);
 if (VAR_16->base == ((void*)0))
     goto error;
 VAR_16->cur = &(VAR_16->base)[VAR_20 - VAR_21];
 VAR_17->pattern = VAR_16->base;
        VAR_17->node = VAR_12;
 VAR_17->nsList = FUNC_1(VAR_11, VAR_12);
 VAR_24 = 0;
 if (VAR_17->nsList != ((void*)0)) {
     while (VAR_17->nsList[VAR_24] != ((void*)0))
  VAR_24++;
 }
 VAR_17->nsNr = VAR_24;
        VAR_17->novar = VAR_15;
 VAR_17->priority = 0;
 FUNC_3(VAR_16, VAR_15);
 if (VAR_16->error) {
     FUNC_10(((void*)0), VAR_13, VAR_12,
        "xsltCompilePattern : failed to compile '%s'\n",
        VAR_17->pattern);
     if (VAR_13 != ((void*)0)) VAR_13->errors++;
     goto error;
 }




 FUNC_9(VAR_16, VAR_17);




 if (VAR_17->priority == 0) {
     if (((VAR_17->steps[0].op == VAR_3) ||
   (VAR_17->steps[0].op == VAR_1) ||
   (VAR_17->steps[0].op == VAR_7)) &&
  (VAR_17->steps[0].value != ((void*)0)) &&
  (VAR_17->steps[1].op == VAR_4)) {
  ;
     } else if ((VAR_17->steps[0].op == VAR_1) &&
         (VAR_17->steps[0].value2 != ((void*)0)) &&
         (VAR_17->steps[1].op == VAR_4)) {
   VAR_17->priority = -0.25;
     } else if ((VAR_17->steps[0].op == VAR_6) &&
         (VAR_17->steps[0].value != ((void*)0)) &&
         (VAR_17->steps[1].op == VAR_4)) {
   VAR_17->priority = -0.25;
     } else if ((VAR_17->steps[0].op == VAR_1) &&
         (VAR_17->steps[0].value == ((void*)0)) &&
         (VAR_17->steps[0].value2 == ((void*)0)) &&
         (VAR_17->steps[1].op == VAR_4)) {
   VAR_17->priority = -0.5;
     } else if (((VAR_17->steps[0].op == VAR_7) ||
         (VAR_17->steps[0].op == VAR_8) ||
         (VAR_17->steps[0].op == VAR_0) ||
         (VAR_17->steps[0].op == VAR_5) ||
         (VAR_17->steps[0].op == VAR_2)) &&
         (VAR_17->steps[1].op == VAR_4)) {
   VAR_17->priority = -0.5;
     } else {
  VAR_17->priority = 0.5;
     }
 }





 if (VAR_10[VAR_22] == '|')
     VAR_22++;
 VAR_20 = VAR_22;
    }
    if (VAR_22 == 0) {
 FUNC_10(((void*)0), VAR_13, VAR_12,
    "xsltCompilePattern : NULL pattern\n");
 if (VAR_13 != ((void*)0)) VAR_13->errors++;
 goto error;
    }

    FUNC_5(VAR_16);
    return(VAR_18);

error:
    if (VAR_16 != ((void*)0))
 FUNC_5(VAR_16);
    if (VAR_18 != ((void*)0))
 FUNC_4(VAR_18);
    return(((void*)0));
}
