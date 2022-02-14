
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_8__ ;
typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_28__ ;
typedef struct TYPE_29__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
struct TYPE_32__ {size_t nbstates; TYPE_28__* states; int * member_2; int member_1; int member_0; } ;
typedef TYPE_3__ xsltStepStates ;
typedef TYPE_4__* xsltStepOpPtr ;
typedef TYPE_5__* xsltCompMatchPtr ;
typedef TYPE_6__* xmlNodeSetPtr ;
typedef TYPE_7__* xmlNodePtr ;
typedef int xmlChar ;
typedef TYPE_8__* xmlAttrPtr ;
struct TYPE_37__ {TYPE_7__* parent; } ;
struct TYPE_36__ {int type; char* name; TYPE_1__* ns; int doc; struct TYPE_36__* parent; } ;
struct TYPE_35__ {int nodeNr; TYPE_7__** nodeTab; } ;
struct TYPE_34__ {int nbStep; int nsNr; int nsList; int direct; TYPE_4__* steps; TYPE_7__* node; int const* modeURI; int const* mode; } ;
struct TYPE_33__ {int op; char* value; char* value2; int value3; } ;
struct TYPE_31__ {TYPE_7__* inst; } ;
struct TYPE_30__ {int step; TYPE_7__* node; } ;
struct TYPE_29__ {char* href; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,char*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_28__*) ;
 TYPE_8__* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 TYPE_6__* FUNC_4 (TYPE_2__*,char*,int ,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int,TYPE_7__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*,TYPE_7__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*,TYPE_7__*,TYPE_4__*,TYPE_4__*) ;
 int FUNC_8 (TYPE_2__*,int *,TYPE_7__*,char*) ;

