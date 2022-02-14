
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p; } ;
struct snd_kcontrol_new {int access; TYPE_1__ tlv; int put; int get; int info; } ;
struct snd_card_asihpi {struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct snd_card_asihpi *VAR_6,
    struct hpi_control *VAR_7)
{
 struct snd_card *VAR_8 = VAR_6->card;
 struct snd_kcontrol_new VAR_9;


 FUNC_0(&VAR_9, VAR_7, "Level");
 VAR_9.access = VAR_0 |
    VAR_1;
 VAR_9.info = VAR_4;
 VAR_9.get = VAR_3;
 VAR_9.put = VAR_5;
 VAR_9.tlv.p = VAR_2;

 return FUNC_1(VAR_8, &VAR_9, VAR_6);
}
