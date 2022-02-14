
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_info {int compr_cb_param; int (* compr_cb ) (int ) ;} ;
struct intel_sst_drv {struct stream_info* streams; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct intel_sst_drv *VAR_0, int VAR_1)
{
 struct stream_info *VAR_2;

 FUNC_0(VAR_0->dev, "fragment elapsed from firmware for str_id %d\n",
   VAR_1);
 VAR_2 = &VAR_0->streams[VAR_1];
 if (VAR_2->compr_cb)
  VAR_2->compr_cb(VAR_2->compr_cb_param);
}
