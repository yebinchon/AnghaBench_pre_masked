
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef TYPE_1__* xmlNodePtr ;
struct TYPE_10__ {struct TYPE_10__* next; } ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*,TYPE_1__*,TYPE_1__*,int,int) ;

__attribute__((used)) static xmlNodePtr
FUNC_1(xsltTransformContextPtr VAR_0, xmlNodePtr VAR_1,
   xmlNodePtr VAR_2,
   xmlNodePtr VAR_3, int VAR_4, int VAR_5)
{
    xmlNodePtr VAR_6, VAR_7 = ((void*)0);

    while (VAR_2 != ((void*)0)) {
 VAR_6 = FUNC_0(VAR_0, VAR_1,
     VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 != ((void*)0)) {
     if (VAR_7 == ((void*)0)) {
  VAR_7 = VAR_6;
     }
 }
 VAR_2 = VAR_2->next;
    }
    return(VAR_7);
}
