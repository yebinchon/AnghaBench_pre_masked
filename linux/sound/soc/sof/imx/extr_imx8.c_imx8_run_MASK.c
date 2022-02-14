
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_dev {int dev; scalar_t__ private; } ;
struct imx8_priv {int sc_ipc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_sof_dev *VAR_6)
{
 struct imx8_priv *VAR_7 = (struct imx8_priv *)VAR_6->private;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7->sc_ipc, VAR_4,
          VAR_3, 1);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "Error system address offset source select\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7->sc_ipc, VAR_4,
          VAR_0, 0x80);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "Error system address offset of AUDIO\n");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7->sc_ipc, VAR_4,
          VAR_2, 0x5A);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "Error system address offset of PERIPH %d\n",
   VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_7->sc_ipc, VAR_4,
          VAR_1, 0x51);
 if (VAR_8 < 0) {
  FUNC_0(VAR_6->dev, "Error system address offset of IRQ\n");
  return VAR_8;
 }

 FUNC_2(VAR_7->sc_ipc, VAR_4, 1,
       VAR_5);

 return 0;
}
