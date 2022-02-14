
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atiixp_modem {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atiixp_modem*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct atiixp_modem *VAR_3)
{
 int VAR_4 = 1000;

 while (FUNC_0(VAR_3, VAR_2) & VAR_0) {
  if (! VAR_4--) {
   FUNC_1(VAR_3->card->dev, "codec acquire timeout\n");
   return -VAR_1;
  }
  FUNC_2(1);
 }
 return 0;
}
