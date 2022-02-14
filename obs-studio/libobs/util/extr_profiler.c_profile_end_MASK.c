
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_4__ {char const* name; struct TYPE_4__* parent; void* overhead_end; void* end_time; } ;
typedef TYPE_1__ profile_call ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_3(const char *VAR_3)
{
 uint64_t VAR_4 = FUNC_2();
 if (!VAR_2)
  return;

 profile_call *VAR_5 = VAR_1;
 if (!VAR_5) {
  FUNC_0(VAR_0, "Called profile end with no active profile");
  return;
 }

 if (!VAR_5->name)
  VAR_5->name = VAR_3;

 if (VAR_5->name != VAR_3) {
  FUNC_0(VAR_0,
       "Called profile end with mismatching name: "
       "start(\"%s\"[%p]) <-> end(\"%s\"[%p])",
       VAR_5->name, VAR_5->name, VAR_3, VAR_3);

  profile_call *VAR_6 = VAR_5->parent;
  while (VAR_6 && VAR_6->parent && VAR_6->name != VAR_3)
   VAR_6 = VAR_6->parent;

  if (!VAR_6 || VAR_6->name != VAR_3)
   return;

  while (VAR_5->name != VAR_3) {
   FUNC_3(VAR_5->name);
   VAR_5 = VAR_5->parent;
  }
 }

 VAR_1 = VAR_5->parent;

 VAR_5->end_time = VAR_4;




 if (VAR_5->parent)
  return;

 FUNC_1(VAR_5);
}
