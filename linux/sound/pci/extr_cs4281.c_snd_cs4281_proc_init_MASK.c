
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ops; } ;
struct snd_info_entry {int size; TYPE_1__ c; struct cs4281* private_data; void* content; } ;
struct cs4281 {int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char*,struct snd_info_entry**) ;
 int FUNC_1 (int ,char*,struct cs4281*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct cs4281 *VAR_6)
{
 struct snd_info_entry *VAR_7;

 FUNC_1(VAR_6->card, "cs4281", VAR_6, VAR_5);
 if (! FUNC_0(VAR_6->card, "cs4281_BA0", &VAR_7)) {
  VAR_7->content = VAR_2;
  VAR_7->private_data = VAR_6;
  VAR_7->c.ops = &VAR_3;
  VAR_7->size = VAR_0;
 }
 if (! FUNC_0(VAR_6->card, "cs4281_BA1", &VAR_7)) {
  VAR_7->content = VAR_2;
  VAR_7->private_data = VAR_6;
  VAR_7->c.ops = &VAR_4;
  VAR_7->size = VAR_1;
 }
}
