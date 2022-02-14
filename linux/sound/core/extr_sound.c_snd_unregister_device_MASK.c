
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct snd_minor**) ;
 int VAR_0 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct snd_minor*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct snd_minor** VAR_1 ;
 int VAR_2 ;

int FUNC_5(struct device *VAR_3)
{
 int VAR_4;
 struct snd_minor *VAR_5;

 FUNC_3(&VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); ++VAR_4) {
  VAR_5 = VAR_1[VAR_4];
  if (VAR_5 && VAR_5->dev == VAR_3) {
   VAR_1[VAR_4] = ((void*)0);
   FUNC_1(VAR_3);
   FUNC_2(VAR_5);
   break;
  }
 }
 FUNC_4(&VAR_2);
 if (VAR_4 >= FUNC_0(VAR_1))
  return -VAR_0;
 return 0;
}
