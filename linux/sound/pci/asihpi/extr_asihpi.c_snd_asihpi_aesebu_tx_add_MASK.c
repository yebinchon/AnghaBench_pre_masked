
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int put; int get; int info; int access; } ;
struct snd_card_asihpi {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct snd_card_asihpi *VAR_4,
        struct hpi_control *VAR_5)
{
 struct snd_card *VAR_6 = VAR_4->card;
 struct snd_kcontrol_new VAR_7;

 FUNC_0(&VAR_7, VAR_5, "Format");
 VAR_7.access = VAR_0;
 VAR_7.info = VAR_1;
 VAR_7.get = VAR_2;
 VAR_7.put = VAR_3;

 return FUNC_1(VAR_6, &VAR_7, VAR_4);
}
