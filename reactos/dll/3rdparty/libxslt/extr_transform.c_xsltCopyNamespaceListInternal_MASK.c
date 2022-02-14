
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* xmlNsPtr ;
typedef TYPE_3__* xmlNodePtr ;
struct TYPE_13__ {scalar_t__ type; int doc; TYPE_1__* ns; } ;
struct TYPE_12__ {scalar_t__ type; struct TYPE_12__* next; int prefix; int href; } ;
struct TYPE_11__ {int href; int prefix; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ,int ) ;
 TYPE_2__* FUNC_1 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static xmlNsPtr
FUNC_3(xmlNodePtr VAR_2, xmlNsPtr VAR_3) {
    xmlNsPtr VAR_4 = ((void*)0);
    xmlNsPtr VAR_5 = ((void*)0), VAR_6, VAR_7;

    if (VAR_3 == ((void*)0))
 return(((void*)0));



    if ((VAR_2 != ((void*)0)) && (VAR_2->type != VAR_0))
 VAR_2 = ((void*)0);

    do {
 if (VAR_3->type != VAR_1)
     break;



 if (VAR_2 != ((void*)0)) {
     if ((VAR_2->ns != ((void*)0)) &&
  FUNC_2(VAR_2->ns->prefix, VAR_3->prefix) &&
  FUNC_2(VAR_2->ns->href, VAR_3->href))
     {
  VAR_3 = VAR_3->next;
  continue;
     }
     VAR_7 = FUNC_1(VAR_2->doc, VAR_2, VAR_3->prefix);
     if ((VAR_7 != ((void*)0)) && (FUNC_2(VAR_7->href, VAR_3->href)))
     {
  VAR_3 = VAR_3->next;
  continue;
     }
 }
 VAR_6 = FUNC_0(VAR_2, VAR_3->href, VAR_3->prefix);
 if (VAR_5 == ((void*)0)) {
     VAR_4 = VAR_5 = VAR_6;
 } else if (VAR_6 != ((void*)0)) {
     VAR_5->next = VAR_6;
     VAR_5 = VAR_6;
 }
 VAR_3 = VAR_3->next;
    } while (VAR_3 != ((void*)0));
    return(VAR_4);
}