__attribute__((used)) static int
FUNC_9(xsltTransformContextPtr VAR_6, xsltCompMatchPtr VAR_7,
           xmlNodePtr VAR_8, const xmlChar *VAR_9,
    const xmlChar *VAR_10) {
    int VAR_11;
    int VAR_12 = 0;
    xmlNodePtr VAR_13 = VAR_8;
    xmlNodePtr VAR_14;
    xsltStepOpPtr VAR_15, VAR_16 = ((void*)0);
    xsltStepStates VAR_17 = {0, 0, ((void*)0)};

    if ((VAR_7 == ((void*)0)) || (VAR_13 == ((void*)0)) || (VAR_6 == ((void*)0))) {
 FUNC_8(VAR_6, ((void*)0), VAR_13,
  "xsltTestCompMatch: null arg\n");
        return(-1);
    }
    if (VAR_9 != ((void*)0)) {
 if (VAR_7->mode == ((void*)0))
     return(0);



 if (VAR_7->mode != VAR_9)
     return(0);
    } else {
 if (VAR_7->mode != ((void*)0))
     return(0);
    }
    if (VAR_10 != ((void*)0)) {
 if (VAR_7->modeURI == ((void*)0))
     return(0);



 if (VAR_7->modeURI != VAR_10)
     return(0);
    } else {
 if (VAR_7->modeURI != ((void*)0))
     return(0);
    }


    VAR_14 = VAR_6->inst;
    VAR_6->inst = VAR_7->node;

    VAR_11 = 0;
restart:
    for (;VAR_11 < VAR_7->nbStep;VAR_11++) {
 VAR_15 = &VAR_7->steps[VAR_11];
 if (VAR_15->op != 130)
     VAR_16 = VAR_15;
 switch (VAR_15->op) {
            case 137:
  goto found;
            case 129:
  if ((VAR_13->type == VAR_2) ||



      (VAR_13->type == VAR_3))
      continue;
  if ((VAR_13->type == 145) && (VAR_13->name[0] == ' '))
      continue;
  goto rollback;
            case 138:
  if (VAR_13->type != 145)
      goto rollback;
  if (VAR_15->value == ((void*)0))
      continue;
  if (VAR_15->value[0] != VAR_13->name[0])
      goto rollback;
  if (!FUNC_3(VAR_15->value, VAR_13->name))
      goto rollback;


  if (VAR_13->ns == ((void*)0)) {
      if (VAR_15->value2 != ((void*)0))
   goto rollback;
  } else if (VAR_13->ns->href != ((void*)0)) {
      if (VAR_15->value2 == ((void*)0))
   goto rollback;
      if (!FUNC_3(VAR_15->value2, VAR_13->ns->href))
   goto rollback;
  }
  continue;
            case 140:
  if (VAR_13->type != VAR_0)
      goto rollback;
  if (VAR_15->value != ((void*)0)) {
      if (VAR_15->value[0] != VAR_13->name[0])
   goto rollback;
      if (!FUNC_3(VAR_15->value, VAR_13->name))
   goto rollback;
  }

  if (VAR_13->ns == ((void*)0)) {
      if (VAR_15->value2 != ((void*)0))
   goto rollback;
  } else if (VAR_15->value2 != ((void*)0)) {
      if (!FUNC_3(VAR_15->value2, VAR_13->ns->href))
   goto rollback;
  }
  continue;
            case 132:
  if ((VAR_13->type == VAR_2) ||
      (VAR_13->type == VAR_3) ||



      (VAR_13->type == VAR_4))
      goto rollback;
  VAR_13 = VAR_13->parent;
  if (VAR_13 == ((void*)0))
      goto rollback;
  if (VAR_15->value == ((void*)0))
      continue;
  if (VAR_15->value[0] != VAR_13->name[0])
      goto rollback;
  if (!FUNC_3(VAR_15->value, VAR_13->name))
      goto rollback;

  if (VAR_13->ns == ((void*)0)) {
      if (VAR_15->value2 != ((void*)0))
   goto rollback;
  } else if (VAR_13->ns->href != ((void*)0)) {
      if (VAR_15->value2 == ((void*)0))
   goto rollback;
      if (!FUNC_3(VAR_15->value2, VAR_13->ns->href))
   goto rollback;
  }
  continue;
            case 141:

  if (VAR_15->value == ((void*)0)) {
      VAR_15 = &VAR_7->steps[VAR_11+1];
      if (VAR_15->op == 129)
   goto found;

      if ((VAR_15->op != 138) &&
   (VAR_15->op != 142) &&
   (VAR_15->op != 133) &&
   (VAR_15->op != 136) &&
   (VAR_15->op != 135))
   goto rollback;
  }
  if (VAR_13 == ((void*)0))
      goto rollback;
  if ((VAR_13->type == VAR_2) ||
      (VAR_13->type == VAR_3) ||



      (VAR_13->type == VAR_4))
      goto rollback;
  VAR_13 = VAR_13->parent;
  if ((VAR_15->op != 138) && VAR_15->op != 142) {
      FUNC_5(VAR_6, &VAR_17, VAR_11, VAR_13);
      continue;
  }
  VAR_11++;
  if (VAR_15->value == ((void*)0)) {
      FUNC_5(VAR_6, &VAR_17, VAR_11 - 1, VAR_13);
      continue;
  }
  while (VAR_13 != ((void*)0)) {
      if ((VAR_13->type == 145) &&
   (VAR_15->value[0] == VAR_13->name[0]) &&
   (FUNC_3(VAR_15->value, VAR_13->name))) {

   if (VAR_13->ns == ((void*)0)) {
       if (VAR_15->value2 == ((void*)0))
    break;
   } else if (VAR_13->ns->href != ((void*)0)) {
       if ((VAR_15->value2 != ((void*)0)) &&
           (FUNC_3(VAR_15->value2, VAR_13->ns->href)))
    break;
   }
      }
      VAR_13 = VAR_13->parent;
  }
  if (VAR_13 == ((void*)0))
      goto rollback;
  FUNC_5(VAR_6, &VAR_17, VAR_11 - 1, VAR_13);
  continue;
            case 136: {

  xmlAttrPtr VAR_18;

  if (VAR_13->type != 145)
      goto rollback;

  VAR_18 = FUNC_2(VAR_13->doc, VAR_15->value);
  if ((VAR_18 == ((void*)0)) || (VAR_18->parent != VAR_13))
      goto rollback;
  break;
     }
            case 135: {
  xmlNodeSetPtr VAR_19;
  int VAR_20;

  VAR_19 = FUNC_4(VAR_6, VAR_15->value,
             VAR_15->value3, VAR_15->value2);
  if (VAR_19 == ((void*)0))
      goto rollback;
  for (VAR_20 = 0;VAR_20 < VAR_19->nodeNr;VAR_20++)
      if (VAR_19->nodeTab[VAR_20] == VAR_13)
   break;
  if (VAR_20 >= VAR_19->nodeNr)
      goto rollback;
  break;
     }
            case 133:
  if (VAR_13->type != 145)
      goto rollback;
  if (VAR_13->ns == ((void*)0)) {
      if (VAR_15->value != ((void*)0))
   goto rollback;
  } else if (VAR_13->ns->href != ((void*)0)) {
      if (VAR_15->value == ((void*)0))
   goto rollback;
      if (!FUNC_3(VAR_15->value, VAR_13->ns->href))
   goto rollback;
  }
  break;
            case 142:
  if (VAR_13->type != 145)
      goto rollback;
  break;
     case 130: {







  if (VAR_7->direct) {
      VAR_12 = FUNC_6(VAR_6, VAR_7, VAR_8,
          VAR_7->nsList, VAR_7->nsNr);
                    goto exit;
  }

  if (!FUNC_7(VAR_6, VAR_7, VAR_13, VAR_15, VAR_16))
      goto rollback;

  break;
     }
            case 131:
  if (VAR_13->type != 144)
      goto rollback;
  if (VAR_15->value != ((void*)0)) {
      if (!FUNC_3(VAR_15->value, VAR_13->name))
   goto rollback;
  }
  break;
            case 139:
  if (VAR_13->type != 146)
      goto rollback;
  break;
            case 128:
  if ((VAR_13->type != 143) &&
      (VAR_13->type != 147))
      goto rollback;
  break;
            case 134:
  switch (VAR_13->type) {
      case 145:
      case 147:
      case 144:
      case 146:
      case 143:
   break;
      default:
   goto rollback;
  }
  break;
 }
    }
found:
    VAR_12 = 1;
exit:
    VAR_6->inst = VAR_14;
    if (VAR_17.states != ((void*)0)) {

 FUNC_1(VAR_17.states);
    }
    return VAR_12;
rollback:

    if (VAR_17.states == ((void*)0) || VAR_17.nbstates <= 0) {
        VAR_12 = 0;
 goto exit;
    }
    VAR_17.nbstates--;
    VAR_11 = VAR_17.states[VAR_17.nbstates].step;
    VAR_13 = VAR_17.states[VAR_17.nbstates].node;



    goto restart;
}
