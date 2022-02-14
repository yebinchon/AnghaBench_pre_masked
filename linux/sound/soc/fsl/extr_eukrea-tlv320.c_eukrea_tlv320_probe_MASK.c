
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_8__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_13__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_12__ {char* name; TYPE_8__* dev; } ;
struct TYPE_11__ {char* name; struct device_node* of_node; } ;
struct TYPE_10__ {char* name; struct device_node* of_node; } ;
struct TYPE_9__ {char* dai_name; struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_8__*,char*,...) ;
 TYPE_4__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int,int,int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 (int *,int *,char*) ;
 int FUNC_14 (struct device_node*) ;
 struct device_node* FUNC_15 (struct device_node*,char*,int ) ;
 int FUNC_16 (struct device_node*,char*,int*) ;
 int FUNC_17 (TYPE_4__*,char*) ;
 int FUNC_18 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_13)
{
 int VAR_14;
 int VAR_15 = 0, VAR_16;
 struct device_node *VAR_17 = VAR_13->dev.of_node;
 struct device_node *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

 VAR_11 = &VAR_13->dev;
 if (VAR_17) {
  VAR_14 = FUNC_17(&VAR_11,
       "eukrea,model");
  if (VAR_14) {
   FUNC_6(&VAR_13->dev,
    "eukrea,model node missing or invalid.\n");
   goto err;
  }

  VAR_18 = FUNC_15(VAR_13->dev.of_node,
       "ssi-controller", 0);
  if (!VAR_18) {
   FUNC_6(&VAR_13->dev,
    "ssi-controller missing or invalid.\n");
   VAR_14 = -VAR_0;
   goto err;
  }

  VAR_19 = FUNC_15(VAR_18, "codec-handle", 0);
  if (VAR_19)
   VAR_12.codecs->of_node = VAR_19;
  else
   FUNC_6(&VAR_13->dev, "codec-handle node missing or invalid.\n");

  VAR_14 = FUNC_16(VAR_17, "fsl,mux-int-port", &VAR_15);
  if (VAR_14) {
   FUNC_6(&VAR_13->dev,
    "fsl,mux-int-port node missing or invalid.\n");
   goto err;
  }
  VAR_14 = FUNC_16(VAR_17, "fsl,mux-ext-port", &VAR_16);
  if (VAR_14) {
   FUNC_6(&VAR_13->dev,
    "fsl,mux-ext-port node missing or invalid.\n");
   goto err;
  }





  VAR_15--;
  VAR_16--;

  VAR_12.cpus->of_node = VAR_18;
  VAR_12.platforms->of_node = VAR_18;
 } else {
  VAR_12.cpus->dai_name = "imx-ssi.0";
  VAR_12.platforms->name = "imx-ssi.0";
  VAR_12.codecs->name = "tlv320aic23-codec.0-001a";
  VAR_11 = "cpuimx-audio";
 }

 if (FUNC_10() ||
     FUNC_13(((void*)0), ((void*)0), "fsl,imx21-audmux")) {
  FUNC_7(VAR_9,
   VAR_3 |
   VAR_5 |
   VAR_4 |
   VAR_2 |
   VAR_1 |
   FUNC_2(VAR_10) |
   FUNC_0(VAR_10) |
   FUNC_1(VAR_10)
  );
  FUNC_7(VAR_10,
   VAR_3 |
   FUNC_1(VAR_9)
  );
 } else if (FUNC_9() ||
     FUNC_11() ||
     FUNC_12() ||
     FUNC_13(((void*)0), ((void*)0), "fsl,imx31-audmux")) {
  if (!VAR_17)
   VAR_16 = FUNC_9() ?
    4 : 3;

  FUNC_8(VAR_15,
   VAR_6 |
   VAR_8 |
   FUNC_5(VAR_16) |
   VAR_7 |
   FUNC_4(VAR_16),
   FUNC_3(VAR_16)
  );
  FUNC_8(VAR_16,
   VAR_6,
   FUNC_3(VAR_15)
  );
 } else {
  if (VAR_17) {



   FUNC_6(&VAR_13->dev,
    "Missing or invalid audmux DT node.\n");
   return -VAR_0;
  } else {



   return 0;
  }
 }

 VAR_14 = FUNC_18(&VAR_11);
err:
 if (VAR_14)
  FUNC_6(&VAR_13->dev, "snd_soc_register_card failed (%d)\n", VAR_14);
 FUNC_14(VAR_18);

 return VAR_14;
}
