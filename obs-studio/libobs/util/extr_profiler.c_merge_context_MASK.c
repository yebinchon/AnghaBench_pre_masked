
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pthread_mutex_t ;
struct TYPE_8__ {TYPE_2__* prev_call; int * entry; int * mutex; } ;
typedef TYPE_1__ profile_root_entry ;
typedef int profile_entry ;
struct TYPE_9__ {int name; } ;
typedef TYPE_2__ profile_call ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(profile_call *VAR_1)
{
 pthread_mutex_t *VAR_2 = ((void*)0);
 profile_entry *VAR_3 = ((void*)0);
 profile_call *VAR_4 = ((void*)0);

 if (!FUNC_2()) {
  FUNC_0(VAR_1);
  return;
 }

 profile_root_entry *VAR_5 = FUNC_1(VAR_1->name);

 VAR_2 = VAR_5->mutex;
 VAR_3 = VAR_5->entry;
 VAR_4 = VAR_5->prev_call;

 VAR_5->prev_call = VAR_1;

 FUNC_4(VAR_2);
 FUNC_5(&VAR_0);

 FUNC_3(VAR_3, VAR_1, VAR_4);

 FUNC_5(VAR_2);

 FUNC_0(VAR_4);
}
