
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef int xmlXPathCompExprPtr ;
typedef int * xmlNsPtr ;
typedef TYPE_1__* xmlNodePtr ;
typedef scalar_t__ xmlChar ;
struct TYPE_5__ {int doc; } ;


 int FUNC_0 (scalar_t__*) ;
 int ** FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__* FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__*,scalar_t__ const*,int) ;
 scalar_t__* FUNC_4 (scalar_t__ const*,int) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ) ;
 scalar_t__* FUNC_7 (int ,int ,int,int **) ;
 int FUNC_8 (int ,int *,TYPE_1__*,char*) ;

xmlChar *
FUNC_9(xsltTransformContextPtr VAR_0,
   const xmlChar *VAR_1, xmlNodePtr VAR_2)
{
    xmlChar *VAR_3 = ((void*)0);
    const xmlChar *VAR_4;
    xmlChar *VAR_5, *VAR_6;
    xmlNsPtr *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (VAR_1 == ((void*)0)) return(((void*)0));
    if (*VAR_1 == 0)
 return(FUNC_4((xmlChar *)"", 0));

    VAR_4 = VAR_1;
    while (*VAR_4 != 0) {
 if (*VAR_4 == '{') {
     if (*(VAR_4+1) == '{') {
         VAR_4++;
  VAR_3 = FUNC_3(VAR_3, VAR_1, VAR_4 - VAR_1);
  VAR_4++;
  VAR_1 = VAR_4;
  continue;
     }
     VAR_3 = FUNC_3(VAR_3, VAR_1, VAR_4 - VAR_1);
     VAR_1 = VAR_4;
     VAR_4++;
     while ((*VAR_4 != 0) && (*VAR_4 != '}')) {

  if ((*VAR_4 == '\'') || (*VAR_4 == '"')) {
      char VAR_9 = *(VAR_4++);
      while ((*VAR_4 != 0) && (*VAR_4 != VAR_9))
   VAR_4++;
      if (*VAR_4 != 0)
   VAR_4++;
  } else
      VAR_4++;
            }
     if (*VAR_4 == 0) {
         FUNC_8(VAR_0, ((void*)0), VAR_2,
   "xsltAttrTemplateValueProcessNode: unmatched '{'\n");
  VAR_3 = FUNC_3(VAR_3, VAR_1, VAR_4 - VAR_1);
  goto exit;
     }
     VAR_1++;
     VAR_5 = FUNC_4(VAR_1, VAR_4 - VAR_1);
     if (VAR_5 == ((void*)0))
  goto exit;
     else if (*VAR_5 == '{') {
  VAR_3 = FUNC_2(VAR_3, VAR_5);
  FUNC_0(VAR_5);
     } else {
  xmlXPathCompExprPtr VAR_10;



  if ((VAR_7 == ((void*)0)) && (VAR_2 != ((void*)0))) {
      int VAR_11 = 0;

      VAR_7 = FUNC_1(VAR_2->doc, VAR_2);
      if (VAR_7 != ((void*)0)) {
   while (VAR_7[VAR_11] != ((void*)0))
       VAR_11++;
   VAR_8 = VAR_11;
      }
  }
  VAR_10 = FUNC_5(VAR_5);
                VAR_6 = FUNC_7(VAR_0, VAR_10, VAR_8, VAR_7);
  FUNC_6(VAR_10);
  FUNC_0(VAR_5);
  if (VAR_6 != ((void*)0)) {
      VAR_3 = FUNC_2(VAR_3, VAR_6);
      FUNC_0(VAR_6);
  }
     }
     VAR_4++;
     VAR_1 = VAR_4;
 } else if (*VAR_4 == '}') {
     VAR_4++;
     if (*VAR_4 == '}') {
  VAR_3 = FUNC_3(VAR_3, VAR_1, VAR_4 - VAR_1);
  VAR_4++;
  VAR_1 = VAR_4;
  continue;
     } else {
         FUNC_8(VAR_0, ((void*)0), VAR_2,
       "xsltAttrTemplateValueProcessNode: unmatched '}'\n");
     }
 } else
     VAR_4++;
    }
    if (VAR_4 != VAR_1) {
 VAR_3 = FUNC_3(VAR_3, VAR_1, VAR_4 - VAR_1);
    }

exit:
    if (VAR_7 != ((void*)0))
 FUNC_0(VAR_7);

    return(VAR_3);
}
