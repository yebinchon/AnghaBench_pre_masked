
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {int dummy; } ;
struct snd_bebob {int card; } ;


 struct snd_info_entry* FUNC_0 (int ,char const*,struct snd_info_entry*) ;
 int FUNC_1 (struct snd_info_entry*,struct snd_bebob*,void (*) (struct snd_info_entry*,struct snd_info_buffer*)) ;

__attribute__((used)) static void
FUNC_2(struct snd_bebob *VAR_0, struct snd_info_entry *VAR_1, const char *VAR_2,
  void (*VAR_3)(struct snd_info_entry *VAR_4, struct snd_info_buffer *VAR_5))
{
 struct snd_info_entry *VAR_6;

 VAR_6 = FUNC_0(VAR_0->card, VAR_2, VAR_1);
 if (VAR_6)
  FUNC_1(VAR_6, VAR_0, VAR_3);
}
