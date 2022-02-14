
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,struct snd_card*) ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct device*,unsigned int,struct snd_card**) ;
 int FUNC_3 (struct snd_card*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0,
     unsigned int VAR_1)
{
 struct snd_card *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if ((VAR_3 = FUNC_3(VAR_2, VAR_1)) < 0) {
  FUNC_1(VAR_2);
  return VAR_3;
 }
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
