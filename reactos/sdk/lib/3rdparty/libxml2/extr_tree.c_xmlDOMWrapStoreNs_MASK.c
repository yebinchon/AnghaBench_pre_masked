
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef int * xmlDocPtr ;
typedef int xmlChar ;
struct TYPE_5__ {struct TYPE_5__* next; int const* href; int const* prefix; } ;


 TYPE_1__* FUNC_0 (int *,int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*) ;
 TYPE_1__* FUNC_2 (int *) ;

__attribute__((used)) static xmlNsPtr
FUNC_3(xmlDocPtr VAR_0,
     const xmlChar *VAR_1,
     const xmlChar *VAR_2)
{
    xmlNsPtr VAR_3;

    if (VAR_0 == ((void*)0))
 return (((void*)0));
    VAR_3 = FUNC_2(VAR_0);
    if (VAR_3 == ((void*)0))
 return (((void*)0));
    if (VAR_3->next != ((void*)0)) {

 VAR_3 = VAR_3->next;
 while (VAR_3 != ((void*)0)) {
     if (((VAR_3->prefix == VAR_2) ||
  FUNC_1(VAR_3->prefix, VAR_2)) &&
  FUNC_1(VAR_3->href, VAR_1)) {
  return (VAR_3);
     }
     if (VAR_3->next == ((void*)0))
  break;
     VAR_3 = VAR_3->next;
 }
    }

    if (VAR_3 != ((void*)0)) {
        VAR_3->next = FUNC_0(((void*)0), VAR_1, VAR_2);
        return (VAR_3->next);
    }
    return(((void*)0));
}
