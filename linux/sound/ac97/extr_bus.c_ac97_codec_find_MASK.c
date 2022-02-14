
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_controller {struct ac97_codec_device** codecs; } ;
struct ac97_codec_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ac97_codec_device* FUNC_0 (int ) ;

__attribute__((used)) static struct ac97_codec_device *
FUNC_1(struct ac97_controller *VAR_2, unsigned int VAR_3)
{
 if (VAR_3 >= VAR_0)
  return FUNC_0(-VAR_1);

 return VAR_2->codecs[VAR_3];
}
