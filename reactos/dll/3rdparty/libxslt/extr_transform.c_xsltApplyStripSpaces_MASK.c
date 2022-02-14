
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef TYPE_1__* xmlNodePtr ;
struct TYPE_8__ {scalar_t__ type; struct TYPE_8__* next; struct TYPE_8__* parent; struct TYPE_8__* children; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*,int) ;
 int VAR_2 ;

void
FUNC_7(xsltTransformContextPtr VAR_3, xmlNodePtr VAR_4) {
    xmlNodePtr VAR_5;





    VAR_5 = VAR_4;
    while (VAR_5 != ((void*)0)) {



 if ((FUNC_1(VAR_5)) &&
     (VAR_5->children != ((void*)0)) &&
     (FUNC_5(VAR_3, VAR_5))) {
     xmlNodePtr VAR_6 = ((void*)0), VAR_7 = VAR_5->children;

     while (VAR_7 != ((void*)0)) {
  if (FUNC_0(VAR_7))
      VAR_6 = VAR_7;

  VAR_7 = VAR_7->next;
  if (VAR_6 != ((void*)0)) {
      FUNC_4(VAR_6);
      FUNC_3(VAR_6);
      VAR_6 = ((void*)0);



  }
     }
 }




 if (VAR_4->type == VAR_0) {

     FUNC_7(VAR_3, VAR_4->children);
 }
 if ((VAR_5->children != ((void*)0)) &&
            (VAR_5->type != VAR_0)) {
     VAR_5 = VAR_5->children;
 } else if (VAR_5->next != ((void*)0)) {
     VAR_5 = VAR_5->next;
 } else {
     do {
  VAR_5 = VAR_5->parent;
  if (VAR_5 == ((void*)0))
      break;
  if (VAR_5 == VAR_4)
      goto done;
  if (VAR_5->next != ((void*)0)) {
      VAR_5 = VAR_5->next;
      break;
  }
     } while (VAR_5 != ((void*)0));
 }
    }

done:




    return;
}
