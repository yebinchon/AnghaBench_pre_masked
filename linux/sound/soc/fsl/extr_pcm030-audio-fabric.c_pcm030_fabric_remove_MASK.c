
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pcm030_audio_data {int codec_device; int card; } ;


 int FUNC_0 (int ) ;
 struct pcm030_audio_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct pcm030_audio_data *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->card);
 FUNC_0(VAR_1->codec_device);

 return VAR_2;
}
