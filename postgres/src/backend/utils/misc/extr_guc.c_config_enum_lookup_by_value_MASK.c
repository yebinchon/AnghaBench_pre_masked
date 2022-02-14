
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_enum_entry {char const* name; int val; } ;
struct TYPE_2__ {int name; } ;
struct config_enum {TYPE_1__ gen; struct config_enum_entry* options; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ) ;

const char *
FUNC_1(struct config_enum *VAR_1, int VAR_2)
{
 const struct config_enum_entry *VAR_3;

 for (VAR_3 = VAR_1->options; VAR_3 && VAR_3->name; VAR_3++)
 {
  if (VAR_3->val == VAR_2)
   return VAR_3->name;
 }

 FUNC_0(VAR_0, "could not find enum option %d for %s",
   VAR_2, VAR_1->gen.name);
 return ((void*)0);
}
