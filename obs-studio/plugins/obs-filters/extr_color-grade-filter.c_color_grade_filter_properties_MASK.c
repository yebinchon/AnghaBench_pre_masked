
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lut_filter_data {char* file; } ;
struct dstr {char const* array; int member_0; } ;
typedef int obs_properties_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct dstr*,char*) ;
 int FUNC_3 (struct dstr*,char) ;
 int FUNC_4 (struct dstr*,char*) ;
 int FUNC_5 (struct dstr*) ;
 int FUNC_6 (struct dstr*,char*,char*) ;
 int FUNC_7 (struct dstr*,int) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,int ,int ,int,double) ;
 int FUNC_10 (int *,int ,int ,int ,char const*,char const*) ;
 int * FUNC_11 () ;
 char* FUNC_12 (char const*,char) ;

__attribute__((used)) static obs_properties_t *FUNC_13(void *VAR_5)
{
 struct lut_filter_data *VAR_6 = VAR_5;
 struct dstr VAR_7 = {0};
 const char *VAR_8;

 obs_properties_t *VAR_9 = FUNC_11();
 struct dstr VAR_10 = {0};

 FUNC_2(&VAR_10, "(*.png)");

 if (VAR_6 && VAR_6->file && *VAR_6->file) {
  FUNC_4(&VAR_7, VAR_6->file);
 } else {
  char *VAR_11 = FUNC_8("LUTs");
  FUNC_4(&VAR_7, VAR_11);
  FUNC_3(&VAR_7, '/');
  FUNC_1(VAR_11);
 }

 FUNC_6(&VAR_7, "\\", "/");
 VAR_8 = FUNC_12(VAR_7.array, '/');
 if (VAR_8)
  FUNC_7(&VAR_7, VAR_8 - VAR_7.array + 1);

 FUNC_10(VAR_9, VAR_2, VAR_4,
    VAR_0, VAR_10.array, VAR_7.array);
 FUNC_9(VAR_9, VAR_1, VAR_3,
     0, 1, 0.01);

 FUNC_5(&VAR_10);
 FUNC_5(&VAR_7);

 FUNC_0(VAR_5);
 return VAR_9;
}
