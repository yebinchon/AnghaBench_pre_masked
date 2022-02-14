
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct output_config {struct output_config* background_option; struct output_config* background; struct output_config* name; } ;


 int FUNC_0 (struct output_config*) ;

void FUNC_1(struct output_config *VAR_0) {
 if (!VAR_0) {
  return;
 }
 FUNC_0(VAR_0->name);
 FUNC_0(VAR_0->background);
 FUNC_0(VAR_0->background_option);
 FUNC_0(VAR_0);
}
