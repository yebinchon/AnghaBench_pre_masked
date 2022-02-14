
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* platform_data; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct ac97_controller {int dummy; } ;
struct TYPE_5__ {void** codec_pdata; } ;
typedef TYPE_1__ pxa2xx_audio_ops_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ac97_controller*) ;
 int FUNC_2 (struct ac97_controller*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct ac97_controller*) ;
 int FUNC_6 (struct platform_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ac97_controller* FUNC_7 (int *,TYPE_2__*,int ,void**) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 int VAR_6;
 struct ac97_controller *VAR_7;
 pxa2xx_audio_ops_t *VAR_8 = VAR_5->dev.platform_data;
 void **VAR_9;

 if (VAR_5->id != -1) {
  FUNC_3(&VAR_5->dev, "PXA2xx has only one AC97 port.\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_3(&VAR_5->dev, "PXA2xx AC97 hw probe error (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_9 = VAR_8 ? VAR_8->codec_pdata : ((void*)0);
 VAR_7 = FUNC_7(&VAR_2, &VAR_5->dev,
         VAR_0,
         VAR_9);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_5(VAR_5, VAR_7);




 return FUNC_4(&VAR_5->dev, &VAR_3,
       VAR_4, FUNC_0(VAR_4));
}
