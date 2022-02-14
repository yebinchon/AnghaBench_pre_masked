
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int output_priority; } ;
struct sway_output {int dummy; } ;
typedef int identifier ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int,struct sway_output*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct sway_workspace*,struct sway_output*) ;

void FUNC_4(struct sway_workspace *VAR_0,
  struct sway_output *VAR_1) {
 if (FUNC_3(VAR_0, VAR_1) < 0) {
  char VAR_2[128];
  FUNC_1(VAR_2, sizeof(VAR_2), VAR_1);
  FUNC_0(VAR_0->output_priority, FUNC_2(VAR_2));
 }
}
