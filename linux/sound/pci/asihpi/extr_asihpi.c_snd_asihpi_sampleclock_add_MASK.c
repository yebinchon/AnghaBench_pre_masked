
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct snd_kcontrol_new {int access; int get; int info; int put; int private_value; } ;
struct clk_cache {int has_local; int count; TYPE_1__* s; } ;
struct snd_card_asihpi {struct clk_cache cc; struct snd_card* card; } ;
struct snd_card {int dummy; } ;
struct hpi_control {int h_control; } ;
struct TYPE_2__ {size_t source; int index; void* name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_kcontrol_new*,struct hpi_control*,char*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol_new*,struct snd_card_asihpi*) ;
 scalar_t__ FUNC_2 (int ,int,size_t*) ;
 scalar_t__ FUNC_3 (int ,int,size_t,size_t*) ;
 void** VAR_7 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_5(struct snd_card_asihpi *VAR_16,
          struct hpi_control *VAR_17)
{
 struct snd_card *VAR_18;
 struct snd_kcontrol_new VAR_19;

 struct clk_cache *VAR_20;
 u32 VAR_21 = VAR_17->h_control;
 int VAR_22 = 0;
 int VAR_23, VAR_24;
 u16 VAR_25;

 if (FUNC_4(!VAR_16))
  return -VAR_0;
 VAR_18 = VAR_16->card;
 VAR_20 = &VAR_16->cc;
 VAR_19.private_value = VAR_17->h_control;

 VAR_20->has_local = 0;

 for (VAR_23 = 0; VAR_23 <= VAR_2; VAR_23++) {
  if (FUNC_2(VAR_21,
    VAR_23, &VAR_25))
   break;
  VAR_20->s[VAR_23].source = VAR_25;
  VAR_20->s[VAR_23].index = 0;
  VAR_20->s[VAR_23].name = VAR_7[VAR_25];
  if (VAR_25 == VAR_1)
   VAR_22 = 1;
  if (VAR_25 == VAR_3)
   VAR_20->has_local = 1;
 }
 if (VAR_22)

  for (VAR_24 = 1; VAR_24 < 8; VAR_24++) {
   if (FUNC_3(VAR_21,
    VAR_24, VAR_1,
    &VAR_25))
    break;
   VAR_20->s[VAR_23].source =
    VAR_1;
   VAR_20->s[VAR_23].index = VAR_24;
   VAR_20->s[VAR_23].name = VAR_7[
     VAR_24+VAR_2];
   VAR_23++;
  }
 VAR_20->count = VAR_23;

 FUNC_0(&VAR_19, VAR_17, "Source");
 VAR_19.access = VAR_5 ;
 VAR_19.info = VAR_14;
 VAR_19.get = VAR_13;
 VAR_19.put = VAR_15;
 if (FUNC_1(VAR_18, &VAR_19, VAR_16) < 0)
  return -VAR_0;


 if (VAR_20->has_local) {
  FUNC_0(&VAR_19, VAR_17, "Localrate");
  VAR_19.access = VAR_5 ;
  VAR_19.info = VAR_9;
  VAR_19.get = VAR_8;
  VAR_19.put = VAR_10;


  if (FUNC_1(VAR_18, &VAR_19, VAR_16) < 0)
   return -VAR_0;
 }

 FUNC_0(&VAR_19, VAR_17, "Rate");
 VAR_19.access =
     VAR_6 | VAR_4;
 VAR_19.info = VAR_12;
 VAR_19.get = VAR_11;

 return FUNC_1(VAR_18, &VAR_19, VAR_16);
}
