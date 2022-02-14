
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int pthread_mutex_t ;
struct TYPE_6__ {char const* name; int entry; int mutex; } ;
typedef TYPE_1__ profile_root_entry ;
typedef int profile_entry ;
struct TYPE_7__ {size_t num; TYPE_1__* array; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__) ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static profile_root_entry *FUNC_5(const char *VAR_1)
{
 profile_root_entry *VAR_2 = ((void*)0);

 for (size_t VAR_3 = 0; VAR_3 < VAR_0.num; VAR_3++) {
  if (VAR_0.array[VAR_3].name == VAR_1) {
   VAR_2 = &VAR_0.array[VAR_3];
   break;
  }
 }

 if (!VAR_2) {
  VAR_2 = FUNC_2(VAR_0);
  VAR_2->mutex = FUNC_0(sizeof(pthread_mutex_t));
  FUNC_4(VAR_2->mutex, ((void*)0));

  VAR_2->name = VAR_1;
  VAR_2->entry = FUNC_1(sizeof(profile_entry));
  FUNC_3(VAR_2->entry, VAR_1);
 }

 return VAR_2;
}
