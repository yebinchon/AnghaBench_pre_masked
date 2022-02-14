
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int driver; } ;
struct ac97_codec_driver {int (* probe ) (struct ac97_codec_device*) ;} ;
struct ac97_codec_device {int dummy; } ;


 int FUNC_0 (struct ac97_codec_device*) ;
 int FUNC_1 (struct ac97_codec_device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct ac97_codec_device*) ;
 struct ac97_codec_device* FUNC_9 (struct device*) ;
 struct ac97_codec_driver* FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_0)
{
 struct ac97_codec_device *VAR_1 = FUNC_9(VAR_0);
 struct ac97_codec_driver *VAR_2 = FUNC_10(VAR_0->driver);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_4(VAR_0);
 FUNC_6(VAR_0);
 FUNC_3(VAR_0);

 VAR_3 = VAR_2->probe(VAR_1);
 if (VAR_3 == 0)
  return 0;

 FUNC_2(VAR_0);
 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 FUNC_1(VAR_1);

 return VAR_3;
}
