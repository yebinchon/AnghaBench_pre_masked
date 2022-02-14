
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* link; TYPE_1__* phar; } ;
typedef TYPE_2__ phar_entry_info ;
struct TYPE_7__ {int manifest; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 TYPE_2__* FUNC_3 (int *,char*,int ) ;

phar_entry_info *FUNC_4(phar_entry_info *VAR_0)
{
 phar_entry_info *VAR_1;
 char *VAR_2;

 if (!VAR_0->link) {
  return VAR_0;
 }

 VAR_2 = FUNC_1(VAR_0);
 if (((void*)0) != (VAR_1 = FUNC_3(&(VAR_0->phar->manifest), VAR_0->link, FUNC_2(VAR_0->link))) ||
  ((void*)0) != (VAR_1 = FUNC_3(&(VAR_0->phar->manifest), VAR_2, FUNC_2(VAR_2)))) {
  if (VAR_2 != VAR_0->link) {
   FUNC_0(VAR_2);
  }
  return FUNC_4(VAR_1);
 } else {
  if (VAR_2 != VAR_0->link) {
   FUNC_0(VAR_2);
  }
  return ((void*)0);
 }
}
