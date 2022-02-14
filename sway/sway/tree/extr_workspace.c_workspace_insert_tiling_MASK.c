
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {scalar_t__ layout; int node; int tiling; } ;
struct sway_container {int node; struct sway_workspace* workspace; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sway_container*) ;
 int FUNC_1 (struct sway_container*,int ,int *) ;
 int FUNC_2 (struct sway_container*) ;
 struct sway_container* FUNC_3 (struct sway_container*,scalar_t__) ;
 int FUNC_4 (int ,int,struct sway_container*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct sway_workspace*) ;

void FUNC_7(struct sway_workspace *VAR_3,
  struct sway_container *VAR_4, int VAR_5) {
 if (VAR_4->workspace) {
  FUNC_0(VAR_4);
 }
 if (VAR_3->layout == VAR_0 || VAR_3->layout == VAR_1) {
  VAR_4 = FUNC_3(VAR_4, VAR_3->layout);
 }
 FUNC_4(VAR_3->tiling, VAR_5, VAR_4);
 VAR_4->workspace = VAR_3;
 FUNC_1(VAR_4, VAR_2, ((void*)0));
 FUNC_2(VAR_4);
 FUNC_6(VAR_3);
 FUNC_5(&VAR_3->node);
 FUNC_5(&VAR_4->node);
}
