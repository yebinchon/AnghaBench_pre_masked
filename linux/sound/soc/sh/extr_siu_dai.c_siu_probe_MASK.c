
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siu_info {void* reg; void* yram; void* xram; void* pram; int fw; int * dev; } ;
struct resource {scalar_t__ start; } ;
struct platform_device {int dev; int name; } ;
struct firmware {int size; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,struct siu_info*) ;
 void* FUNC_2 (int *,scalar_t__,scalar_t__) ;
 struct siu_info* FUNC_3 (int *,int,int ) ;
 struct resource* FUNC_4 (int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int *,int *,int *,int) ;
 int FUNC_6 (int *,int ,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct firmware const*) ;
 int FUNC_10 (struct firmware const**,char*,int *) ;
 scalar_t__ FUNC_11 (struct resource*) ;
 int VAR_11 ;
 int VAR_12 ;
 struct siu_info* VAR_13 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_14)
{
 const struct firmware *VAR_15;
 struct resource *VAR_16, *VAR_17;
 struct siu_info *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_3(&VAR_14->dev, sizeof(*VAR_18), VAR_3);
 if (!VAR_18)
  return -VAR_2;
 VAR_13 = VAR_18;
 VAR_18->dev = &VAR_14->dev;

 VAR_19 = FUNC_10(&VAR_15, "siu_spb.bin", &VAR_14->dev);
 if (VAR_19)
  return VAR_19;





 FUNC_6(&VAR_18->fw, VAR_15->data, VAR_15->size);

 FUNC_9(VAR_15);

 VAR_16 = FUNC_7(VAR_14, VAR_4, 0);
 if (!VAR_16)
  return -VAR_1;

 VAR_17 = FUNC_4(&VAR_14->dev, VAR_16->start,
      FUNC_11(VAR_16), VAR_14->name);
 if (!VAR_17) {
  FUNC_0(&VAR_14->dev, "SIU region already claimed\n");
  return -VAR_0;
 }

 VAR_18->pram = FUNC_2(&VAR_14->dev, VAR_16->start, VAR_5);
 if (!VAR_18->pram)
  return -VAR_2;
 VAR_18->xram = FUNC_2(&VAR_14->dev, VAR_16->start + VAR_7,
      VAR_8);
 if (!VAR_18->xram)
  return -VAR_2;
 VAR_18->yram = FUNC_2(&VAR_14->dev, VAR_16->start + VAR_9,
      VAR_10);
 if (!VAR_18->yram)
  return -VAR_2;
 VAR_18->reg = FUNC_2(&VAR_14->dev, VAR_16->start + VAR_6,
       FUNC_11(VAR_16) - VAR_6);
 if (!VAR_18->reg)
  return -VAR_2;

 FUNC_1(&VAR_14->dev, VAR_18);


 VAR_19 = FUNC_5(&VAR_14->dev, &VAR_11,
           &VAR_12, 1);
 if (VAR_19 < 0)
  return VAR_19;

 FUNC_8(&VAR_14->dev);

 return 0;
}
