
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int put; int get; int info; int access; int private_value; } ;
struct snd_card_asihpi {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int h_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(struct snd_card_asihpi *VAR_11,
    struct hpi_control *VAR_12)
{
 struct snd_card *VAR_13 = VAR_11->card;
 struct snd_kcontrol_new VAR_14;

 VAR_14.private_value = VAR_12->h_control;
 VAR_14.access = VAR_1;

 if (!FUNC_2(VAR_12->h_control, ((void*)0))) {
  FUNC_0(&VAR_14, VAR_12, "Gain");
  VAR_14.info = VAR_9;
  VAR_14.get = VAR_8;
  VAR_14.put = VAR_10;

  if (FUNC_1(VAR_13, &VAR_14, VAR_11) < 0)
   return -VAR_0;
 }

 FUNC_0(&VAR_14, VAR_12, "Band");
 VAR_14.info = VAR_3;
 VAR_14.get = VAR_2;
 VAR_14.put = VAR_4;

 if (FUNC_1(VAR_13, &VAR_14, VAR_11) < 0)
  return -VAR_0;

 FUNC_0(&VAR_14, VAR_12, "Freq");
 VAR_14.info = VAR_6;
 VAR_14.get = VAR_5;
 VAR_14.put = VAR_7;

 return FUNC_1(VAR_13, &VAR_14, VAR_11);
}
