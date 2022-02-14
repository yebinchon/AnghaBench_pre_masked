
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dstr {int array; int member_0; } ;
typedef int obs_data_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dstr*,char const*) ;
 int FUNC_2 (struct dstr*,char const*) ;
 int FUNC_3 (struct dstr*) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*) ;

obs_data_t *FUNC_7(const char *VAR_1,
      const char *VAR_2)
{
 obs_data_t *VAR_3 = FUNC_4(VAR_1);
 if (!VAR_3 && VAR_2 && *VAR_2) {
  struct dstr VAR_4 = {0};

  FUNC_2(&VAR_4, VAR_1);
  if (*VAR_2 != '.')
   FUNC_1(&VAR_4, ".");
  FUNC_1(&VAR_4, VAR_2);

  if (FUNC_5(VAR_4.array)) {
   FUNC_0(VAR_0,
        "obs-data.c: "
        "[obs_data_create_from_json_file_safe] "
        "attempting backup file");



   FUNC_6(VAR_4.array, VAR_1);

   VAR_3 = FUNC_4(VAR_1);
  }

  FUNC_3(&VAR_4);
 }

 return VAR_3;
}
