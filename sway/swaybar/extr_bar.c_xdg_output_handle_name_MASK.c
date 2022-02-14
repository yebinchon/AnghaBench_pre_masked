
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zxdg_output_v1 {int dummy; } ;
struct swaybar_output {int name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0,
  struct zxdg_output_v1 *VAR_1, const char *VAR_2) {
 struct swaybar_output *VAR_3 = VAR_0;
 FUNC_0(VAR_3->name);
 VAR_3->name = FUNC_1(VAR_2);
}
