
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* array; } ;
struct TYPE_8__ {char const* name; int start_time; TYPE_5__ children; struct TYPE_8__* parent; int overhead_start; } ;
typedef TYPE_1__ profile_call ;


 TYPE_1__* FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_5__,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_4(const char *VAR_2)
{
 if (!VAR_1)
  return;

 profile_call VAR_3 = {
  .name = VAR_2,



  .parent = VAR_0,
 };

 profile_call *VAR_4 = ((void*)0);

 if (VAR_3.parent) {
  size_t VAR_5 = FUNC_1(VAR_3.parent->children, &VAR_3);
  VAR_4 = &VAR_3.parent->children.array[VAR_5];
 } else {
  VAR_4 = FUNC_0(sizeof(profile_call));
  FUNC_2(VAR_4, &VAR_3, sizeof(profile_call));
 }

 VAR_0 = VAR_4;
 VAR_4->start_time = FUNC_3();
}
