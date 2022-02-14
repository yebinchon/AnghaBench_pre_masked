
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct azx {TYPE_2__* card; } ;
struct TYPE_4__ {int* res; } ;
struct TYPE_6__ {TYPE_1__ rirb; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*,int ) ;
 int FUNC_2 (struct azx*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct azx *VAR_4, unsigned int VAR_5)
{
 int VAR_6 = 50;

 while (VAR_6--) {

  if (FUNC_2(VAR_4, VAR_3) & VAR_0) {

   FUNC_0(VAR_4)->rirb.res[VAR_5] = FUNC_1(VAR_4, VAR_2);
   return 0;
  }
  FUNC_5(1);
 }
 if (FUNC_4())
  FUNC_3(VAR_4->card->dev, "get_response timeout: IRS=0x%x\n",
   FUNC_2(VAR_4, VAR_3));
 FUNC_0(VAR_4)->rirb.res[VAR_5] = -1;
 return -VAR_1;
}
