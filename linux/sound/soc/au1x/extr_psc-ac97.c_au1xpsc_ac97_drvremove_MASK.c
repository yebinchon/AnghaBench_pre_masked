
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int * VAR_1 ;
 struct au1xpsc_audio_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct au1xpsc_audio_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_4(&VAR_2->dev);


 FUNC_2(0, FUNC_0(VAR_3));
 FUNC_5();
 FUNC_2(VAR_0, FUNC_1(VAR_3));
 FUNC_5();

 VAR_1 = ((void*)0);

 return 0;
}
