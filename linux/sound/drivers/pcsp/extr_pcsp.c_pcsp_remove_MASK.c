
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcsp {int input_dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct snd_pcsp*) ;
 int FUNC_1 (int ) ;
 struct snd_pcsp* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct snd_pcsp *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(VAR_1->input_dev);
 FUNC_0(VAR_1);
 return 0;
}
