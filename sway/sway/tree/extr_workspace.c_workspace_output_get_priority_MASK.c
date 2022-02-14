
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace {int output_priority; } ;
struct sway_output {TYPE_1__* wlr_output; } ;
typedef int identifier ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,int,struct sway_output*) ;

__attribute__((used)) static int FUNC_2(struct sway_workspace *VAR_1,
  struct sway_output *VAR_2) {
 char VAR_3[128];
 FUNC_1(VAR_3, sizeof(VAR_3), VAR_2);
 int VAR_4 = FUNC_0(VAR_1->output_priority, VAR_0, VAR_3);
 int VAR_5 = FUNC_0(VAR_1->output_priority, VAR_0,
   VAR_2->wlr_output->name);
 return VAR_5 < 0 || VAR_4 < VAR_5 ? VAR_4 : VAR_5;
}
