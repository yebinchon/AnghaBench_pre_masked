
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_11__ {int type; int * content; int * nsDef; int * properties; TYPE_1__* doc; struct TYPE_11__* next; struct TYPE_11__* last; } ;
struct TYPE_10__ {int * dict; } ;
 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (int const*,int) ;
 int * FUNC_4 (int *,int const*,int) ;
 int * FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*) ;

void
FUNC_7(xmlNodePtr VAR_1, const xmlChar *VAR_2, int VAR_3) {
    if (VAR_1 == ((void*)0)) {




 return;
    }
    if (VAR_3 <= 0) return;
    switch (VAR_1->type) {
        case 143:
        case 138: {
     xmlNodePtr VAR_4, VAR_5, VAR_6;

     VAR_4 = VAR_1->last;
     VAR_5 = FUNC_3(VAR_2, VAR_3);
     if (VAR_5 != ((void*)0)) {
  VAR_6 = FUNC_0(VAR_1, VAR_5);
  if (VAR_6 != VAR_5)
      return;
         if ((VAR_4 != ((void*)0)) && (VAR_4->next == VAR_5)) {
      FUNC_6(VAR_4, VAR_5);
  }
     }
     break;
 }
        case 147:
     break;
        case 130:
        case 146:
        case 135:
        case 136:
        case 131:
        case 145:
        case 132:
     if (VAR_2 != ((void*)0)) {
         if ((VAR_1->content == (xmlChar *) &(VAR_1->properties)) ||
      ((VAR_1->doc != ((void*)0)) && (VAR_1->doc->dict != ((void*)0)) &&
       FUNC_1(VAR_1->doc->dict, VAR_1->content))) {
      VAR_1->content = FUNC_5(VAR_1->content, VAR_2, VAR_3);
      VAR_1->properties = ((void*)0);
      VAR_1->nsDef = ((void*)0);
      break;
  }
  VAR_1->content = FUNC_4(VAR_1->content, VAR_2, VAR_3);
            }
        case 142:
        case 140:
        case 134:
        case 141:
 case 133:
 case 128:
 case 129:



     break;
        case 139:
        case 148:
        case 137:
     break;
    }
}
