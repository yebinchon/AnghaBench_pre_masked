
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_asoc_card_priv {int dai_fmt; TYPE_1__* pdev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int) ;




 int VAR_6 ;
 int FUNC_5 (struct device*,char*) ;
 scalar_t__ FUNC_6 (struct fsl_asoc_card_priv*) ;
 int FUNC_7 (int,int,unsigned int) ;
 int FUNC_8 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_9(struct device_node *VAR_7,
         struct fsl_asoc_card_priv *VAR_8)
{
 struct device *VAR_9 = &VAR_8->pdev->dev;
 u32 VAR_10 = 0, VAR_11 = 0;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = FUNC_8(VAR_7, "mux-int-port", &VAR_12);
 if (VAR_14) {
  FUNC_5(VAR_9, "mux-int-port missing or invalid\n");
  return VAR_14;
 }
 VAR_14 = FUNC_8(VAR_7, "mux-ext-port", &VAR_13);
 if (VAR_14) {
  FUNC_5(VAR_9, "mux-ext-port missing or invalid\n");
  return VAR_14;
 }





 VAR_12--;
 VAR_13--;






 switch (VAR_8->dai_fmt & VAR_6) {
 case 131:
  VAR_10 = FUNC_2(8 | VAR_13) |
      FUNC_1(8 | VAR_13) |
      FUNC_4(VAR_13) |
      FUNC_3(VAR_13) |
      VAR_2 |
      VAR_1 |
      VAR_5 |
      VAR_4;
  break;
 case 130:
  VAR_10 = FUNC_1(8 | VAR_13) |
      FUNC_3(VAR_13) |
      VAR_1 |
      VAR_4;
  VAR_11 = FUNC_2(8 | VAR_12) |
      FUNC_4(VAR_12) |
      VAR_2 |
      VAR_5;
  break;
 case 129:
  VAR_10 = FUNC_2(8 | VAR_13) |
      FUNC_4(VAR_13) |
      VAR_2 |
      VAR_5;
  VAR_11 = FUNC_1(8 | VAR_12) |
      FUNC_3(VAR_12) |
      VAR_1 |
      VAR_4;
  break;
 case 128:
  VAR_11 = FUNC_2(8 | VAR_12) |
      FUNC_1(8 | VAR_12) |
      FUNC_4(VAR_12) |
      FUNC_3(VAR_12) |
      VAR_2 |
      VAR_1 |
      VAR_5 |
      VAR_4;
  break;
 default:
  if (!FUNC_6(VAR_8))
   return -VAR_0;
 }

 if (FUNC_6(VAR_8)) {
  VAR_10 = VAR_3 |
      FUNC_3(VAR_13) |
      VAR_4;
  VAR_11 = VAR_3 |
      FUNC_4(VAR_12) |
      VAR_5;
 }


 if (!FUNC_6(VAR_8)) {
  unsigned int VAR_15 =
    FUNC_0(VAR_13);

  VAR_14 = FUNC_7(VAR_12, 0,
         VAR_15);
  if (VAR_14) {
   FUNC_5(VAR_9, "audmux internal port setup failed\n");
   return VAR_14;
  }
 }

 VAR_14 = FUNC_7(VAR_12, VAR_10,
        FUNC_0(VAR_13));
 if (VAR_14) {
  FUNC_5(VAR_9, "audmux internal port setup failed\n");
  return VAR_14;
 }

 if (!FUNC_6(VAR_8)) {
  unsigned int VAR_16 =
    FUNC_0(VAR_12);

  VAR_14 = FUNC_7(VAR_13, 0,
         VAR_16);
  if (VAR_14) {
   FUNC_5(VAR_9, "audmux external port setup failed\n");
   return VAR_14;
  }
 }

 VAR_14 = FUNC_7(VAR_13, VAR_11,
        FUNC_0(VAR_12));
 if (VAR_14) {
  FUNC_5(VAR_9, "audmux external port setup failed\n");
  return VAR_14;
 }

 return 0;
}
