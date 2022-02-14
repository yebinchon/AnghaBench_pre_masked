
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {int dummy; } ;
struct snd_card {scalar_t__ number; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_3 (struct snd_minor*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,struct snd_card*,int) ;
 struct snd_minor** VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_7, struct snd_card *VAR_8, int VAR_9)
{
 int VAR_10 = FUNC_6(VAR_7, VAR_8, VAR_9);
 int VAR_11 = FUNC_1(VAR_10);
 int VAR_12 = -1;
 struct snd_minor *VAR_13;

 if (VAR_8 && VAR_8->number >= VAR_2)
  return 0;
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_4(&VAR_6);
 VAR_13 = VAR_5[VAR_10];
 if (VAR_13 == ((void*)0)) {
  FUNC_5(&VAR_6);
  return -VAR_0;
 }
 FUNC_7(VAR_10);
 switch (FUNC_2(VAR_10)) {
 case 128:
  VAR_12 = FUNC_0(VAR_11, VAR_1);
  break;
 case 130:
  VAR_12 = FUNC_0(VAR_11, VAR_3);
  break;
 case 129:
  VAR_12 = FUNC_0(VAR_11, VAR_4);
  break;
 }
 if (VAR_12 >= 0) {
  FUNC_7(VAR_12);
  VAR_5[VAR_12] = ((void*)0);
 }
 VAR_5[VAR_10] = ((void*)0);
 FUNC_5(&VAR_6);
 FUNC_3(VAR_13);
 return 0;
}
