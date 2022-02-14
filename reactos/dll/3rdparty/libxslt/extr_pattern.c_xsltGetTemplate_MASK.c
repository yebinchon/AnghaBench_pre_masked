
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef int * xsltTemplatePtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef TYPE_4__* xsltCompMatchPtr ;
typedef TYPE_5__* xmlNodePtr ;
typedef TYPE_6__* xmlDocPtr ;
typedef char xmlChar ;
typedef TYPE_7__* xmlAttrPtr ;
struct TYPE_24__ {int * psvi; } ;
struct TYPE_23__ {int * psvi; } ;
struct TYPE_22__ {int type; char* name; int * psvi; } ;
struct TYPE_21__ {float priority; struct TYPE_21__* next; int * template; } ;
struct TYPE_20__ {TYPE_4__* keyMatch; TYPE_4__* elemMatch; TYPE_4__* commentMatch; TYPE_4__* textMatch; TYPE_4__* rootMatch; TYPE_4__* piMatch; TYPE_4__* attrMatch; int * templatesHash; } ;
struct TYPE_19__ {scalar_t__ nbKeys; TYPE_1__* document; scalar_t__ hasTemplKeyPatterns; int modeURI; int mode; TYPE_3__* style; } ;
struct TYPE_18__ {scalar_t__ nbKeysComputed; } ;
 float VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*,TYPE_5__*,int ,int ) ;

