
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,char*) ;

xmlNodePtr FUNC_1(xmlNodePtr VAR_0, char *VAR_1, char *VAR_2)
{
 while (VAR_0!=((void*)0)) {
  if (FUNC_0(VAR_0, VAR_1, VAR_2)) {
   return VAR_0;
  }
  VAR_0 = VAR_0->next;
 }
 return ((void*)0);
}
