
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct darray {size_t num; struct config_section* array; } ;
struct config_section {char* value; void* name; struct darray items; } ;
struct config_item {char* value; void* name; struct darray items; } ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ config_t ;


 scalar_t__ FUNC_0 (void*,char const*) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char const*) ;
 void* FUNC_3 (int,struct darray*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(config_t *VAR_0, struct darray *VAR_1,
       const char *VAR_2, const char *VAR_3, char *VAR_4)
{
 struct config_section *VAR_5 = ((void*)0);
 struct config_section *VAR_6 = VAR_1->array;
 struct config_item *VAR_7;
 size_t VAR_8, VAR_9;

 FUNC_4(&VAR_0->mutex);

 for (VAR_8 = 0; VAR_8 < VAR_1->num; VAR_8++) {
  struct config_section *VAR_10 = VAR_6 + VAR_8;
  struct config_item *VAR_11 = VAR_10->items.array;

  if (FUNC_0(VAR_10->name, VAR_2) == 0) {
   for (VAR_9 = 0; VAR_9 < VAR_10->items.num; VAR_9++) {
    VAR_7 = VAR_11 + VAR_9;

    if (FUNC_0(VAR_7->name, VAR_3) == 0) {
     FUNC_1(VAR_7->value);
     VAR_7->value = VAR_4;
     goto unlock;
    }
   }

   VAR_5 = VAR_10;
   break;
  }
 }

 if (!VAR_5) {
  VAR_5 = FUNC_3(sizeof(struct config_section),
        VAR_1);
  VAR_5->name = FUNC_2(VAR_2);
 }

 VAR_7 = FUNC_3(sizeof(struct config_item), &VAR_5->items);
 VAR_7->name = FUNC_2(VAR_3);
 VAR_7->value = VAR_4;

unlock:
 FUNC_5(&VAR_0->mutex);
}
