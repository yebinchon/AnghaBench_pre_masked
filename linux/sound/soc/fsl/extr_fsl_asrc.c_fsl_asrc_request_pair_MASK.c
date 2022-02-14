
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_asrc_pair {int channels; int index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int channel_avail; int lock; struct fsl_asrc_pair** pair; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(int VAR_6, struct fsl_asrc_pair *VAR_7)
{
 enum asrc_pair_index VAR_8 = VAR_0;
 struct fsl_asrc *VAR_9 = VAR_7->asrc_priv;
 struct device *VAR_10 = &VAR_9->pdev->dev;
 unsigned long VAR_11;
 int VAR_12, VAR_13 = 0;

 FUNC_1(&VAR_9->lock, VAR_11);

 for (VAR_12 = VAR_1; VAR_12 < VAR_3; VAR_12++) {
  if (VAR_9->pair[VAR_12] != ((void*)0))
   continue;

  VAR_8 = VAR_12;

  if (VAR_12 != VAR_2)
   break;
 }

 if (VAR_8 == VAR_0) {
  FUNC_0(VAR_10, "all pairs are busy now\n");
  VAR_13 = -VAR_4;
 } else if (VAR_9->channel_avail < VAR_6) {
  FUNC_0(VAR_10, "can't afford required channels: %d\n", VAR_6);
  VAR_13 = -VAR_5;
 } else {
  VAR_9->channel_avail -= VAR_6;
  VAR_9->pair[VAR_8] = VAR_7;
  VAR_7->channels = VAR_6;
  VAR_7->index = VAR_8;
 }

 FUNC_2(&VAR_9->lock, VAR_11);

 return VAR_13;
}
