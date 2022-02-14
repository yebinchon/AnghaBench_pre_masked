
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_cs46xx {int reg_lock; TYPE_1__* card; struct dsp_spos_instance* dsp_spos_instance; } ;
struct dsp_symbol_entry {int address; } ;
struct dsp_spos_instance {struct dsp_scb_descriptor* the_null_scb; } ;
struct dsp_scb_descriptor {int address; char* scb_name; struct dsp_scb_descriptor* parent_scb_ptr; struct dsp_scb_descriptor* sub_list_ptr; struct dsp_scb_descriptor* next_scb_ptr; struct dsp_symbol_entry* task_entry; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct dsp_scb_descriptor* FUNC_0 (struct snd_cs46xx*,char*,int*,int) ;
 int FUNC_1 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_2 (struct snd_cs46xx*,struct dsp_scb_descriptor*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static struct dsp_scb_descriptor *
FUNC_8 (struct snd_cs46xx *VAR_4, char * VAR_5, u32 * VAR_6, u32 VAR_7,
                         struct dsp_symbol_entry * VAR_8,
                         struct dsp_scb_descriptor * VAR_9,
                         int VAR_10)
{
 struct dsp_spos_instance * VAR_11 = VAR_4->dsp_spos_instance;
 struct dsp_scb_descriptor * VAR_12;

 unsigned long VAR_13;

 if (FUNC_5(!VAR_11->the_null_scb))
  return ((void*)0);


 VAR_6[VAR_3] =
  (VAR_11->the_null_scb->address << 0x10) | VAR_11->the_null_scb->address;

 VAR_6[VAR_2] &= 0xFFFF0000;
 VAR_6[VAR_2] |= VAR_8->address;

 FUNC_3(VAR_4->card->dev, "dsp_spos: creating SCB <%s>\n", VAR_5);

 VAR_12 = FUNC_0(VAR_4,VAR_5,VAR_6,VAR_7);


 VAR_12->sub_list_ptr = VAR_11->the_null_scb;
 VAR_12->next_scb_ptr = VAR_11->the_null_scb;

 VAR_12->parent_scb_ptr = VAR_9;
 VAR_12->task_entry = VAR_8;



 if (VAR_12->parent_scb_ptr) {
  if (VAR_10 == VAR_0) {
   if (FUNC_5(VAR_12->parent_scb_ptr->next_scb_ptr !=
           VAR_11->the_null_scb))
    return ((void*)0);

   VAR_12->parent_scb_ptr->next_scb_ptr = VAR_12;

  } else if (VAR_10 == VAR_1) {
   if (FUNC_5(VAR_12->parent_scb_ptr->sub_list_ptr !=
           VAR_11->the_null_scb))
    return ((void*)0);

   VAR_12->parent_scb_ptr->sub_list_ptr = VAR_12;
  } else {
   FUNC_4();
  }

  FUNC_6(&VAR_4->reg_lock, VAR_13);


  FUNC_2(VAR_4,VAR_12->parent_scb_ptr);

  FUNC_7(&VAR_4->reg_lock, VAR_13);
 }


 FUNC_1 (VAR_4,VAR_12);

 return VAR_12;
}
