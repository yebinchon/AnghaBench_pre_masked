
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const** array; int array_index; int array_size; int sdb; int (* cb ) (int ,char const*,char const*) ;scalar_t__ val; scalar_t__ key; } ;
typedef TYPE_1__ LikeCallbackData ;


 scalar_t__ FUNC_0 (char const**,int) ;
 int FUNC_1 (char const*,scalar_t__) ;
 int FUNC_2 (int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1, const char *VAR_2) {
 LikeCallbackData *VAR_3 = VAR_0;
 if (!VAR_0) {
  return 0;
 }
 if (VAR_1 && VAR_3->key && !FUNC_1 (VAR_1, VAR_3->key)) {
  return 1;
 }
 if (VAR_2 && VAR_3->val && !FUNC_1 (VAR_2, VAR_3->val)) {
  return 1;
 }
 if (VAR_3->array) {
  int VAR_4 = VAR_3->array_index;
  int VAR_5 = VAR_3->array_size + sizeof (char*) * 2;
  const char **VAR_6 = (const char **)FUNC_0 (VAR_3->array, VAR_5);
  if (!VAR_6) {
   return 0;
  }
  VAR_3->array = VAR_6;
  VAR_3->array_size = VAR_5;

  VAR_3->array[VAR_4] = VAR_1;
  VAR_3->array[VAR_4 + 1] = VAR_2;
  VAR_3->array[VAR_4 + 2] = ((void*)0);
  VAR_3->array[VAR_4 + 3] = ((void*)0);
  VAR_3->array_index = VAR_4+2;
 } else {
  if (VAR_3->cb) {
   VAR_3->cb (VAR_3->sdb, VAR_1, VAR_2);
  }
 }
 return 1;
}
