
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirf_audio_port {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sirf_audio_port* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (struct platform_device*,struct sirf_audio_port*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 int VAR_5;
 struct sirf_audio_port *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev,
   sizeof(struct sirf_audio_port), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_2(&VAR_4->dev,
   &VAR_2, &VAR_3, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4, VAR_6);
 return FUNC_1(&VAR_4->dev, ((void*)0), 0);
}
