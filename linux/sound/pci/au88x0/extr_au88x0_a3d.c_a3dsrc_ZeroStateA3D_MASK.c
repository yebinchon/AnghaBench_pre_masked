
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_11__ {int slice; int source; int * vortex; } ;
typedef TYPE_3__ a3dsrc_t ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(a3dsrc_t *VAR_0, vortex_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if ((VAR_0->vortex) == ((void*)0)) {
  FUNC_3(VAR_1->card->dev,
   "ZeroStateA3D: ERROR: a->vortex is NULL\n");
  return;
 }

 FUNC_0(VAR_0, 0);
 FUNC_1(VAR_0, 0);

 VAR_3 = VAR_0->slice;
 VAR_4 = VAR_0->source;
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  VAR_0->slice = VAR_2;
  FUNC_2(VAR_0);

 }
 VAR_0->source = VAR_4;
 VAR_0->slice = VAR_3;
}
