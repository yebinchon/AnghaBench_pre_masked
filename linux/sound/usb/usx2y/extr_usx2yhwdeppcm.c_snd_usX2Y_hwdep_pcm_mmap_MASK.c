
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; struct usX2Ydev* vm_private_data; int * vm_ops; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct usX2Ydev {int chip_status; int hwdep_pcm_shm; } ;
struct snd_usX2Y_hwdep_pcm_shm {int dummy; } ;
struct snd_hwdep {struct usX2Ydev* private_data; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct snd_hwdep * VAR_7, struct file *VAR_8, struct vm_area_struct *VAR_9)
{
 unsigned long VAR_10 = (unsigned long)(VAR_9->vm_end - VAR_9->vm_start);
 struct usX2Ydev *VAR_11 = VAR_7->private_data;

 if (!(VAR_11->chip_status & VAR_3))
  return -VAR_0;


 if (VAR_10 > FUNC_0(sizeof(struct snd_usX2Y_hwdep_pcm_shm))) {
  FUNC_1("%lu > %lu\n", VAR_10, (unsigned long)sizeof(struct snd_usX2Y_hwdep_pcm_shm));
  return -VAR_1;
 }

 if (!VAR_11->hwdep_pcm_shm) {
  return -VAR_2;
 }
 VAR_9->vm_ops = &VAR_6;
 VAR_9->vm_flags |= VAR_5 | VAR_4;
 VAR_9->vm_private_data = VAR_7->private_data;
 return 0;
}
