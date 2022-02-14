
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * ops; } ;
struct snd_info_entry {scalar_t__ size; TYPE_3__ c; void* private_free; struct gus_proc_private* private_data; void* content; } ;
struct TYPE_6__ {TYPE_1__* banks_8; } ;
struct TYPE_8__ {int rom_present; scalar_t__ rom_memory; TYPE_2__ mem_alloc; } ;
struct snd_gus_card {TYPE_4__ gf1; int card; } ;
struct gus_proc_private {int address; scalar_t__ size; int rom; struct snd_gus_card* gus; } ;
struct TYPE_5__ {scalar_t__ size; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 struct gus_proc_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,struct snd_info_entry**) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,char*,int) ;

int FUNC_3(struct snd_gus_card * VAR_5)
{
 int VAR_6;
 char VAR_7[16];
 struct gus_proc_private *VAR_8;
 struct snd_info_entry *VAR_9;

 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_5->gf1.mem_alloc.banks_8[VAR_6].size > 0) {
   VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
   if (VAR_8 == ((void*)0))
    return -VAR_0;
   VAR_8->gus = VAR_5;
   FUNC_2(VAR_7, "gus-ram-%i", VAR_6);
   if (! FUNC_1(VAR_5->card, VAR_7, &VAR_9)) {
    VAR_9->content = VAR_2;
    VAR_9->private_data = VAR_8;
    VAR_9->private_free = VAR_3;
    VAR_9->c.ops = &VAR_4;
    VAR_8->address = VAR_5->gf1.mem_alloc.banks_8[VAR_6].address;
    VAR_8->size = VAR_9->size = VAR_5->gf1.mem_alloc.banks_8[VAR_6].size;
   }
  }
 }
 for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
  if (VAR_5->gf1.rom_present & (1 << VAR_6)) {
   VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1);
   if (VAR_8 == ((void*)0))
    return -VAR_0;
   VAR_8->rom = 1;
   VAR_8->gus = VAR_5;
   FUNC_2(VAR_7, "gus-rom-%i", VAR_6);
   if (! FUNC_1(VAR_5->card, VAR_7, &VAR_9)) {
    VAR_9->content = VAR_2;
    VAR_9->private_data = VAR_8;
    VAR_9->private_free = VAR_3;
    VAR_9->c.ops = &VAR_4;
    VAR_8->address = VAR_6 * 4096 * 1024;
    VAR_8->size = VAR_9->size = VAR_5->gf1.rom_memory;
   }
  }
 }
 return 0;
}