xsltTemplatePtr
FUNC_4(xsltTransformContextPtr VAR_1, xmlNodePtr VAR_2,
         xsltStylesheetPtr VAR_3)
{
    xsltStylesheetPtr VAR_4;
    xsltTemplatePtr VAR_5 = ((void*)0);
    const xmlChar *VAR_6 = ((void*)0);
    xsltCompMatchPtr VAR_7 = ((void*)0);
    float VAR_8;
    int VAR_9 = 0;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return(((void*)0));

    if (VAR_3 == ((void*)0)) {
 VAR_4 = VAR_1->style;
    } else {
 VAR_4 = FUNC_2(VAR_3);
    }

    while ((VAR_4 != ((void*)0)) && (VAR_4 != VAR_3)) {
 VAR_8 = VAR_0;

 if (VAR_4->templatesHash != ((void*)0)) {



     switch (VAR_2->type) {
  case 138:
      if (VAR_2->name[0] == ' ')
   break;
  case 146:
  case 131:
      VAR_6 = VAR_2->name;
      break;
  case 142:
  case 134:
  case 130:
  case 145:
  case 144:
  case 135:
  case 136:
  case 141:
  case 143:
  case 132:
  case 140:
  case 139:
  case 147:
  case 137:
  case 133:
  case 128:
  case 129:
      break;
  default:
      return(((void*)0));

     }
 }
 if (VAR_6 != ((void*)0)) {



     VAR_7 = (xsltCompMatchPtr) FUNC_0(VAR_4->templatesHash,
          VAR_6, VAR_1->mode, VAR_1->modeURI);
 } else
     VAR_7 = ((void*)0);
 while (VAR_7 != ((void*)0)) {
     if (FUNC_3(VAR_1, VAR_7, VAR_2,
             VAR_1->mode, VAR_1->modeURI)) {
  VAR_5 = VAR_7->template;
  VAR_8 = VAR_7->priority;
  break;
     }
     VAR_7 = VAR_7->next;
 }
 VAR_7 = ((void*)0);




 switch (VAR_2->type) {
     case 138:
  if (VAR_2->name[0] == ' ')
      VAR_7 = VAR_4->rootMatch;
  else
      VAR_7 = VAR_4->elemMatch;
  if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
  break;
     case 146: {
         xmlAttrPtr VAR_10;

  VAR_7 = VAR_4->attrMatch;
  VAR_10 = (xmlAttrPtr) VAR_2;
  if (VAR_10->psvi != ((void*)0)) VAR_9 = 1;
  break;
     }
     case 131:
  VAR_7 = VAR_4->piMatch;
  if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
  break;
     case 142:
     case 134: {
         xmlDocPtr VAR_11;

  VAR_7 = VAR_4->rootMatch;
  VAR_11 = (xmlDocPtr) VAR_2;
  if (VAR_11->psvi != ((void*)0)) VAR_9 = 1;
  break;
     }
     case 130:
     case 145:
  VAR_7 = VAR_4->textMatch;
  if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
  break;
     case 144:
  VAR_7 = VAR_4->commentMatch;
  if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
  break;
     case 135:
     case 136:
     case 141:
     case 143:
     case 132:
     case 140:
     case 139:
     case 147:
     case 137:
     case 133:
     case 128:
     case 129:
  break;
     default:
  break;
 }
 while ((VAR_7 != ((void*)0)) &&
        ((VAR_5 == ((void*)0)) || (VAR_7->priority > VAR_8))) {
     if (FUNC_3(VAR_1, VAR_7, VAR_2,
             VAR_1->mode, VAR_1->modeURI)) {
  VAR_5 = VAR_7->template;
  VAR_8 = VAR_7->priority;
  break;
     }
     VAR_7 = VAR_7->next;
 }



 if ((VAR_2->type == 142) ||
     (VAR_2->type == 134) ||
     (VAR_2->type == 130)) {
     VAR_7 = VAR_4->elemMatch;
     while ((VAR_7 != ((void*)0)) &&
     ((VAR_5 == ((void*)0)) || (VAR_7->priority > VAR_8))) {
  if (FUNC_3(VAR_1, VAR_7, VAR_2,
          VAR_1->mode, VAR_1->modeURI)) {
      VAR_5 = VAR_7->template;
      VAR_8 = VAR_7->priority;
      break;
  }
  VAR_7 = VAR_7->next;
     }
 } else if ((VAR_2->type == 131) ||
     (VAR_2->type == 144)) {
     VAR_7 = VAR_4->elemMatch;
     while ((VAR_7 != ((void*)0)) &&
     ((VAR_5 == ((void*)0)) || (VAR_7->priority > VAR_8))) {
  if (FUNC_3(VAR_1, VAR_7, VAR_2,
          VAR_1->mode, VAR_1->modeURI)) {
      VAR_5 = VAR_7->template;
      VAR_8 = VAR_7->priority;
      break;
  }
  VAR_7 = VAR_7->next;
     }
 }

keyed_match:
 if (VAR_9) {
     VAR_7 = VAR_4->keyMatch;
     while ((VAR_7 != ((void*)0)) &&
     ((VAR_5 == ((void*)0)) || (VAR_7->priority > VAR_8))) {
  if (FUNC_3(VAR_1, VAR_7, VAR_2,
          VAR_1->mode, VAR_1->modeURI)) {
      VAR_5 = VAR_7->template;
      VAR_8 = VAR_7->priority;
      break;
  }
  VAR_7 = VAR_7->next;
     }
 }
 else if (VAR_1->hasTemplKeyPatterns &&
     ((VAR_1->document == ((void*)0)) ||
      (VAR_1->document->nbKeysComputed < VAR_1->nbKeys)))
 {





     if (FUNC_1(VAR_1, VAR_2) == -1)
  goto error;

     switch (VAR_2->type) {
  case 138:
      if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
      break;
  case 146:
      if (((xmlAttrPtr) VAR_2)->psvi != ((void*)0)) VAR_9 = 1;
      break;
  case 130:
  case 145:
  case 144:
  case 131:
      if (VAR_2->psvi != ((void*)0)) VAR_9 = 1;
      break;
  case 142:
  case 134:
      if (((xmlDocPtr) VAR_2)->psvi != ((void*)0)) VAR_9 = 1;
      break;
  default:
      break;
     }
     if (VAR_9)
  goto keyed_match;
 }
 if (VAR_5 != ((void*)0))
     return(VAR_5);




 VAR_4 = FUNC_2(VAR_4);
    }

error:
    return(((void*)0));
}
