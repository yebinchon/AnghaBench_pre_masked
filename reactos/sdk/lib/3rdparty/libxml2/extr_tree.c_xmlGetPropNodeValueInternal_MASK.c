
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xmlChar ;
typedef TYPE_1__* xmlAttributePtr ;
struct TYPE_6__ {scalar_t__ type; TYPE_3__* children; int doc; } ;
typedef TYPE_2__ xmlAttr ;
struct TYPE_7__ {scalar_t__ type; int * content; int * next; } ;
struct TYPE_5__ {int * defaultValue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,TYPE_3__*,int) ;
 int * FUNC_1 (int *) ;

__attribute__((used)) static xmlChar*
FUNC_2(const xmlAttr *VAR_4)
{
    if (VAR_4 == ((void*)0))
 return(((void*)0));
    if (VAR_4->type == VAR_1) {




 if (VAR_4->children != ((void*)0)) {
     if ((VAR_4->children->next == ((void*)0)) &&
  ((VAR_4->children->type == VAR_3) ||
  (VAR_4->children->type == VAR_2)))
     {



  return(FUNC_1(VAR_4->children->content));
     } else {
  xmlChar *VAR_5;

  VAR_5 = FUNC_0(VAR_4->doc, VAR_4->children, 1);
  if (VAR_5 != ((void*)0))
      return(VAR_5);
     }
 }
 return(FUNC_1((xmlChar *)""));
    } else if (VAR_4->type == VAR_0) {
 return(FUNC_1(((xmlAttributePtr)VAR_4)->defaultValue));
    }
    return(((void*)0));
}
