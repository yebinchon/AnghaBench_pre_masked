
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lola {unsigned int lola_caps; int cold_reset; scalar_t__ granularity; TYPE_2__* card; TYPE_1__* pin; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ num_pins; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (int ,char*,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct lola*) ;
 int FUNC_7 (struct lola*,int) ;
 int FUNC_8 (struct lola*,int) ;
 int FUNC_9 (struct lola*,size_t,int*) ;
 int FUNC_10 (struct lola*,size_t,int*) ;
 int FUNC_11 (struct lola*,int,int ,unsigned int*) ;
 int FUNC_12 (struct lola*) ;
 int FUNC_13 (struct lola*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_14(struct lola *VAR_8)
{
 unsigned int VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_11(VAR_8, 0, VAR_5, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8->card->dev, "Can't read VENDOR_ID\n");
  return VAR_11;
 }
 VAR_9 >>= 16;
 if (VAR_9 != 0x1369) {
  FUNC_5(VAR_8->card->dev, "Unknown codec vendor 0x%x\n", VAR_9);
  return -VAR_1;
 }

 VAR_11 = FUNC_11(VAR_8, 1, VAR_3, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8->card->dev, "Can't read FUNCTION_TYPE\n");
  return VAR_11;
 }
 if (VAR_9 != 1) {
  FUNC_5(VAR_8->card->dev, "Unknown function type %d\n", VAR_9);
  return -VAR_1;
 }

 VAR_11 = FUNC_11(VAR_8, 1, VAR_4, &VAR_9);
 if (VAR_11 < 0) {
  FUNC_5(VAR_8->card->dev, "Can't read SPECCAPS\n");
  return VAR_11;
 }
 VAR_8->lola_caps = VAR_9;
 VAR_8->pin[VAR_0].num_pins = FUNC_1(VAR_8->lola_caps);
 VAR_8->pin[VAR_7].num_pins = FUNC_3(VAR_8->lola_caps);
 FUNC_4(VAR_8->card->dev, "speccaps=0x%x, pins in=%d, out=%d\n",
      VAR_8->lola_caps,
      VAR_8->pin[VAR_0].num_pins, VAR_8->pin[VAR_7].num_pins);

 if (VAR_8->pin[VAR_0].num_pins > VAR_6 ||
     VAR_8->pin[VAR_7].num_pins > VAR_6) {
  FUNC_5(VAR_8->card->dev, "Invalid Lola-spec caps 0x%x\n", VAR_9);
  return -VAR_1;
 }

 VAR_10 = 0x02;
 VAR_11 = FUNC_9(VAR_8, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_9(VAR_8, VAR_7, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_10(VAR_8, VAR_0, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_10(VAR_8, VAR_7, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_0(VAR_8->lola_caps)) {
  VAR_11 = FUNC_7(VAR_8, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10++;
 }
 if (FUNC_2(VAR_8->lola_caps)) {
  VAR_11 = FUNC_8(VAR_8, VAR_10);
  if (VAR_11 < 0)
   return VAR_11;
  VAR_10++;
 }


 VAR_11 = FUNC_6(VAR_8);
 if (VAR_11 < 0)
  return VAR_11;




 if (!VAR_8->cold_reset) {
  FUNC_12(VAR_8);
  VAR_8->cold_reset = 1;
 } else {

  if (VAR_8->granularity != VAR_2)
   FUNC_13(VAR_8, VAR_8->granularity, 1);
 }

 return 0;
}
