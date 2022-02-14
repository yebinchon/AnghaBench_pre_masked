
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xsltParserContextPtr ;
typedef scalar_t__ xsltOp ;
typedef TYPE_2__* xsltCompMatchPtr ;
typedef int xmlXPathCompExprPtr ;
typedef char xmlChar ;
struct TYPE_6__ {int nbStep; int direct; char* pattern; TYPE_1__* steps; } ;
struct TYPE_5__ {char* value; char* value2; char* value3; scalar_t__ op; int previousExtra; int indexExtra; int lenExtra; int comp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(xsltParserContextPtr VAR_4, xsltCompMatchPtr VAR_5) {
    int VAR_6 = 0;
    int VAR_7 = VAR_5->nbStep - 1;

    while (VAR_7 > VAR_6) {
 register xmlChar *VAR_8;
 register xsltOp VAR_9;
 register xmlXPathCompExprPtr VAR_10;
 register int VAR_11;

 VAR_8 = VAR_5->steps[VAR_6].value;
 VAR_5->steps[VAR_6].value = VAR_5->steps[VAR_7].value;
 VAR_5->steps[VAR_7].value = VAR_8;
 VAR_8 = VAR_5->steps[VAR_6].value2;
 VAR_5->steps[VAR_6].value2 = VAR_5->steps[VAR_7].value2;
 VAR_5->steps[VAR_7].value2 = VAR_8;
 VAR_8 = VAR_5->steps[VAR_6].value3;
 VAR_5->steps[VAR_6].value3 = VAR_5->steps[VAR_7].value3;
 VAR_5->steps[VAR_7].value3 = VAR_8;
 VAR_9 = VAR_5->steps[VAR_6].op;
 VAR_5->steps[VAR_6].op = VAR_5->steps[VAR_7].op;
 VAR_5->steps[VAR_7].op = VAR_9;
 VAR_10 = VAR_5->steps[VAR_6].comp;
 VAR_5->steps[VAR_6].comp = VAR_5->steps[VAR_7].comp;
 VAR_5->steps[VAR_7].comp = VAR_10;
 VAR_11 = VAR_5->steps[VAR_6].previousExtra;
 VAR_5->steps[VAR_6].previousExtra = VAR_5->steps[VAR_7].previousExtra;
 VAR_5->steps[VAR_7].previousExtra = VAR_11;
 VAR_11 = VAR_5->steps[VAR_6].indexExtra;
 VAR_5->steps[VAR_6].indexExtra = VAR_5->steps[VAR_7].indexExtra;
 VAR_5->steps[VAR_7].indexExtra = VAR_11;
 VAR_11 = VAR_5->steps[VAR_6].lenExtra;
 VAR_5->steps[VAR_6].lenExtra = VAR_5->steps[VAR_7].lenExtra;
 VAR_5->steps[VAR_7].lenExtra = VAR_11;
 VAR_7--;
 VAR_6++;
    }
    FUNC_3(VAR_4, VAR_5, VAR_2, ((void*)0), ((void*)0), 0);





    for (VAR_6 = 0;VAR_6 < VAR_5->nbStep - 1;VAR_6++) {
        xsltOp VAR_12 = VAR_5->steps[VAR_6].op;

        if ((VAR_12 != VAR_1) &&
            (VAR_12 != VAR_0) &&
     (VAR_5->steps[VAR_6 + 1].op == VAR_3)) {

     VAR_5->direct = 1;
     if (VAR_5->pattern[0] != '/') {
  xmlChar *VAR_13;

  VAR_13 = FUNC_2((const xmlChar *)"//");
  VAR_13 = FUNC_1(VAR_13, VAR_5->pattern);

  FUNC_0((xmlChar *) VAR_5->pattern);
  VAR_5->pattern = VAR_13;
     }
     break;
 }
    }
}
