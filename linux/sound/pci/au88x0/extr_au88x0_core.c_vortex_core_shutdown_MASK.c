
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* card; int mmio; } ;
typedef TYPE_2__ vortex_t ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(vortex_t * VAR_3)
{

 FUNC_0(VAR_3->card->dev, "shutdown started\n");

 FUNC_7(VAR_3);
 FUNC_3(VAR_3);


 FUNC_6(VAR_3);
 FUNC_5(VAR_3, 0);

 FUNC_8(VAR_3);

 FUNC_4(VAR_3);





 FUNC_1(VAR_3->mmio, VAR_1, 0);
 FUNC_1(VAR_3->mmio, VAR_0, 0);
 FUNC_2(5);
 FUNC_1(VAR_3->mmio, VAR_2, 0xffff);

 FUNC_0(VAR_3->card->dev, "shutdown.... done.\n");
 return 0;
}
