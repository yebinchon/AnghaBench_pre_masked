
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct len_pos_t {int len; int pos; } ;
struct TYPE_17__ {TYPE_1__* layers; } ;
struct TYPE_16__ {int x; } ;
struct TYPE_15__ {void* free; } ;
struct TYPE_14__ {int ** nodes; } ;
typedef void* RListFree ;
typedef TYPE_2__ RList ;
typedef int RGraphNode ;
typedef TYPE_3__ RANode ;
typedef TYPE_4__ RAGraph ;


 void* FUNC_0 (int,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__ const*,int,int const*,int,int,int,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_4__ const*,int const*,int const*) ;
 int FUNC_4 (struct len_pos_t*) ;
 TYPE_3__* FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_10(const RAGraph *VAR_0, int VAR_1, const RGraphNode *VAR_2, const RGraphNode *VAR_3, int VAR_4, int VAR_5, int VAR_6) {
 RList *VAR_7 = FUNC_8 (), *VAR_8 = FUNC_8 ();
 const RGraphNode *VAR_9, *VAR_10;
 RANode *VAR_11, *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 VAR_7->free = (RListFree) FUNC_4;
 VAR_8->free = (RListFree) FUNC_4;

 VAR_15 = (VAR_5 + VAR_6) / 2;
 VAR_9 = VAR_0->layers[VAR_1].nodes[VAR_15 - 1];
 VAR_10 = VAR_0->layers[VAR_1].nodes[VAR_15];
 VAR_11 = FUNC_5 (VAR_9);
 VAR_12 = FUNC_5 (VAR_10);

 FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_15, VAR_7, 1);
 FUNC_2 (VAR_0, VAR_1, VAR_3, VAR_4, VAR_15, VAR_6, VAR_8, 0);
 VAR_13 = VAR_14 = 0;

 VAR_16 = FUNC_3 (VAR_0, VAR_9, VAR_10);
 if (VAR_11 && VAR_12) {
  while (VAR_12->x - VAR_11->x < VAR_16) {
   if (VAR_12->x == VAR_11->x) {
    int VAR_18 = VAR_16 / 2;
    VAR_11->x -= VAR_18;
    VAR_12->x += VAR_16 - VAR_18;
   } else {
    if (VAR_13 < VAR_14) {
     if (FUNC_6 (VAR_7)) {
      VAR_11->x = VAR_12->x - VAR_16;
     } else {
      struct len_pos_t *VAR_19 = (struct len_pos_t *) FUNC_9 (VAR_7);
      VAR_13 = VAR_13 + VAR_19->len;
      VAR_11->x = FUNC_0 (VAR_19->pos, VAR_12->x - VAR_16);
      FUNC_4 (VAR_19);
     }
    } else {
     if (FUNC_6 (VAR_8)) {
      VAR_12->x = VAR_11->x + VAR_16;
     } else {
      struct len_pos_t *VAR_20 = (struct len_pos_t *) FUNC_9 (VAR_8);
      VAR_14 = VAR_14 + VAR_20->len;
      VAR_12->x = FUNC_1 (VAR_20->pos, VAR_11->x + VAR_16);
      FUNC_4 (VAR_20);
     }
    }
   }
  }
 }

 FUNC_7 (VAR_7);
 FUNC_7 (VAR_8);

 for (VAR_17 = VAR_15 - 2; VAR_17 >= VAR_5; --VAR_17) {
  const RGraphNode *VAR_21 = VAR_0->layers[VAR_1].nodes[VAR_17];
  RANode *VAR_22 = FUNC_5 (VAR_21);
  if (VAR_22 && VAR_11) {
   VAR_22->x = FUNC_1 (VAR_22->x, VAR_11->x - FUNC_3 (VAR_0, VAR_21, VAR_9));
  }
 }

 for (VAR_17 = VAR_15 + 1; VAR_17 < VAR_6; ++VAR_17) {
  const RGraphNode *VAR_23 = VAR_0->layers[VAR_1].nodes[VAR_17];
  RANode *VAR_24 = FUNC_5 (VAR_23);
  if (VAR_24 && VAR_12) {
   VAR_24->x = FUNC_0 (VAR_24->x, VAR_12->x + FUNC_3 (VAR_0, VAR_10, VAR_23));
  }
 }
}
