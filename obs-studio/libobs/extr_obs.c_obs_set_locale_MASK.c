
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_module {struct obs_module* next; int (* set_locale ) (char const*) ;} ;
struct TYPE_2__ {struct obs_module* first_module; scalar_t__ locale; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char const*) ;

void FUNC_3(const char *VAR_1)
{
 struct obs_module *VAR_2;
 if (!VAR_0)
  return;

 if (VAR_0->locale)
  FUNC_0(VAR_0->locale);
 VAR_0->locale = FUNC_1(VAR_1);

 VAR_2 = VAR_0->first_module;
 while (VAR_2) {
  if (VAR_2->set_locale)
   VAR_2->set_locale(VAR_1);

  VAR_2 = VAR_2->next;
 }
}
