
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStyleItemSortPtr ;
typedef int xsltLocaleChar ;
typedef scalar_t__ xsltLocale ;
typedef TYPE_3__* xmlXPathObjectPtr ;
typedef TYPE_4__* xmlNodeSetPtr ;
typedef TYPE_5__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_21__ {TYPE_2__* psvi; } ;
struct TYPE_20__ {int nodeNr; TYPE_5__** nodeTab; } ;
struct TYPE_19__ {scalar_t__ floatval; scalar_t__ index; scalar_t__ stringval; } ;
struct TYPE_18__ {scalar_t__ has_stype; int number; scalar_t__ has_order; int descending; scalar_t__ locale; int * order; int * stype; } ;
struct TYPE_17__ {TYPE_4__* nodeList; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__**) ;
 scalar_t__ FUNC_1 (int *,int const*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 TYPE_3__** FUNC_5 (TYPE_1__*,TYPE_5__*) ;
 void* FUNC_6 (TYPE_1__*,TYPE_5__*,int const*,int ) ;
 int FUNC_7 (scalar_t__,int *,int *) ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_5__*,char*,int *) ;

void
FUNC_9(xsltTransformContextPtr VAR_2, xmlNodePtr *VAR_3,
            int VAR_4) {



    xsltStylePreCompPtr VAR_5;

    xmlXPathObjectPtr *VAR_6[VAR_0];
    xmlXPathObjectPtr *VAR_7 = ((void*)0), *VAR_8;
    xmlNodeSetPtr VAR_9 = ((void*)0);
    int VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14 = 0;
    int VAR_15, VAR_16, VAR_17;
    int VAR_18;
    int VAR_19;
    xmlNodePtr VAR_20;
    xmlXPathObjectPtr VAR_21;
    int VAR_22[VAR_0], VAR_23[VAR_0];

    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 <= 0) ||
 (VAR_4 >= VAR_0))
 return;
    if (VAR_3[0] == ((void*)0))
 return;
    VAR_5 = VAR_3[0]->psvi;
    if (VAR_5 == ((void*)0))
 return;

    VAR_9 = VAR_2->nodeList;
    if ((VAR_9 == ((void*)0)) || (VAR_9->nodeNr <= 1))
 return;

    for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
 VAR_5 = VAR_3[VAR_16]->psvi;
 VAR_22[VAR_16] = 0;
 if ((VAR_5->stype == ((void*)0)) && (VAR_5->has_stype != 0)) {
     VAR_5->stype =
  FUNC_6(VAR_2, VAR_3[VAR_16],
       (const xmlChar *) "data-type",
       VAR_1);
     if (VAR_5->stype != ((void*)0)) {
  VAR_22[VAR_16] = 1;
  if (FUNC_1(VAR_5->stype, (const xmlChar *) "text"))
      VAR_5->number = 0;
  else if (FUNC_1(VAR_5->stype, (const xmlChar *) "number"))
      VAR_5->number = 1;
  else {
      FUNC_8(VAR_2, ((void*)0), VAR_3[VAR_16],
     "xsltDoSortFunction: no support for data-type = %s\n",
         VAR_5->stype);
      VAR_5->number = 0;
  }
     }
 }
 VAR_23[VAR_16] = 0;
 if ((VAR_5->order == ((void*)0)) && (VAR_5->has_order != 0)) {
     VAR_5->order = FUNC_6(VAR_2, VAR_3[VAR_16],
          (const xmlChar *) "order",
          VAR_1);
     if (VAR_5->order != ((void*)0)) {
  VAR_23[VAR_16] = 1;
  if (FUNC_1(VAR_5->order, (const xmlChar *) "ascending"))
      VAR_5->descending = 0;
  else if (FUNC_1(VAR_5->order,
         (const xmlChar *) "descending"))
      VAR_5->descending = 1;
  else {
      FUNC_8(VAR_2, ((void*)0), VAR_3[VAR_16],
        "xsltDoSortFunction: invalid value %s for order\n",
         VAR_5->order);
      VAR_5->descending = 0;
  }
     }
 }
    }

    VAR_14 = VAR_9->nodeNr;

    VAR_6[0] = FUNC_5(VAR_2, VAR_3[0]);
    for (VAR_15 = 1;VAR_15 < VAR_0;VAR_15++)
 VAR_6[VAR_15] = ((void*)0);

    VAR_7 = VAR_6[0];

    VAR_5 = VAR_3[0]->psvi;
    VAR_10 = VAR_5->descending;
    VAR_11 = VAR_5->number;
    if (VAR_7 == ((void*)0))
 return;


    for (VAR_17 = VAR_14 / 2; VAR_17 > 0; VAR_17 /= 2) {
 for (VAR_15 = VAR_17; VAR_15 < VAR_14; VAR_15++) {
     VAR_16 = VAR_15 - VAR_17;
     if (VAR_7[VAR_15] == ((void*)0))
  continue;

     while (VAR_16 >= 0) {
  if (VAR_7[VAR_16] == ((void*)0))
      VAR_18 = 1;
  else {
      if (VAR_11) {


   if (FUNC_4(VAR_7[VAR_16]->floatval)) {
       if (FUNC_4(VAR_7[VAR_16 + VAR_17]->floatval))
    VAR_18 = 0;
       else
    VAR_18 = -1;
   } else if (FUNC_4(VAR_7[VAR_16 + VAR_17]->floatval))
       VAR_18 = 1;
   else if (VAR_7[VAR_16]->floatval ==
    VAR_7[VAR_16 + VAR_17]->floatval)
       VAR_18 = 0;
   else if (VAR_7[VAR_16]->floatval >
    VAR_7[VAR_16 + VAR_17]->floatval)
       VAR_18 = 1;
   else VAR_18 = -1;
      } else if(VAR_5->locale != (xsltLocale)0) {
   VAR_18 = FUNC_7(
       VAR_5->locale,
       (xsltLocaleChar *) VAR_7[VAR_16]->stringval,
       (xsltLocaleChar *) VAR_7[VAR_16 + VAR_17]->stringval);
      } else {
   VAR_18 = FUNC_2(VAR_7[VAR_16]->stringval,
         VAR_7[VAR_16 + VAR_17]->stringval);
      }
      if (VAR_10)
   VAR_18 = -VAR_18;
  }
  if (VAR_18 == 0) {



      VAR_19 = 1;
      while (VAR_19 < VAR_4) {
   if (VAR_3[VAR_19] == ((void*)0))
       break;
   VAR_5 = VAR_3[VAR_19]->psvi;
   if (VAR_5 == ((void*)0))
       break;
   VAR_12 = VAR_5->descending;
   VAR_13 = VAR_5->number;





   if (VAR_6[VAR_19] == ((void*)0))
       VAR_6[VAR_19] = FUNC_5(VAR_2,
                            VAR_3[VAR_19]);
   VAR_8 = VAR_6[VAR_19];
   if (VAR_8 == ((void*)0))
       break;
   if (VAR_8[VAR_16] == ((void*)0)) {
       if (VAR_8[VAR_16+VAR_17] != ((void*)0))
    VAR_18 = 1;
   } else if (VAR_8[VAR_16+VAR_17] == ((void*)0)) {
       VAR_18 = -1;
   } else {
       if (VAR_13) {


    if (FUNC_4(VAR_8[VAR_16]->floatval)) {
        if (FUNC_4(VAR_8[VAR_16 +
      VAR_17]->floatval))
     VAR_18 = 0;
        else
            VAR_18 = -1;
    } else if (FUNC_4(VAR_8[VAR_16 + VAR_17]->
      floatval))
        VAR_18 = 1;
    else if (VAR_8[VAR_16]->floatval == VAR_8[VAR_16 + VAR_17]->
      floatval)
        VAR_18 = 0;
    else if (VAR_8[VAR_16]->floatval >
     VAR_8[VAR_16 + VAR_17]->floatval)
        VAR_18 = 1;
    else VAR_18 = -1;
       } else if(VAR_5->locale != (xsltLocale)0) {
    VAR_18 = FUNC_7(
        VAR_5->locale,
        (xsltLocaleChar *) VAR_8[VAR_16]->stringval,
        (xsltLocaleChar *) VAR_8[VAR_16 + VAR_17]->stringval);
       } else {
    VAR_18 = FUNC_2(VAR_8[VAR_16]->stringval,
          VAR_8[VAR_16 + VAR_17]->stringval);
       }
       if (VAR_12)
    VAR_18 = -VAR_18;
   }





   if (VAR_18 != 0)
       break;
   VAR_19++;
      }
  }
  if (VAR_18 == 0) {
      VAR_18 = VAR_7[VAR_16]->index > VAR_7[VAR_16 + VAR_17]->index;
  }
  if (VAR_18 > 0) {
      VAR_21 = VAR_7[VAR_16];
      VAR_7[VAR_16] = VAR_7[VAR_16 + VAR_17];
      VAR_7[VAR_16 + VAR_17] = VAR_21;
      VAR_20 = VAR_9->nodeTab[VAR_16];
      VAR_9->nodeTab[VAR_16] = VAR_9->nodeTab[VAR_16 + VAR_17];
      VAR_9->nodeTab[VAR_16 + VAR_17] = VAR_20;
      VAR_19 = 1;
      while (VAR_19 < VAR_4) {
   if (VAR_3[VAR_19] == ((void*)0))
       break;
   if (VAR_6[VAR_19] == ((void*)0))
       break;
   VAR_8 = VAR_6[VAR_19];
   VAR_21 = VAR_8[VAR_16];
   VAR_8[VAR_16] = VAR_8[VAR_16 + VAR_17];
   VAR_8[VAR_16 + VAR_17] = VAR_21;
   VAR_19++;
      }
      VAR_16 -= VAR_17;
  } else
      break;
     }
 }
    }

    for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
 VAR_5 = VAR_3[VAR_16]->psvi;
 if (VAR_22[VAR_16] == 1) {

     FUNC_0((void *)(VAR_5->stype));
     VAR_5->stype = ((void*)0);
 }
 if (VAR_23[VAR_16] == 1) {

     FUNC_0((void *)(VAR_5->order));
     VAR_5->order = ((void*)0);
 }
 if (VAR_6[VAR_16] != ((void*)0)) {
     for (VAR_15 = 0;VAR_15 < VAR_14;VAR_15++)
  FUNC_3(VAR_6[VAR_16][VAR_15]);
     FUNC_0(VAR_6[VAR_16]);
 }
    }
}
