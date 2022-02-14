
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lx6464es {scalar_t__ playback_mute; scalar_t__* mac_address; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct lx6464es*) ;
 int FUNC_3 (struct lx6464es*) ;
 int FUNC_4 (struct lx6464es*) ;
 int FUNC_5 (struct lx6464es*) ;
 int FUNC_6 (struct lx6464es*) ;
 int FUNC_7 (struct lx6464es*) ;
 int FUNC_8 (struct lx6464es*,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct lx6464es *VAR_2)
{
 int VAR_3;
 int VAR_4;

 FUNC_0(VAR_2->card->dev, "->lx_init_dsp\n");

 FUNC_0(VAR_2->card->dev, "initialize board\n");
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2->card->dev, "testing board\n");
 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_2->card->dev, "initialize ethersound configuration\n");
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_7(VAR_2);



 for (VAR_4 = 0; VAR_4 != 1000; ++VAR_4) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3)
   return VAR_3;
  if (VAR_2->mac_address[0] || VAR_2->mac_address[1] || VAR_2->mac_address[2] ||
      VAR_2->mac_address[3] || VAR_2->mac_address[4] || VAR_2->mac_address[5])
   goto mac_ready;
  FUNC_9(1);
 }
 return -VAR_0;

mac_ready:
 FUNC_0(VAR_2->card->dev, "mac address ready read after: %dms\n", VAR_4);
 FUNC_1(VAR_2->card->dev,
   "mac address: %02X.%02X.%02X.%02X.%02X.%02X\n",
     VAR_2->mac_address[0], VAR_2->mac_address[1], VAR_2->mac_address[2],
     VAR_2->mac_address[3], VAR_2->mac_address[4], VAR_2->mac_address[5]);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_8(VAR_2, VAR_1);

 VAR_2->playback_mute = 0;

 return VAR_3;
}
