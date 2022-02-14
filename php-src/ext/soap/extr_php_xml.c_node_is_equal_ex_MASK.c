
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
struct TYPE_7__ {scalar_t__ name; } ;
struct TYPE_6__ {scalar_t__ href; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(xmlNodePtr VAR_2, char *VAR_3, char *VAR_4)
{
 if (VAR_3 == ((void*)0) || FUNC_1((char*)VAR_2->name, VAR_3) == 0) {
  if (VAR_4) {
   xmlNsPtr VAR_5 = FUNC_0(VAR_2);
   if (VAR_5) {
    return (FUNC_1((char*)VAR_5->href, VAR_4) == 0);
   } else {
    return VAR_0;
   }
  }
  return VAR_1;
 }
 return VAR_0;
}
