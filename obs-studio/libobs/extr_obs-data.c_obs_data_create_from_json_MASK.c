
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int obs_data_t ;
typedef int json_t ;
struct TYPE_3__ {int text; int line; } ;
typedef TYPE_1__ json_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

obs_data_t *FUNC_6(const char *VAR_2)
{
 obs_data_t *VAR_3 = FUNC_4();

 json_error_t VAR_4;
 json_t *VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4);

 if (VAR_5) {
  FUNC_3(VAR_3, VAR_5);
  FUNC_1(VAR_5);
 } else {
  FUNC_0(VAR_1,
       "obs-data.c: [obs_data_create_from_json] "
       "Failed reading json string (%d): %s",
       VAR_4.line, VAR_4.text);
  FUNC_5(VAR_3);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
