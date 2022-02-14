
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct sh_fsi_platform_info {int port_b; int port_a; } ;
struct resource {scalar_t__ start; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct TYPE_13__ {int platform_data; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; struct platform_device_id* id_entry; } ;
struct fsi_priv {struct fsi_master* master; scalar_t__ phys; scalar_t__ base; } ;
struct fsi_master {struct fsi_priv fsia; struct fsi_priv fsib; scalar_t__ base; int lock; struct fsi_core const* core; } ;
struct fsi_core {int dummy; } ;
struct device_node {int dummy; } ;
typedef int info ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,struct fsi_master*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 struct fsi_master* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (TYPE_1__*,unsigned int,int *,int ,int ,struct fsi_master*) ;
 int FUNC_7 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_8 (struct fsi_priv*,int *) ;
 int VAR_5 ;
 int FUNC_9 (char*,struct device_node*,int *,TYPE_1__*) ;
 int FUNC_10 (struct fsi_priv*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct fsi_priv*,TYPE_1__*) ;
 int FUNC_12 (struct fsi_priv*) ;
 int FUNC_13 (struct sh_fsi_platform_info*,int ,int) ;
 int FUNC_14 (struct sh_fsi_platform_info*,int ,int) ;
 struct fsi_core* FUNC_15 (TYPE_1__*) ;
 unsigned int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_8)
{
 struct fsi_master *VAR_9;
 struct device_node *VAR_10 = VAR_8->dev.of_node;
 struct sh_fsi_platform_info VAR_11;
 const struct fsi_core *VAR_12;
 struct fsi_priv *VAR_13;
 struct resource *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 FUNC_14(&VAR_11, 0, sizeof(VAR_11));

 VAR_12 = ((void*)0);
 if (VAR_10) {
  VAR_12 = FUNC_15(&VAR_8->dev);
  FUNC_9("fsia", VAR_10, &VAR_11.port_a, &VAR_8->dev);
  FUNC_9("fsib", VAR_10, &VAR_11.port_b, &VAR_8->dev);
 } else {
  const struct platform_device_id *VAR_17 = VAR_8->id_entry;
  if (VAR_17)
   VAR_12 = (struct fsi_core *)VAR_17->driver_data;

  if (VAR_8->dev.platform_data)
   FUNC_13(&VAR_11, VAR_8->dev.platform_data, sizeof(VAR_11));
 }

 if (!VAR_12) {
  FUNC_1(&VAR_8->dev, "unknown fsi device\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_17(VAR_8, VAR_4, 0);
 VAR_15 = FUNC_16(VAR_8, 0);
 if (!VAR_14 || (int)VAR_15 <= 0) {
  FUNC_1(&VAR_8->dev, "Not enough FSI platform resources.\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->base = FUNC_4(&VAR_8->dev,
         VAR_14->start, FUNC_20(VAR_14));
 if (!VAR_9->base) {
  FUNC_1(&VAR_8->dev, "Unable to ioremap FSI registers.\n");
  return -VAR_2;
 }


 VAR_9->core = VAR_12;
 FUNC_21(&VAR_9->lock);


 VAR_13 = &VAR_9->fsia;
 VAR_13->base = VAR_9->base;
 VAR_13->phys = VAR_14->start;
 VAR_13->master = VAR_9;
 FUNC_10(VAR_13, &VAR_11.port_a);
 FUNC_8(VAR_13, &VAR_11.port_a);
 VAR_16 = FUNC_11(VAR_13, &VAR_8->dev);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_8->dev, "FSIA stream probe failed\n");
  return VAR_16;
 }


 VAR_13 = &VAR_9->fsib;
 VAR_13->base = VAR_9->base + 0x40;
 VAR_13->phys = VAR_14->start + 0x40;
 VAR_13->master = VAR_9;
 FUNC_10(VAR_13, &VAR_11.port_b);
 FUNC_8(VAR_13, &VAR_11.port_b);
 VAR_16 = FUNC_11(VAR_13, &VAR_8->dev);
 if (VAR_16 < 0) {
  FUNC_1(&VAR_8->dev, "FSIB stream probe failed\n");
  goto exit_fsia;
 }

 FUNC_19(&VAR_8->dev);
 FUNC_3(&VAR_8->dev, VAR_9);

 VAR_16 = FUNC_6(&VAR_8->dev, VAR_15, &VAR_5, 0,
          FUNC_2(&VAR_8->dev), VAR_9);
 if (VAR_16) {
  FUNC_1(&VAR_8->dev, "irq request err\n");
  goto exit_fsib;
 }

 VAR_16 = FUNC_7(&VAR_8->dev, &VAR_6,
        VAR_7, FUNC_0(VAR_7));
 if (VAR_16 < 0) {
  FUNC_1(&VAR_8->dev, "cannot snd component register\n");
  goto exit_fsib;
 }

 return VAR_16;

exit_fsib:
 FUNC_18(&VAR_8->dev);
 FUNC_12(&VAR_9->fsib);
exit_fsia:
 FUNC_12(&VAR_9->fsia);

 return VAR_16;
}
