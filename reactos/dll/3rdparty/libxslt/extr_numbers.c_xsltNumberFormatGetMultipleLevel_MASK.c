
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int * xsltCompMatchPtr ;
typedef scalar_t__ xmlXPathParserContextPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_17__ {scalar_t__ type; } ;
struct TYPE_16__ {TYPE_14__* xpathCtxt; } ;
struct TYPE_15__ {TYPE_2__* node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,TYPE_14__*) ;
 TYPE_2__* FUNC_2 (scalar_t__,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,int *) ;

__attribute__((used)) static int
FUNC_6(xsltTransformContextPtr VAR_1,
     xmlNodePtr VAR_2,
     xsltCompMatchPtr VAR_3,
     xsltCompMatchPtr VAR_4,
     double *VAR_5,
     int VAR_6)
{
    int VAR_7 = 0;
    int VAR_8;
    xmlNodePtr VAR_9;
    xmlNodePtr VAR_10;
    xmlXPathParserContextPtr VAR_11;

    VAR_1->xpathCtxt->node = VAR_2;
    VAR_11 = FUNC_1(((void*)0), VAR_1->xpathCtxt);
    if (VAR_11) {

 for (VAR_9 = VAR_2;
      (VAR_9 != ((void*)0)) && (VAR_9->type != VAR_0);
      VAR_9 = FUNC_2(VAR_11, VAR_9)) {

     if ((VAR_4 != ((void*)0)) &&
  FUNC_5(VAR_1, VAR_9, VAR_4))
  break;

     if (FUNC_4(VAR_1, VAR_9, VAR_3, VAR_2)) {

  VAR_8 = 1;
  for (VAR_10 =
                        FUNC_3(VAR_11, VAR_9);
       VAR_10 != ((void*)0);
       VAR_10 =
          FUNC_3(VAR_11, VAR_10)) {

             if (FUNC_4(VAR_1, VAR_10, VAR_3,
                                               VAR_2))
   VAR_8++;
  }
  VAR_5[VAR_7++] = (double)VAR_8;
  if (VAR_7 >= VAR_6)
      break;
     }
 }
 FUNC_0(VAR_11);
    }
    return VAR_7;
}
