
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int asic_loaded; TYPE_1__* card; TYPE_2__* comm_page; int * dsp_code; } ;
struct TYPE_4__ {int ext_box_status; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_5)
{
 u32 VAR_6;

 if (FUNC_5(VAR_5))
  return -VAR_3;

 VAR_5->comm_page->ext_box_status = FUNC_1(VAR_1);
 VAR_5->asic_loaded = 0;
 FUNC_0(VAR_5);
 FUNC_4(VAR_5, VAR_0);

 if (FUNC_5(VAR_5)) {
  VAR_5->dsp_code = ((void*)0);
  return -VAR_3;
 }

 VAR_6 = FUNC_3(VAR_5->comm_page->ext_box_status);
 FUNC_2(VAR_5->card->dev, "box_status=%x\n", VAR_6);
 if (VAR_6 == VAR_1)
  return -VAR_4;

 VAR_5->asic_loaded = 1;
 return VAR_6 & VAR_2;
}
