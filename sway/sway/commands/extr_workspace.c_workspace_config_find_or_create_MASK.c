
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* left; void* bottom; void* right; void* top; } ;
struct workspace_config {TYPE_1__ gaps_outer; void* gaps_inner; int outputs; int workspace; } ;
struct TYPE_4__ {int workspace_configs; } ;


 void* VAR_0 ;
 struct workspace_config* FUNC_0 (int,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct workspace_config*) ;
 int FUNC_3 (char*) ;
 struct workspace_config* FUNC_4 (char*) ;

__attribute__((used)) static struct workspace_config *FUNC_5(char *VAR_2) {
 struct workspace_config *VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  return VAR_3;
 }
 VAR_3 = FUNC_0(1, sizeof(struct workspace_config));
 if (!VAR_3) {
  return ((void*)0);
 }
 VAR_3->workspace = FUNC_3(VAR_2);
 VAR_3->outputs = FUNC_1();
 VAR_3->gaps_inner = VAR_0;
 VAR_3->gaps_outer.top = VAR_0;
 VAR_3->gaps_outer.right = VAR_0;
 VAR_3->gaps_outer.bottom = VAR_0;
 VAR_3->gaps_outer.left = VAR_0;
 FUNC_2(VAR_1->workspace_configs, VAR_3);
 return VAR_3;
}
