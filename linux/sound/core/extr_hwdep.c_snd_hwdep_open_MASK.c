
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wait_queue_entry_t ;
struct TYPE_4__ {int (* open ) (struct snd_hwdep*,struct file*) ;int (* release ) (struct snd_hwdep*,struct file*) ;} ;
struct snd_hwdep {scalar_t__ used; TYPE_2__* card; int open_mutex; TYPE_1__ ops; int open_wait; scalar_t__ exclusive; } ;
struct inode {int dummy; } ;
struct file {int f_flags; struct snd_hwdep* private_data; } ;
struct TYPE_5__ {int module; scalar_t__ shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int *) ;
 int VAR_11 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,struct file*) ;
 int FUNC_12 (TYPE_2__*) ;
 struct snd_hwdep* FUNC_13 (int ,int ) ;
 struct snd_hwdep* FUNC_14 (int ,int ) ;
 int VAR_12 ;
 int FUNC_15 (struct snd_hwdep*,struct file*) ;
 int FUNC_16 (struct snd_hwdep*,struct file*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_13, struct file * VAR_14)
{
 int VAR_15 = FUNC_1(VAR_13);
 struct snd_hwdep *VAR_16;
 int VAR_17;
 wait_queue_entry_t VAR_18;

 if (VAR_15 == VAR_12) {
  VAR_16 = FUNC_13(FUNC_2(VAR_13),
        VAR_7);





 } else
  return -VAR_4;
 if (VAR_16 == ((void*)0))
  return -VAR_3;

 if (!FUNC_17(VAR_16->card->module)) {
  FUNC_12(VAR_16->card);
  return -VAR_2;
 }

 FUNC_3(&VAR_18, VAR_11);
 FUNC_0(&VAR_16->open_wait, &VAR_18);
 FUNC_5(&VAR_16->open_mutex);
 while (1) {
  if (VAR_16->exclusive && VAR_16->used > 0) {
   VAR_17 = -VAR_1;
   break;
  }
  if (!VAR_16->ops.open) {
   VAR_17 = 0;
   break;
  }
  VAR_17 = VAR_16->ops.open(VAR_16, VAR_14);
  if (VAR_17 >= 0)
   break;
  if (VAR_17 == -VAR_0) {
   if (VAR_14->f_flags & VAR_6) {
    VAR_17 = -VAR_1;
    break;
   }
  } else
   break;
  FUNC_9(VAR_10);
  FUNC_6(&VAR_16->open_mutex);
  FUNC_8();
  FUNC_5(&VAR_16->open_mutex);
  if (VAR_16->card->shutdown) {
   VAR_17 = -VAR_3;
   break;
  }
  if (FUNC_10(VAR_11)) {
   VAR_17 = -VAR_5;
   break;
  }
 }
 FUNC_7(&VAR_16->open_wait, &VAR_18);
 if (VAR_17 >= 0) {
  VAR_17 = FUNC_11(VAR_16->card, VAR_14);
  if (VAR_17 >= 0) {
   VAR_14->private_data = VAR_16;
   VAR_16->used++;
  } else {
   if (VAR_16->ops.release)
    VAR_16->ops.release(VAR_16, VAR_14);
  }
 }
 FUNC_6(&VAR_16->open_mutex);
 if (VAR_17 < 0)
  FUNC_4(VAR_16->card->module);
 FUNC_12(VAR_16->card);
 return VAR_17;
}
