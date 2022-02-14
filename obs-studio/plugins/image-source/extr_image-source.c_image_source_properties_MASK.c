
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image_source {scalar_t__* file; } ;
struct dstr {char const* array; int member_0; } ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int FUNC_0 (struct dstr*,scalar_t__*) ;
 int FUNC_1 (struct dstr*) ;
 int FUNC_2 (struct dstr*,char*,char*) ;
 int FUNC_3 (struct dstr*,int) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,int ,int ,int ,char const*) ;
 int * FUNC_7 () ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static obs_properties_t *FUNC_9(void *VAR_2)
{
 struct image_source *VAR_3 = VAR_2;
 struct dstr VAR_4 = {0};

 obs_properties_t *VAR_5 = FUNC_7();

 if (VAR_3 && VAR_3->file && *VAR_3->file) {
  const char *VAR_6;

  FUNC_0(&VAR_4, VAR_3->file);
  FUNC_2(&VAR_4, "\\", "/");
  VAR_6 = FUNC_8(VAR_4.array, '/');
  if (VAR_6)
   FUNC_3(&VAR_4, VAR_6 - VAR_4.array + 1);
 }

 FUNC_6(VAR_5, "file", FUNC_4("File"),
    VAR_0, VAR_1, VAR_4.array);
 FUNC_5(VAR_5, "unload",
    FUNC_4("UnloadWhenNotShowing"));
 FUNC_1(&VAR_4);

 return VAR_5;
}
