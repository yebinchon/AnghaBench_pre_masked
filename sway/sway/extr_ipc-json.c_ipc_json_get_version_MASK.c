
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int json_object ;
struct TYPE_2__ {char* current_config_path; } ;


 char* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*,char*,int*,int*,int*) ;

json_object *FUNC_5(void) {
 int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
 json_object *VAR_5 = FUNC_1();

 FUNC_4(VAR_0, "%u.%u.%u", &VAR_2, &VAR_3, &VAR_4);

 FUNC_3(VAR_5, "human_readable", FUNC_2(VAR_0));
 FUNC_3(VAR_5, "variant", FUNC_2("sway"));
 FUNC_3(VAR_5, "major", FUNC_0(VAR_2));
 FUNC_3(VAR_5, "minor", FUNC_0(VAR_3));
 FUNC_3(VAR_5, "patch", FUNC_0(VAR_4));
 FUNC_3(VAR_5, "loaded_config_file_name", FUNC_2(VAR_1->current_config_path));

 return VAR_5;
}
