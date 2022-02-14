
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_info_entry {struct snd_ac97* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct TYPE_3__ {int* unchained; int* chained; scalar_t__* id; } ;
struct TYPE_4__ {TYPE_1__ ad18xx; } ;
struct snd_ac97 {int id; int page_mutex; TYPE_2__ spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ac97*,struct snd_info_buffer*,int) ;
 int FUNC_3 (struct snd_ac97*,int ,int,int) ;
 int FUNC_4 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_5(struct snd_info_entry *VAR_2, struct snd_info_buffer *VAR_3)
{
 struct snd_ac97 *VAR_4 = VAR_2->private_data;

 FUNC_0(&VAR_4->page_mutex);
 if ((VAR_4->id & 0xffffff40) == VAR_1) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
   if (VAR_4->spec.ad18xx.id[VAR_5]) {

    FUNC_3(VAR_4, VAR_0, 0x7000,
           VAR_4->spec.ad18xx.unchained[VAR_5] | VAR_4->spec.ad18xx.chained[VAR_5]);
    FUNC_2(VAR_4, VAR_3, VAR_5);
    FUNC_4(VAR_3, "\n\n");
   }

  FUNC_3(VAR_4, VAR_0, 0x7000, 0x7000);

  FUNC_4(VAR_3, "\nAD18XX configuration\n");
  FUNC_4(VAR_3, "Unchained        : 0x%04x,0x%04x,0x%04x\n",
   VAR_4->spec.ad18xx.unchained[0],
   VAR_4->spec.ad18xx.unchained[1],
   VAR_4->spec.ad18xx.unchained[2]);
  FUNC_4(VAR_3, "Chained          : 0x%04x,0x%04x,0x%04x\n",
   VAR_4->spec.ad18xx.chained[0],
   VAR_4->spec.ad18xx.chained[1],
   VAR_4->spec.ad18xx.chained[2]);
 } else {
  FUNC_2(VAR_4, VAR_3, 0);
 }
 FUNC_1(&VAR_4->page_mutex);
}
