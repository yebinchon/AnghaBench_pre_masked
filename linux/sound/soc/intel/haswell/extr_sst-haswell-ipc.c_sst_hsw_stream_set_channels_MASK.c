
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch_num; } ;
struct TYPE_4__ {TYPE_1__ format; } ;
struct sst_hsw_stream {TYPE_2__ request; scalar_t__ commited; } ;
struct sst_hsw {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

int FUNC_1(struct sst_hsw *VAR_1,
 struct sst_hsw_stream *VAR_2, int VAR_3)
{
 if (VAR_2->commited) {
  FUNC_0(VAR_1->dev, "error: stream committed for set channels\n");
  return -VAR_0;
 }

 VAR_2->request.format.ch_num = VAR_3;
 return 0;
}
