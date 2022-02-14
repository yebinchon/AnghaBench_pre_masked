
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_layers; int graph; TYPE_1__* layers; } ;
struct TYPE_7__ {scalar_t__ is_dummy; } ;
struct TYPE_6__ {int n_nodes; int ** nodes; } ;
typedef int Sdb ;
typedef int RList ;
typedef int RGraphNode ;
typedef TYPE_2__ RANode ;
typedef TYPE_3__ RAGraph ;


 TYPE_2__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;

__attribute__((used)) static Sdb *FUNC_7(const RAGraph *VAR_0) {
 Sdb *VAR_1 = FUNC_6 ();
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->n_layers; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_0->layers[VAR_2].n_nodes; ++VAR_3) {
   RGraphNode *VAR_4 = VAR_0->layers[VAR_2].nodes[VAR_3];
   const RList *VAR_5 = FUNC_1 (VAR_1, VAR_4);
   const RANode *VAR_6 = FUNC_0 (VAR_4);

   if (!VAR_5) {
    RList *VAR_7 = FUNC_5 ();
    FUNC_2 (VAR_1, VAR_4, VAR_7);
    if (VAR_6->is_dummy) {
     RGraphNode *VAR_8 = VAR_4;
     const RANode *VAR_9 = FUNC_0 (VAR_8);

     while (VAR_9->is_dummy) {
      FUNC_4 (VAR_7, VAR_8);
      VAR_8 = FUNC_3 (VAR_0->graph, VAR_8, 0);
      if (!VAR_8) {
       break;
      }
      VAR_9 = FUNC_0 (VAR_8);
     }
    } else {
     FUNC_4 (VAR_7, VAR_4);
    }
   }
  }
 }

 return VAR_1;
}
