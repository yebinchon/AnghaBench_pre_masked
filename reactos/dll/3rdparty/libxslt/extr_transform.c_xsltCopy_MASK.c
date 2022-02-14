
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef int xsltStyleItemCopyPtr ;
typedef int xsltElemPreCompPtr ;
typedef int xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
typedef int xmlAttrPtr ;
struct TYPE_32__ {int type; int children; int content; int name; int doc; } ;
struct TYPE_31__ {int * use; } ;
struct TYPE_30__ {TYPE_3__* insert; int node; } ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int ,int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_3__* FUNC_9 (TYPE_1__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*,TYPE_3__*,int ) ;

void
FUNC_11(xsltTransformContextPtr VAR_2, xmlNodePtr VAR_3,
  xmlNodePtr VAR_4, xsltElemPreCompPtr VAR_5)
{



    xsltStylePreCompPtr VAR_6 = (xsltStylePreCompPtr) VAR_5;

    xmlNodePtr VAR_7, VAR_8;

    VAR_8 = VAR_2->insert;
    if (VAR_2->insert != ((void*)0)) {
 switch (VAR_3->type) {
     case 128:
     case 135:
  FUNC_6(VAR_2, VAR_2->insert, VAR_3, 0);
  break;
     case 133:
     case 131:
  break;
     case 132:
  VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_2->insert, 0);
  VAR_2->insert = VAR_7;
  if (VAR_6->use != ((void*)0)) {
      FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6->use);
  }
  break;
     case 136: {
  FUNC_8(VAR_2, VAR_4, VAR_2->insert, (xmlAttrPtr) VAR_3);
  break;
     }
     case 129:




  VAR_7 = FUNC_2(VAR_2->insert->doc, VAR_3->name,
                     VAR_3->content);
  VAR_7 = FUNC_3(VAR_2->insert, VAR_7);
  break;
     case 134:




  VAR_7 = FUNC_1(VAR_3->content);
  VAR_7 = FUNC_3(VAR_2->insert, VAR_7);
  break;
     case 130:




  FUNC_10(VAR_2, VAR_4, VAR_2->insert, (xmlNsPtr)VAR_3);
  break;
     default:
  break;

 }
    }

    switch (VAR_3->type) {
 case 133:
 case 131:
 case 132:
     FUNC_5(VAR_2, VAR_2->node, VAR_4->children,
  ((void*)0));
     break;
 default:
     break;
    }
    VAR_2->insert = VAR_8;
}
