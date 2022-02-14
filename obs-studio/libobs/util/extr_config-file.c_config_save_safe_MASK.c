
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dstr {char* array; int member_0; } ;
struct TYPE_4__ {char* file; int mutex; } ;
typedef TYPE_1__ config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*,char*) ;
 int FUNC_4 (struct dstr*) ;
 scalar_t__ FUNC_5 (char*,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(config_t *VAR_3, const char *VAR_4,
       const char *VAR_5)
{
 struct dstr VAR_6 = {0};
 struct dstr VAR_7 = {0};
 char *VAR_8 = VAR_3->file;
 int VAR_9;

 if (!VAR_4 || !*VAR_4) {
  FUNC_0(VAR_2, "config_save_safe: invalid "
    "temporary extension specified");
  return VAR_0;
 }

 FUNC_6(&VAR_3->mutex);

 FUNC_3(&VAR_6, VAR_3->file);
 if (*VAR_4 != '.')
  FUNC_2(&VAR_6, ".");
 FUNC_2(&VAR_6, VAR_4);

 VAR_3->file = VAR_6.array;
 VAR_9 = FUNC_1(VAR_3);
 VAR_3->file = VAR_8;

 if (VAR_9 != VAR_1) {
  FUNC_0(VAR_2,
       "config_save_safe: failed to "
       "write to %s",
       VAR_6.array);
  goto cleanup;
 }

 if (VAR_5 && *VAR_5) {
  FUNC_3(&VAR_7, VAR_3->file);
  if (*VAR_5 != '.')
   FUNC_2(&VAR_7, ".");
  FUNC_2(&VAR_7, VAR_5);
 }

 if (FUNC_5(VAR_8, VAR_6.array, VAR_7.array) != 0)
  VAR_9 = VAR_0;

cleanup:
 FUNC_7(&VAR_3->mutex);
 FUNC_4(&VAR_6);
 FUNC_4(&VAR_7);
 return VAR_9;
}
