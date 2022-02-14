
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sf_list {int open_client; scalar_t__ sample_locked; scalar_t__ zone_locked; scalar_t__ sample_counter; scalar_t__ zone_counter; scalar_t__ fonts_size; int * fonts; int * currsf; scalar_t__ mem_used; int presets; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct snd_sf_list *VAR_0)
{
 FUNC_0(VAR_0->presets, 0, sizeof(VAR_0->presets));

 VAR_0->mem_used = 0;
 VAR_0->currsf = ((void*)0);
 VAR_0->open_client = -1;
 VAR_0->fonts = ((void*)0);
 VAR_0->fonts_size = 0;
 VAR_0->zone_counter = 0;
 VAR_0->sample_counter = 0;
 VAR_0->zone_locked = 0;
 VAR_0->sample_locked = 0;
}
