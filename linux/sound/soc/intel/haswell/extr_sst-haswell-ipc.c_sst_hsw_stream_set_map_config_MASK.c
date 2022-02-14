
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int config; int map; } ;
struct TYPE_4__ {TYPE_1__ format; } ;
struct sst_hsw_stream {TYPE_2__ request; scalar_t__ commited; } ;
struct sst_hsw {int dev; } ;
typedef enum sst_hsw_channel_config { ____Placeholder_sst_hsw_channel_config } sst_hsw_channel_config ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct sst_hsw *VAR_1,
 struct sst_hsw_stream *VAR_2, u32 VAR_3,
 enum sst_hsw_channel_config VAR_4)
{
 if (VAR_2->commited) {
  FUNC_0(VAR_1->dev, "error: stream committed for set map\n");
  return -VAR_0;
 }

 VAR_2->request.format.map = VAR_3;
 VAR_2->request.format.config = VAR_4;
 return 0;
}
