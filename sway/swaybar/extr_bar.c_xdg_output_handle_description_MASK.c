
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zxdg_output_v1 {int dummy; } ;
struct swaybar_output {char* identifier; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_1,
  struct zxdg_output_v1 *VAR_2, const char *VAR_3) {


 struct swaybar_output *VAR_4 = VAR_1;
 FUNC_0(VAR_4->identifier);
 VAR_4->identifier = ((void*)0);
 char *VAR_5 = FUNC_3(VAR_3, '(');
 if (VAR_5) {
  size_t VAR_6 = VAR_5 - VAR_3;
  VAR_4->identifier = FUNC_1(VAR_6);
  if (!VAR_4->identifier) {
   FUNC_4(VAR_0, "Failed to allocate output identifier");
   return;
  }
  FUNC_2(VAR_4->identifier, VAR_3, VAR_6);
  VAR_4->identifier[VAR_6 - 1] = '\0';
 }
}
