
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_trigger_data {int dummy; } ;
struct hist_field {int dummy; } ;


 int VAR_0 ;
 struct hist_field* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct hist_field* FUNC_1 (struct hist_trigger_data*,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static struct hist_field *
FUNC_6(struct hist_trigger_data *VAR_3,
    char *VAR_4, char *VAR_5, char *VAR_6)
{
 struct hist_field *VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_3(VAR_2, VAR_1);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 FUNC_5(VAR_8, "synthetic_");
 FUNC_4(VAR_8, VAR_6);

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8);

 FUNC_2(VAR_8);

 return VAR_7;
}
