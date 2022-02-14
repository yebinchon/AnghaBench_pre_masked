
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int text; int line; } ;
typedef TYPE_1__ json_error_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int ,TYPE_1__*) ;
 int * FUNC_6 (int *,char*) ;
 char* FUNC_7 (char const*) ;

__attribute__((used)) static json_t *FUNC_8(const char *VAR_4)
{
 char *VAR_5 = FUNC_7(VAR_4);
 json_error_t VAR_6;
 json_t *VAR_7;
 json_t *VAR_8;
 int VAR_9;

 if (!VAR_5)
  return ((void*)0);

 VAR_7 = FUNC_5(VAR_5, VAR_0, &VAR_6);
 FUNC_0(VAR_5);

 if (!VAR_7) {
  FUNC_1(VAR_2,
       "rtmp-common.c: [open_json_file] "
       "Error reading JSON file (%d): %s",
       VAR_6.line, VAR_6.text);
  return ((void*)0);
 }

 VAR_9 = FUNC_2(VAR_7, "format_version");

 if (VAR_9 != VAR_3) {
  FUNC_1(VAR_1,
       "rtmp-common.c: [open_json_file] "
       "Wrong format version (%d), expected %d",
       VAR_9, VAR_3);
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 VAR_8 = FUNC_6(VAR_7, "services");
 if (VAR_8)
  FUNC_4(VAR_8);
 FUNC_3(VAR_7);

 if (!VAR_8) {
  FUNC_1(VAR_2, "rtmp-common.c: [open_json_file] "
      "No services list");
  return ((void*)0);
 }

 return VAR_8;
}
