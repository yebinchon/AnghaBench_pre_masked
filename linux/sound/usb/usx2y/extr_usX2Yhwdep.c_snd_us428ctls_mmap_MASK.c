
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; struct usX2Ydev* vm_private_data; int * vm_ops; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct usX2Ydev {int chip_status; TYPE_1__* us428ctls_sharedmem; int us428ctls_wait_queue_head; } ;
struct us428ctls_sharedmem {int dummy; } ;
struct snd_hwdep {struct usX2Ydev* private_data; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int CtlSnapShotLast; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (char*,unsigned long,unsigned long) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct snd_hwdep * VAR_8, struct file *VAR_9, struct vm_area_struct *VAR_10)
{
 unsigned long VAR_11 = (unsigned long)(VAR_10->vm_end - VAR_10->vm_start);
 struct usX2Ydev *VAR_12 = VAR_8->private_data;



  if (!(VAR_12->chip_status & VAR_4))
  return -VAR_0;


        if (VAR_11 > FUNC_0(sizeof(struct us428ctls_sharedmem))) {
  FUNC_4( "%lu > %lu\n", VAR_11, (unsigned long)sizeof(struct us428ctls_sharedmem));
                return -VAR_1;
 }

 if (!VAR_12->us428ctls_sharedmem) {
  FUNC_2(&VAR_12->us428ctls_wait_queue_head);
  VAR_12->us428ctls_sharedmem = FUNC_1(sizeof(struct us428ctls_sharedmem), VAR_3);
  if (!VAR_12->us428ctls_sharedmem)
   return -VAR_2;
  FUNC_3(VAR_12->us428ctls_sharedmem, -1, sizeof(struct us428ctls_sharedmem));
  VAR_12->us428ctls_sharedmem->CtlSnapShotLast = -2;
 }
 VAR_10->vm_ops = &VAR_7;
 VAR_10->vm_flags |= VAR_6 | VAR_5;
 VAR_10->vm_private_data = VAR_8->private_data;
 return 0;
}
