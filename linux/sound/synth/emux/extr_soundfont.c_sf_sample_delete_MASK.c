
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soundfont {struct snd_sf_sample* samples; } ;
struct snd_sf_sample {struct snd_sf_sample* next; } ;
struct snd_sf_list {int dummy; } ;


 int FUNC_0 (struct snd_sf_sample*) ;

__attribute__((used)) static void
FUNC_1(struct snd_sf_list *VAR_0, struct snd_soundfont *VAR_1,
   struct snd_sf_sample *VAR_2)
{

 if (VAR_2 == VAR_1->samples) {
  VAR_1->samples = VAR_2->next;
  FUNC_0(VAR_2);
 }
}
