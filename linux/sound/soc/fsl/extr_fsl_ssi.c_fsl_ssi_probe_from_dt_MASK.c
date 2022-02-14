
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct of_device_id {scalar_t__ data; } ;
struct fsl_ssi {int has_ipg_clk_name; int synchronous; int use_dma; int fifo_depth; int use_dual_fifo; int card_idx; int * card_name; int dai_fmt; scalar_t__ soc; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct device_node* FUNC_3 (char*) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 void* FUNC_5 (struct device_node*,char*,int *) ;
 struct of_device_id* FUNC_6 (int ,struct device*) ;
 int FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*,char*,char*) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct device_node*,char*,scalar_t__*,int) ;
 int FUNC_12 (int *,int,char*,char const*) ;
 int FUNC_13 (char const*,char*) ;
 int FUNC_14 (int *,char*) ;
 char* FUNC_15 (char const*,char) ;

__attribute__((used)) static int FUNC_16(struct fsl_ssi *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct device_node *VAR_6 = VAR_5->of_node;
 const struct of_device_id *VAR_7;
 const char *VAR_8, *VAR_9;
 const __be32 *VAR_10;
 u32 VAR_11[4];
 int VAR_12;

 VAR_7 = FUNC_6(VAR_3, VAR_5);
 if (!VAR_7 || !VAR_7->data)
  return -VAR_0;

 VAR_4->soc = VAR_7->data;

 VAR_12 = FUNC_8(VAR_6, "clock-names", "ipg");

 VAR_4->has_ipg_clk_name = VAR_12 >= 0;


 VAR_9 = FUNC_5(VAR_6, "fsl,mode", ((void*)0));
 if (VAR_9 && !FUNC_13(VAR_9, "ac97-slave")) {
  VAR_4->dai_fmt = VAR_1;

  VAR_12 = FUNC_10(VAR_6, "cell-index", &VAR_4->card_idx);
  if (VAR_12) {
   FUNC_1(VAR_5, "failed to get SSI index property\n");
   return -VAR_0;
  }
  FUNC_14(VAR_4->card_name, "ac97-codec");
 } else if (!FUNC_4(VAR_6, "fsl,ssi-asynchronous", ((void*)0))) {
  VAR_4->synchronous = 1;
 }


 VAR_4->use_dma = !FUNC_9(VAR_6, "fsl,fiq-stream-filter");


 VAR_10 = FUNC_5(VAR_6, "fsl,fifo-depth", ((void*)0));
 if (VAR_10)
  VAR_4->fifo_depth = FUNC_0(VAR_10);
 else
  VAR_4->fifo_depth = 8;


 VAR_12 = FUNC_11(VAR_6, "dmas", VAR_11, 4);
 if (VAR_4->use_dma && !VAR_12 && VAR_11[2] == VAR_2)
  VAR_4->use_dual_fifo = 1;
 if (!VAR_4->card_name[0] && FUNC_5(VAR_6, "codec-handle", ((void*)0))) {
  struct device_node *VAR_13 = FUNC_3("/");

  VAR_9 = FUNC_5(VAR_13, "compatible", ((void*)0));
  FUNC_7(VAR_13);

  VAR_8 = FUNC_15(VAR_9, ',');
  if (VAR_8)
   VAR_9 = VAR_8 + 1;
  FUNC_12(VAR_4->card_name, sizeof(VAR_4->card_name),
    "snd-soc-%s", VAR_9);
  FUNC_2(VAR_4->card_name);
  VAR_4->card_idx = 0;
 }

 return 0;
}
