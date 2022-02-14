
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_workspace {int * representation; int tiling; int layout; } ;


 int * FUNC_0 (size_t,int) ;
 size_t FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

void FUNC_4(struct sway_workspace *VAR_0) {
 size_t VAR_1 = FUNC_1(VAR_0->layout, VAR_0->tiling, ((void*)0));
 FUNC_2(VAR_0->representation);
 VAR_0->representation = FUNC_0(VAR_1 + 1, sizeof(char));
 if (!FUNC_3(VAR_0->representation, "Unable to allocate title string")) {
  return;
 }
 FUNC_1(VAR_0->layout, VAR_0->tiling, VAR_0->representation);
}
