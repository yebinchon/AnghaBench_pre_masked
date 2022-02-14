
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* card; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_14__ {int * vortex; } ;
typedef TYPE_3__ a3dsrc_t ;
struct TYPE_12__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(a3dsrc_t *VAR_4, int VAR_5, vortex_t *VAR_6)
{
 if (VAR_4->vortex == ((void*)0)) {
  FUNC_6(VAR_6->card->dev,
    "Vort3D_InitializeSource: A3D source not initialized\n");
  return;
 }
 if (VAR_5) {
  FUNC_2(VAR_4);
  FUNC_3(VAR_4, 0x11);
  FUNC_4(VAR_4, VAR_2,
         VAR_3, VAR_1,
         VAR_0);



  FUNC_1(VAR_4);
 } else {
  FUNC_0(VAR_4);
  FUNC_5(VAR_4);
 }
}
