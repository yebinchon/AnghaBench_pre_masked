
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int parm0; int parm1; } ;
typedef TYPE_2__ wt_voice_t ;
struct TYPE_11__ {int mmio; TYPE_1__* card; TYPE_2__* wt_voice; } ;
typedef TYPE_3__ vortex_t ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_3__*,int,int) ;
 int FUNC_8 (TYPE_3__*,int,int) ;
 int FUNC_9 (TYPE_3__*,int,int) ;
 int FUNC_10 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_11(vortex_t * VAR_0, int VAR_1, int VAR_2)
{
 wt_voice_t *VAR_3 = &(VAR_0->wt_voice[VAR_1]);
 int VAR_4;


 if (VAR_2) {
  FUNC_8(VAR_0, VAR_1, 1);
  FUNC_7(VAR_0, VAR_1, 1);
  FUNC_10(VAR_0, VAR_1, VAR_2 - 1);
 } else
  FUNC_7(VAR_0, VAR_1, 0);


 FUNC_9(VAR_0, VAR_1, 1);

 FUNC_6(VAR_0->mmio, FUNC_3(0), 0x880000);





 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 0), 0);
 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 1), 0);
 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 2), 0);

 VAR_4 = FUNC_5(VAR_0->mmio, FUNC_2(VAR_1, 3));
 FUNC_4(VAR_0->card->dev, "WT PARM3: %x\n", VAR_4);


 FUNC_6(VAR_0->mmio, FUNC_0(VAR_1, 0), 0);
 FUNC_6(VAR_0->mmio, FUNC_0(VAR_1, 1), 0);
 FUNC_6(VAR_0->mmio, FUNC_0(VAR_1, 2), 0);
 FUNC_6(VAR_0->mmio, FUNC_0(VAR_1, 3), 0);

 FUNC_4(VAR_0->card->dev, "WT GMODE: %x\n",
  FUNC_5(VAR_0->mmio, FUNC_1(VAR_1)));

 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 2), 0xffffffff);
 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 3), 0xcff1c810);

 VAR_3->parm0 = VAR_3->parm1 = 0xcfb23e2f;
 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 0), VAR_3->parm0);
 FUNC_6(VAR_0->mmio, FUNC_2(VAR_1, 1), VAR_3->parm1);
 FUNC_4(VAR_0->card->dev, "WT GMODE 2 : %x\n",
  FUNC_5(VAR_0->mmio, FUNC_1(VAR_1)));
 return 0;
}
