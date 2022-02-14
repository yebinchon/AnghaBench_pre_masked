
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_info_entry {struct snd_bebob* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_bebob_meter_spec {int num; scalar_t__ (* get ) (struct snd_bebob*,int *,unsigned int) ;int * labels; } ;
struct snd_bebob {TYPE_1__* spec; } ;
struct TYPE_2__ {struct snd_bebob_meter_spec* meter; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct snd_info_buffer*,char*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct snd_bebob*,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct snd_info_entry *VAR_1,
   struct snd_info_buffer *VAR_2)
{
 struct snd_bebob *VAR_3 = VAR_1->private_data;
 const struct snd_bebob_meter_spec *VAR_4 = VAR_3->spec->meter;
 u32 *VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_4 == ((void*)0))
  return;

 VAR_8 = VAR_4->num * 2;
 VAR_9 = VAR_8 * sizeof(u32);
 VAR_5 = FUNC_1(VAR_9, VAR_0);
 if (VAR_5 == ((void*)0))
  return;

 if (VAR_4->get(VAR_3, VAR_5, VAR_9) < 0)
  goto end;

 for (VAR_6 = 0, VAR_7 = 1; VAR_6 < VAR_8; VAR_6++) {
  FUNC_2(VAR_2, "%s %d:\t%d\n",
       VAR_4->labels[VAR_6 / 2], VAR_7++, VAR_5[VAR_6]);
  if ((VAR_6 + 1 < VAR_8 - 1) &&
      (FUNC_3(VAR_4->labels[VAR_6 / 2],
       VAR_4->labels[(VAR_6 + 1) / 2]) != 0))
   VAR_7 = 1;
 }
end:
 FUNC_0(VAR_5);
}
