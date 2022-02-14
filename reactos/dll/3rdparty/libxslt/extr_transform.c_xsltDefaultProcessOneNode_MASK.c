
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xsltTemplatePtr ;
typedef int xsltStackElemPtr ;
typedef TYPE_5__* xmlNodePtr ;
struct TYPE_28__ {int type; struct TYPE_28__* next; int name; int * content; struct TYPE_28__* children; TYPE_1__* prev; } ;
struct TYPE_27__ {int content; } ;
struct TYPE_26__ {TYPE_2__* xpathCtxt; int insert; } ;
struct TYPE_25__ {int contextSize; int proximityPosition; } ;
struct TYPE_24__ {TYPE_5__* next; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_5__*,int ,TYPE_4__*,int ) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ,TYPE_5__*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_2 ;
 TYPE_4__* FUNC_6 (TYPE_3__*,TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_3__*,int *,TYPE_5__*,char*) ;

__attribute__((used)) static void
FUNC_9(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4,
     xsltStackElemPtr VAR_5) {
    xmlNodePtr VAR_6;
    xmlNodePtr VAR_7 = ((void*)0), VAR_8;
    int VAR_9 = 0, VAR_10;
    int VAR_11 = 0, VAR_12;
    xsltTemplatePtr VAR_13;

    VAR_0;



    switch (VAR_4->type) {
 case 133:
 case 130:
 case 131:
     break;
 case 135:





     VAR_6 = FUNC_4(VAR_3, VAR_3->insert, VAR_4, 0);
     if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_3, ((void*)0), VAR_4,
   "xsltDefaultProcessOneNode: cdata copy failed\n");
     }
     return;
 case 128:
     VAR_6 = FUNC_4(VAR_3, VAR_3->insert, VAR_4, 0);
     if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_3, ((void*)0), VAR_4,
   "xsltDefaultProcessOneNode: text copy failed\n");
     }
     return;
 case 136:
     VAR_8 = VAR_4->children;
     while ((VAR_8 != ((void*)0)) && (VAR_8->type != 128))
  VAR_8 = VAR_8->next;
     if (VAR_8 == ((void*)0)) {
  FUNC_8(VAR_3, ((void*)0), VAR_4,
   "xsltDefaultProcessOneNode: no text for attribute\n");
     } else {
  VAR_6 = FUNC_4(VAR_3, VAR_3->insert, VAR_8, 0);
  if (VAR_6 == ((void*)0)) {
      FUNC_8(VAR_3, ((void*)0), VAR_4,
       "xsltDefaultProcessOneNode: text copy failed\n");
  }
     }
     return;
 default:
     return;
    }



    VAR_8 = VAR_4->children;
    while (VAR_8 != ((void*)0)) {
 switch (VAR_8->type) {
     case 128:
     case 135:
     case 133:
     case 130:
     case 131:
     case 129:
     case 134:
  VAR_9++;
  break;
            case 132:

  if (VAR_8->next != ((void*)0))
      VAR_8->next->prev = VAR_8->prev;
  if (VAR_8->prev != ((void*)0))
      VAR_8->prev->next = VAR_8->next;
  break;
     default:





  VAR_7 = VAR_8;
 }
 VAR_8 = VAR_8->next;
 if (VAR_7 != ((void*)0)) {




     FUNC_2(VAR_7);
     FUNC_1(VAR_7);
     VAR_7 = ((void*)0);
 }
    }
    if (VAR_7 != ((void*)0)) {




 FUNC_2(VAR_7);
 FUNC_1(VAR_7);
 VAR_7 = ((void*)0);
    }







    VAR_10 = VAR_3->xpathCtxt->contextSize;
    VAR_12 = VAR_3->xpathCtxt->proximityPosition;
    VAR_8 = VAR_4->children;
    while (VAR_8 != ((void*)0)) {
 VAR_11++;
 switch (VAR_8->type) {
     case 133:
     case 130:
     case 131:
  VAR_3->xpathCtxt->contextSize = VAR_9;
  VAR_3->xpathCtxt->proximityPosition = VAR_11;
  FUNC_7(VAR_3, VAR_8, VAR_5);
  break;
     case 135:
  VAR_13 = FUNC_6(VAR_3, VAR_8, ((void*)0));
  if (VAR_13) {
      FUNC_3(VAR_3, VAR_8, VAR_13->content,
   VAR_13, VAR_5);
  } else {





      VAR_6 = FUNC_4(VAR_3, VAR_3->insert, VAR_8, 0);
      if (VAR_6 == ((void*)0)) {
   FUNC_8(VAR_3, ((void*)0), VAR_8,
       "xsltDefaultProcessOneNode: cdata copy failed\n");
      }
  }
  break;
     case 128:
  VAR_13 = FUNC_6(VAR_3, VAR_8, ((void*)0));
  if (VAR_13) {





      VAR_3->xpathCtxt->contextSize = VAR_9;
      VAR_3->xpathCtxt->proximityPosition = VAR_11;



      FUNC_3(VAR_3, VAR_8, VAR_13->content,
   VAR_13, VAR_5);
  } else {
      VAR_6 = FUNC_4(VAR_3, VAR_3->insert, VAR_8, 0);
      if (VAR_6 == ((void*)0)) {
   FUNC_8(VAR_3, ((void*)0), VAR_8,
       "xsltDefaultProcessOneNode: text copy failed\n");
      }
  }
  break;
     case 129:
     case 134:
  VAR_13 = FUNC_6(VAR_3, VAR_8, ((void*)0));
  if (VAR_13) {
      VAR_3->xpathCtxt->contextSize = VAR_9;
      VAR_3->xpathCtxt->proximityPosition = VAR_11;



      FUNC_3(VAR_3, VAR_8, VAR_13->content,
   VAR_13, VAR_5);
  }
  break;
     default:
  break;
 }
 VAR_8 = VAR_8->next;
    }
    VAR_3->xpathCtxt->contextSize = VAR_10;
    VAR_3->xpathCtxt->proximityPosition = VAR_12;
}
