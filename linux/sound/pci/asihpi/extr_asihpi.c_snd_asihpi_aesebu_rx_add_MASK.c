
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int access; int get; int info; int put; } ;
struct snd_card_asihpi {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_2(struct snd_card_asihpi *VAR_9,
        struct hpi_control *VAR_10)
{
 struct snd_card *VAR_11 = VAR_9->card;
 struct snd_kcontrol_new VAR_12;

 FUNC_0(&VAR_12, VAR_10, "Format");
 VAR_12.access = VAR_2;
 VAR_12.info = VAR_4;
 VAR_12.get = VAR_5;
 VAR_12.put = VAR_6;


 if (FUNC_1(VAR_11, &VAR_12, VAR_9) < 0)
  return -VAR_0;

 FUNC_0(&VAR_12, VAR_10, "Status");
 VAR_12.access =
     VAR_3 | VAR_1;
 VAR_12.info = VAR_8;
 VAR_12.get = VAR_7;

 return FUNC_1(VAR_11, &VAR_12, VAR_9);
}
