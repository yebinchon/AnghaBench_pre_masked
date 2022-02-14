
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sway_workspace_state {int dummy; } ;
struct TYPE_2__ {int output; int tiling; int floating; } ;
struct sway_workspace {TYPE_1__ current; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,struct sway_workspace_state*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct sway_workspace *VAR_0,
  struct sway_workspace_state *VAR_1) {
 FUNC_2(VAR_0->current.output);
 FUNC_0(VAR_0->current.floating);
 FUNC_0(VAR_0->current.tiling);
 FUNC_1(&VAR_0->current, VAR_1, sizeof(struct sway_workspace_state));
 FUNC_2(VAR_0->current.output);
}
