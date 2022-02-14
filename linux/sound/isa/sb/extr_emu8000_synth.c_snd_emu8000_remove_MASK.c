
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_device {int card; struct snd_emu8000* driver_data; } ;
struct snd_emu8000 {int * memhdr; int * emu; scalar_t__ pcm; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct snd_seq_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct snd_seq_device *VAR_1 = FUNC_3(VAR_0);
 struct snd_emu8000 *VAR_2;

 if (VAR_1->driver_data == ((void*)0))
  return 0;

 VAR_2 = VAR_1->driver_data;
 if (VAR_2->pcm)
  FUNC_0(VAR_1->card, VAR_2->pcm);
 FUNC_1(VAR_2->emu);
 FUNC_2(VAR_2->memhdr);
 VAR_2->emu = ((void*)0);
 VAR_2->memhdr = ((void*)0);
 return 0;
}
