
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int json_t ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static json_t *FUNC_4(void)
{
 char *VAR_0;
 json_t *VAR_1 = ((void*)0);

 VAR_0 = FUNC_1("services.json");
 if (VAR_0) {
  VAR_1 = FUNC_3(VAR_0);
  FUNC_0(VAR_0);
 }

 if (!VAR_1) {
  VAR_0 = FUNC_2("services.json");
  if (VAR_0) {
   VAR_1 = FUNC_3(VAR_0);
   FUNC_0(VAR_0);
  }
 }

 return VAR_1;
}
