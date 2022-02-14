
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct skl_rt286_private {int hdmi_pcm_list; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct skl_rt286_private* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,struct skl_rt286_private*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct skl_rt286_private *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->hdmi_pcm_list);

 VAR_2 = &VAR_3->dev;
 FUNC_3(&VAR_2, VAR_4);

 return FUNC_2(&VAR_3->dev, &VAR_2);
}
