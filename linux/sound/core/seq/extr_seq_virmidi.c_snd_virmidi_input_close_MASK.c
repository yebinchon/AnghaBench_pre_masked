
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_virmidi_dev {int filelist_sem; int filelist_lock; } ;
struct snd_virmidi {int parser; int list; } ;
struct snd_rawmidi_substream {TYPE_2__* runtime; TYPE_1__* rmidi; } ;
struct TYPE_4__ {struct snd_virmidi* private_data; } ;
struct TYPE_3__ {struct snd_virmidi_dev* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_virmidi*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_virmidi_dev *VAR_1 = VAR_0->rmidi->private_data;
 struct snd_virmidi *VAR_2 = VAR_0->runtime->private_data;

 FUNC_0(&VAR_1->filelist_sem);
 FUNC_5(&VAR_1->filelist_lock);
 FUNC_2(&VAR_2->list);
 FUNC_6(&VAR_1->filelist_lock);
 FUNC_4(&VAR_1->filelist_sem);
 FUNC_3(VAR_2->parser);
 VAR_0->runtime->private_data = ((void*)0);
 FUNC_1(VAR_2);
 return 0;
}
