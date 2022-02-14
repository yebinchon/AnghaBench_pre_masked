
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct cs43130_private {unsigned int hpload_stat; int hpload_done; int jack; int work; int wq; scalar_t__ dc_meas; int hpload_evt; int pll_rdy; int xtal_rdy; int regmap; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,scalar_t__,unsigned int*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_19, void *VAR_20)
{
 struct cs43130_private *VAR_21 = (struct cs43130_private *)VAR_20;
 struct snd_soc_component *VAR_22 = VAR_21->component;
 unsigned int VAR_23[VAR_12];
 unsigned int VAR_24 = 0;
 unsigned int VAR_25[VAR_12];
 int VAR_26, VAR_27;

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_23); VAR_26++) {
  FUNC_5(VAR_21->regmap, VAR_10 + VAR_26,
       &VAR_23[VAR_26]);
  FUNC_5(VAR_21->regmap, VAR_9 + VAR_26,
       &VAR_25[VAR_26]);
 }

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_23); VAR_26++) {
  VAR_23[VAR_26] = VAR_23[VAR_26] & (~VAR_25[VAR_26]);
  for (VAR_27 = 0; VAR_27 < 8; VAR_27++)
   VAR_24 += (VAR_23[VAR_26] >> VAR_27) & 1;
 }
 FUNC_2(VAR_22->dev, "number of interrupts occurred (%u)\n",
  VAR_24);

 if (!VAR_24)
  return VAR_17;

 if (VAR_23[0] & VAR_15) {
  FUNC_1(&VAR_21->xtal_rdy);
  return VAR_16;
 }

 if (VAR_23[0] & VAR_13) {
  FUNC_1(&VAR_21->pll_rdy);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_2) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_3(VAR_22->dev,
   "DC load has not completed before AC load (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_6) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_3(VAR_22->dev, "HP unplugged during measurement (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_5) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_3(VAR_22->dev, "HP load out of range (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_0) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_2(VAR_22->dev, "HP AC load measurement done (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_1) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_2(VAR_22->dev, "HP DC load measurement done (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_4) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_2(VAR_22->dev, "HP load state machine on done (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[3] & VAR_3) {
  VAR_21->hpload_stat = VAR_23[3];
  FUNC_2(VAR_22->dev, "HP load state machine off done (%x)\n",
   VAR_21->hpload_stat);
  FUNC_1(&VAR_21->hpload_evt);
  return VAR_16;
 }

 if (VAR_23[0] & VAR_14) {
  FUNC_3(VAR_22->dev, "Crystal err: clock is not running\n");
  return VAR_16;
 }

 if (VAR_23[0] & VAR_8) {
  FUNC_2(VAR_22->dev, "HP unplugged\n");
  VAR_21->hpload_done = 0;
  FUNC_6(&VAR_21->jack, 0, VAR_11);
  return VAR_16;
 }

 if (VAR_23[0] & VAR_7) {
  if (VAR_21->dc_meas && !VAR_21->hpload_done &&
      !FUNC_7(&VAR_21->work)) {
   FUNC_2(VAR_22->dev, "HP load queue work\n");
   FUNC_4(VAR_21->wq, &VAR_21->work);
  }

  FUNC_6(&VAR_21->jack, VAR_18,
        VAR_11);
  return VAR_16;
 }

 return VAR_17;
}
