
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct au1xpsc_audio_data*,int ,int ) ;
 struct au1xpsc_audio_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct au1xpsc_audio_data *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(&VAR_2->dev);

 FUNC_0(VAR_3, VAR_1, VAR_0);

 return 0;
}
