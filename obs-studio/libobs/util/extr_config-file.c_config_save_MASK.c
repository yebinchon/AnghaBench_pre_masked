
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {char* array; int len; } ;
struct TYPE_5__ {size_t num; } ;
struct config_section {char* name; TYPE_2__ items; } ;
struct config_item {char* value; char* name; } ;
struct TYPE_4__ {int mutex; TYPE_2__ sections; int file; } ;
typedef TYPE_1__ config_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,TYPE_2__*,size_t) ;
 int FUNC_1 (struct dstr*,char*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*) ;
 int FUNC_4 (struct dstr*) ;
 int FUNC_5 (struct dstr*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int,int *) ;
 int * FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(config_t *VAR_3)
{
 FILE *VAR_4;
 struct dstr VAR_5, VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9 = VAR_0;

 if (!VAR_3)
  return VAR_0;
 if (!VAR_3->file)
  return VAR_0;

 FUNC_4(&VAR_5);
 FUNC_4(&VAR_6);

 FUNC_9(&VAR_3->mutex);

 VAR_4 = FUNC_8(VAR_3->file, "wb");
 if (!VAR_4) {
  FUNC_10(&VAR_3->mutex);
  return VAR_1;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->sections.num; VAR_7++) {
  struct config_section *VAR_10 = FUNC_0(
   sizeof(struct config_section), &VAR_3->sections, VAR_7);

  if (VAR_7)
   FUNC_1(&VAR_5, "\n");

  FUNC_1(&VAR_5, "[");
  FUNC_1(&VAR_5, VAR_10->name);
  FUNC_1(&VAR_5, "]\n");

  for (VAR_8 = 0; VAR_8 < VAR_10->items.num; VAR_8++) {
   struct config_item *VAR_11 = FUNC_0(
    sizeof(struct config_item), &VAR_10->items, VAR_8);

   FUNC_2(&VAR_6, VAR_11->value ? VAR_11->value : "");
   FUNC_5(&VAR_6, "\\", "\\\\");
   FUNC_5(&VAR_6, "\r", "\\r");
   FUNC_5(&VAR_6, "\n", "\\n");

   FUNC_1(&VAR_5, VAR_11->name);
   FUNC_1(&VAR_5, "=");
   FUNC_1(&VAR_5, VAR_6.array);
   FUNC_1(&VAR_5, "\n");
  }
 }





 if (FUNC_7(VAR_5.array, VAR_5.len, 1, VAR_4) != 1)
  goto cleanup;

 VAR_9 = VAR_2;

cleanup:
 FUNC_6(VAR_4);

 FUNC_10(&VAR_3->mutex);

 FUNC_3(&VAR_6);
 FUNC_3(&VAR_5);

 return VAR_9;
}
