
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_data {int lock; } ;
struct TYPE_4__ {scalar_t__ length; int dst; int command_id; } ;
struct sst_cmd_generic {TYPE_1__ header; } ;
struct snd_soc_dai {int dev; } ;
struct TYPE_6__ {int dev; TYPE_2__* ops; } ;
struct TYPE_5__ {int (* power ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sst_data* FUNC_4 (struct snd_soc_dai*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_5 (struct sst_data*,int ,int ,int ,int ,struct sst_cmd_generic*,scalar_t__) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct snd_soc_dai *VAR_6, bool VAR_7)
{
 int VAR_8 = 0;
 struct sst_cmd_generic VAR_9;
 struct sst_data *VAR_10 = FUNC_4(VAR_6);
 static int VAR_11;

 if (VAR_7)
  VAR_9.header.command_id = VAR_1;
 else
  VAR_9.header.command_id = VAR_0;
 FUNC_1(VAR_6->dev, "enable=%u, usage=%d\n", VAR_7, VAR_11);

 FUNC_0(VAR_9.header.dst);
 VAR_9.header.length = 0;

 if (VAR_7) {
  VAR_8 = VAR_5->ops->power(VAR_5->dev, 1);
  if (VAR_8 < 0)
   return VAR_8;
 }

 FUNC_2(&VAR_10->lock);
 if (VAR_7)
  VAR_11++;
 else
  VAR_11--;





 if ((VAR_7 && (VAR_11 == 1)) ||
     (!VAR_7 && (VAR_11 == 0))) {
  VAR_8 = FUNC_5(VAR_10, VAR_3,
    VAR_2, VAR_4, 0, &VAR_9,
    sizeof(VAR_9.header) + VAR_9.header.length);
  if (VAR_8 && VAR_7) {
   VAR_11--;
   VAR_7 = 0;
  }
 }
 FUNC_3(&VAR_10->lock);

 if (!VAR_7)
  VAR_5->ops->power(VAR_5->dev, 0);
 return VAR_8;
}
