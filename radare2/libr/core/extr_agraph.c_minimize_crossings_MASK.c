
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_layers; int layers; int graph; } ;
typedef TYPE_1__ RAGraph ;


 int FUNC_0 (int ,int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(const RAGraph *VAR_0) {
 int VAR_1, VAR_2, VAR_3 = 4096;

 do {
  VAR_2 = 0;
  VAR_3--;

  for (VAR_1 = 0; VAR_1 < VAR_0->n_layers; ++VAR_1) {
   int VAR_4 = FUNC_0 (VAR_0->graph, VAR_0->layers, VAR_0->n_layers, VAR_1, 1);
   if (VAR_4 == -1) {
    return;
   }
   VAR_2 |= !!VAR_4;
  }
 } while (VAR_2 && VAR_3);

 VAR_3 = 4096;

 do {
  VAR_2 = 0;
  VAR_3--;

  for (VAR_1 = VAR_0->n_layers - 1; VAR_1 >= 0; --VAR_1) {
   int VAR_5 = FUNC_0 (VAR_0->graph, VAR_0->layers, VAR_0->n_layers, VAR_1, 0);
   if (VAR_5 == -1) {
    return;
   }
   VAR_2 |= !!VAR_5;
  }
 } while (VAR_2 && VAR_3);
}
