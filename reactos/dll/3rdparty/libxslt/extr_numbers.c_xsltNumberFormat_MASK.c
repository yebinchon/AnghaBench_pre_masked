
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltNumberDataPtr ;
struct TYPE_17__ {int nTokens; TYPE_1__* tokens; int * end; int * start; } ;
typedef TYPE_4__ xsltFormat ;
typedef int xmlNodePtr ;
typedef int xmlChar ;
typedef int * xmlBufferPtr ;
typedef int numarray ;
struct TYPE_16__ {scalar_t__ has_format; int fromPat; int countPat; scalar_t__ level; scalar_t__ value; int node; int * format; } ;
struct TYPE_15__ {int insert; int xpathCtxt; } ;
struct TYPE_14__ {int * separator; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int const*) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int * FUNC_6 (TYPE_2__*,int ,int const*,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,double*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ,double*,int) ;
 int FUNC_9 (int ,int ,scalar_t__,double*) ;
 int FUNC_10 (TYPE_3__*,double*,int,TYPE_4__*,int *) ;
 int FUNC_11 (int *,TYPE_4__*) ;

void
FUNC_12(xsltTransformContextPtr VAR_1,
   xsltNumberDataPtr VAR_2,
   xmlNodePtr VAR_3)
{
    xmlBufferPtr VAR_4 = ((void*)0);
    int VAR_5, VAR_6;
    double VAR_7;
    xsltFormat VAR_8;

    if (VAR_2->format != ((void*)0)) {
        FUNC_11(VAR_2->format, &VAR_8);
    }
    else {
        xmlChar *VAR_9;


        if (VAR_2->has_format == 0)
            return;
 VAR_9 = FUNC_6(VAR_1, VAR_2->node,
          (const xmlChar *) "format",
          VAR_0);
        if (VAR_9 == ((void*)0))
            return;
        FUNC_11(VAR_9, &VAR_8);
 FUNC_3(VAR_9);
    }

    VAR_4 = FUNC_1();
    if (VAR_4 == ((void*)0))
 goto XSLT_NUMBER_FORMAT_END;




    if (VAR_2->value) {
 VAR_5 = FUNC_9(VAR_1->xpathCtxt,
       VAR_3,
       VAR_2->value,
       &VAR_7);
 if (VAR_5 == 1) {
     FUNC_10(VAR_2,
       &VAR_7,
       1,
       &VAR_8,
       VAR_4);
 }

    } else if (VAR_2->level) {

 if (FUNC_4(VAR_2->level, (const xmlChar *) "single")) {
     VAR_5 = FUNC_8(VAR_1,
            VAR_3,
            VAR_2->countPat,
            VAR_2->fromPat,
            &VAR_7,
            1);
     if (VAR_5 == 1) {
  FUNC_10(VAR_2,
           &VAR_7,
           1,
           &VAR_8,
           VAR_4);
     }
 } else if (FUNC_4(VAR_2->level, (const xmlChar *) "multiple")) {
     double VAR_10[1024];
     int VAR_11 = sizeof(VAR_10)/sizeof(VAR_10[0]);
     VAR_5 = FUNC_8(VAR_1,
            VAR_3,
            VAR_2->countPat,
            VAR_2->fromPat,
            VAR_10,
            VAR_11);
     if (VAR_5 > 0) {
  FUNC_10(VAR_2,
           VAR_10,
           VAR_5,
           &VAR_8,
           VAR_4);
     }
 } else if (FUNC_4(VAR_2->level, (const xmlChar *) "any")) {
     VAR_5 = FUNC_7(VAR_1,
       VAR_3,
       VAR_2->countPat,
       VAR_2->fromPat,
       &VAR_7);
     if (VAR_5 > 0) {
  FUNC_10(VAR_2,
           &VAR_7,
           1,
           &VAR_8,
           VAR_4);
     }
 }
    }

    FUNC_5(VAR_1, VAR_1->insert, FUNC_0(VAR_4), 0);

    FUNC_2(VAR_4);

XSLT_NUMBER_FORMAT_END:
    if (VAR_8.start != ((void*)0))
 FUNC_3(VAR_8.start);
    if (VAR_8.end != ((void*)0))
 FUNC_3(VAR_8.end);
    for (VAR_6 = 0;VAR_6 < VAR_8.nTokens;VAR_6++) {
 if (VAR_8.tokens[VAR_6].separator != ((void*)0))
     FUNC_3(VAR_8.tokens[VAR_6].separator);
    }
}
