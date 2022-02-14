
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int access; int index; int get; int info; } ;
struct snd_card_asihpi {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct snd_card_asihpi *VAR_4,
    struct hpi_control *VAR_5, int VAR_6)
{
 struct snd_card *VAR_7 = VAR_4->card;
 struct snd_kcontrol_new VAR_8;

 FUNC_0(&VAR_8, VAR_5, "Meter");
 VAR_8.access =
     VAR_1 | VAR_0;
 VAR_8.info = VAR_3;
 VAR_8.get = VAR_2;

 VAR_8.index = VAR_6;

 return FUNC_1(VAR_7, &VAR_8, VAR_4);
}
