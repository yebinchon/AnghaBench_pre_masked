
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct au1xpsc_audio_data {int * dmaids; int mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,int ) ;
 struct au1xpsc_audio_data* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 struct resource* FUNC_3 (struct platform_device*,int ,int) ;
 int FUNC_4 (struct platform_device*,struct au1xpsc_audio_data*) ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_10)
{
 struct resource *VAR_11, *VAR_12;
 struct au1xpsc_audio_data *VAR_13;

 VAR_13 = FUNC_1(&VAR_10->dev, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_11 = FUNC_3(VAR_10, VAR_5, 0);
 if (!VAR_11)
  return -VAR_1;

 if (!FUNC_2(&VAR_10->dev, VAR_11->start,
         FUNC_5(VAR_11),
         VAR_10->name))
  return -VAR_0;

 VAR_13->mmio = FUNC_0(&VAR_10->dev, VAR_11->start,
      FUNC_5(VAR_11));
 if (!VAR_13->mmio)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_10, VAR_4, 0);
 if (!VAR_12)
  return -VAR_0;
 VAR_13->dmaids[VAR_7] = VAR_12->start;

 VAR_12 = FUNC_3(VAR_10, VAR_4, 1);
 if (!VAR_12)
  return -VAR_0;
 VAR_13->dmaids[VAR_6] = VAR_12->start;

 FUNC_4(VAR_10, VAR_13);

 return FUNC_6(&VAR_10->dev, &VAR_8,
       &VAR_9, 1);
}
