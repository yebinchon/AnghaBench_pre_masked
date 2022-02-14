
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int lock; TYPE_1__* card; int mmio; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_15__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_2__*,int,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(vortex_t *VAR_4)
{

 FUNC_0(VAR_4->card->dev, "init started\n");

 FUNC_2(VAR_4->mmio, VAR_0, 0xffffffff);
 FUNC_3(5);
 FUNC_2(VAR_4->mmio, VAR_0,
  FUNC_1(VAR_4->mmio, VAR_0) & 0xffdfffff);
 FUNC_3(5);

 FUNC_2(VAR_4->mmio, VAR_2, 0xffffffff);
 FUNC_1(VAR_4->mmio, VAR_3);

 FUNC_8(VAR_4);







 FUNC_7(VAR_4);
 FUNC_2(VAR_4->mmio, VAR_1, 0x0);
 FUNC_6(VAR_4);

 FUNC_10(VAR_4);
 FUNC_11(VAR_4);
 FUNC_14(VAR_4);

 FUNC_9(VAR_4);
 FUNC_13(VAR_4, 48000, 1);
 FUNC_5(VAR_4);


 FUNC_15(VAR_4);




 FUNC_12(VAR_4, 0x90);







 FUNC_0(VAR_4->card->dev, "init.... done.\n");
 FUNC_4(&VAR_4->lock);

 return 0;
}
