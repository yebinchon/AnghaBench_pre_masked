
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_oss_midi {int use_lock; int name; } ;
struct seq_oss_devinfo {int dummy; } ;
struct midi_info {int device; int name; scalar_t__ capabilities; scalar_t__ dev_type; } ;


 int VAR_0 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(struct seq_oss_devinfo *VAR_1, int VAR_2, struct midi_info *VAR_3)
{
 struct seq_oss_midi *VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) == ((void*)0))
  return -VAR_0;
 VAR_3->device = VAR_2;
 VAR_3->dev_type = 0;
 VAR_3->capabilities = 0;
 FUNC_2(VAR_3->name, VAR_4->name, sizeof(VAR_3->name));
 FUNC_1(&VAR_4->use_lock);
 return 0;
}
