
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {scalar_t__ start; } ;
struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {int pcm_free; int pcm_new; int * ops; int name; } ;
struct dma_object {int ssi_fifo_depth; int irq; int channel; TYPE_2__ dai; scalar_t__ ssi_srx_phys; scalar_t__ ssi_stx_phys; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,struct dma_object*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*,int *,int ) ;
 struct device_node* FUNC_4 (struct device_node*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct device_node*,int ) ;
 int FUNC_6 (struct dma_object*) ;
 struct dma_object* FUNC_7 (int,int ) ;
 int FUNC_8 (struct device_node*,int ,struct resource*) ;
 int * FUNC_9 (struct device_node*,char*,int *) ;
 int FUNC_10 (struct device_node*,int ) ;
 int FUNC_11 (struct device_node*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_9)
{
 struct dma_object *VAR_10;
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 struct device_node *VAR_12;
 struct resource VAR_13;
 const uint32_t *VAR_14;
 int VAR_15;


 VAR_12 = FUNC_4(VAR_11);
 if (!VAR_12) {
  FUNC_1(&VAR_9->dev, "cannot find parent SSI node\n");
  return -VAR_1;
 }

 VAR_15 = FUNC_8(VAR_12, 0, &VAR_13);
 if (VAR_15) {
  FUNC_1(&VAR_9->dev, "could not determine resources for %pOF\n",
   VAR_12);
  FUNC_11(VAR_12);
  return VAR_15;
 }

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  FUNC_11(VAR_12);
  return -VAR_2;
 }

 VAR_10->dai.name = VAR_0;
 VAR_10->dai.ops = &VAR_8;
 VAR_10->dai.pcm_new = VAR_7;
 VAR_10->dai.pcm_free = VAR_6;


 VAR_10->ssi_stx_phys = VAR_13.start + VAR_5;
 VAR_10->ssi_srx_phys = VAR_13.start + VAR_4;

 VAR_14 = FUNC_9(VAR_12, "fsl,fifo-depth", ((void*)0));
 if (VAR_14)
  VAR_10->ssi_fifo_depth = FUNC_0(VAR_14);
 else

  VAR_10->ssi_fifo_depth = 8;

 FUNC_11(VAR_12);

 VAR_15 = FUNC_3(&VAR_9->dev, &VAR_10->dai, ((void*)0), 0);
 if (VAR_15) {
  FUNC_1(&VAR_9->dev, "could not register platform\n");
  FUNC_6(VAR_10);
  return VAR_15;
 }

 VAR_10->channel = FUNC_10(VAR_11, 0);
 VAR_10->irq = FUNC_5(VAR_11, 0);

 FUNC_2(&VAR_9->dev, VAR_10);

 return 0;
}
