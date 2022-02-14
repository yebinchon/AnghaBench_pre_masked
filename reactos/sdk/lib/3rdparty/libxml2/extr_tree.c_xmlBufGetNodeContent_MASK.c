
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_9__ {int type; struct TYPE_9__* next; struct TYPE_9__* children; int name; int doc; int * content; struct TYPE_9__* parent; } ;
typedef TYPE_2__ xmlNode ;
typedef TYPE_4__* xmlEntityPtr ;
typedef int * xmlBufPtr ;
typedef TYPE_5__* xmlAttrPtr ;
struct TYPE_11__ {TYPE_2__* children; } ;
struct TYPE_10__ {TYPE_2__* children; } ;
struct TYPE_8__ {int * href; } ;
 int FUNC_0 (int *,int *) ;
 TYPE_4__* FUNC_1 (int ,int ) ;

int
FUNC_2(xmlBufPtr VAR_0, const xmlNode *VAR_1)
{
    if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0))) return(-1);
    switch (VAR_1->type) {
        case 146:
        case 130:
     FUNC_0(VAR_0, VAR_1->content);
            break;
        case 143:
        case 138:{
                const xmlNode *VAR_2 = VAR_1;

                while (VAR_2 != ((void*)0)) {
                    switch (VAR_2->type) {
                        case 146:
                        case 130:
                            if (VAR_2->content != ((void*)0))
                                FUNC_0(VAR_0, VAR_2->content);
                            break;
                        case 135:
                            FUNC_2(VAR_0, VAR_2);
                            break;
                        default:
                            break;
                    }



                    if (VAR_2->children != ((void*)0)) {
                        if (VAR_2->children->type != 137) {
                            VAR_2 = VAR_2->children;
                            continue;
                        }
                    }
                    if (VAR_2 == VAR_1)
                        break;

                    if (VAR_2->next != ((void*)0)) {
                        VAR_2 = VAR_2->next;
                        continue;
                    }

                    do {
                        VAR_2 = VAR_2->parent;
                        if (VAR_2 == ((void*)0))
                            break;
                        if (VAR_2 == VAR_1) {
                            VAR_2 = ((void*)0);
                            break;
                        }
                        if (VAR_2->next != ((void*)0)) {
                            VAR_2 = VAR_2->next;
                            break;
                        }
                    } while (VAR_2 != ((void*)0));
                }
  break;
            }
        case 147:{
                xmlAttrPtr VAR_3 = (xmlAttrPtr) VAR_1;
  xmlNodePtr VAR_4 = VAR_3->children;

  while (VAR_4 != ((void*)0)) {
      if (VAR_4->type == 130)
          FUNC_0(VAR_0, VAR_4->content);
      else
          FUNC_2(VAR_0, VAR_4);
      VAR_4 = VAR_4->next;
  }
                break;
            }
        case 145:
        case 131:
     FUNC_0(VAR_0, VAR_1->content);
            break;
        case 135:{
                xmlEntityPtr VAR_5;
                xmlNodePtr VAR_6;


                VAR_5 = FUNC_1(VAR_1->doc, VAR_1->name);
                if (VAR_5 == ((void*)0))
                    return(-1);






                VAR_6 = VAR_5->children;
                while (VAR_6) {
      FUNC_2(VAR_0, VAR_6);
                    VAR_6 = VAR_6->next;
                }
  break;
            }
        case 136:
        case 141:
        case 132:
        case 140:
        case 128:
        case 129:
            break;
        case 142:



        case 134:
     VAR_1 = VAR_1->children;
     while (VAR_1!= ((void*)0)) {
  if ((VAR_1->type == 138) ||
      (VAR_1->type == 130) ||
      (VAR_1->type == 146)) {
      FUNC_2(VAR_0, VAR_1);
  }
  VAR_1 = VAR_1->next;
     }
     break;
        case 133:
     FUNC_0(VAR_0, ((xmlNsPtr) VAR_1)->href);
     break;
        case 139:
        case 148:
        case 137:
            break;
    }
    return(0);
}
