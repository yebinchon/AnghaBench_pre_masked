
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef int xmlChar ;
struct TYPE_4__ {struct TYPE_4__* next; int const* prefix; } ;


 scalar_t__ FUNC_0 (int const*,int const*) ;

__attribute__((used)) static xmlNsPtr
FUNC_1(xmlNsPtr VAR_0, const xmlChar *VAR_1)
{
    if (VAR_0 == ((void*)0))
 return (((void*)0));
    {
 xmlNsPtr VAR_2;
 VAR_2 = VAR_0;
 do {
     if ((VAR_1 == VAR_2->prefix) ||
  FUNC_0(VAR_1, VAR_2->prefix)) {
  return (VAR_2);
     }
     VAR_2 = VAR_2->next;
 } while (VAR_2 != ((void*)0));
    }
    return (((void*)0));
}
