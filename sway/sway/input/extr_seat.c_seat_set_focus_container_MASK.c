
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_seat {int dummy; } ;
struct sway_container {int node; } ;


 int FUNC_0 (struct sway_seat*,int *) ;

void FUNC_1(struct sway_seat *VAR_0,
  struct sway_container *VAR_1) {
 FUNC_0(VAR_0, VAR_1 ? &VAR_1->node : ((void*)0));
}
