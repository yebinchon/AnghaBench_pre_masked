
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int direction; struct snd_compr_runtime* runtime; struct snd_compr* device; int private_data; TYPE_1__* ops; int error_work; } ;
struct snd_compr_runtime {TYPE_2__ stream; int sleep; int state; } ;
struct snd_compr_file {TYPE_2__ stream; int sleep; int state; } ;
struct snd_compr {int direction; int card; int lock; TYPE_1__* ops; int private_data; } ;
struct inode {int dummy; } ;
struct file {int f_flags; void* private_data; } ;
typedef enum snd_compr_direction { ____Placeholder_snd_compr_direction } snd_compr_direction ;
struct TYPE_3__ {int (* open ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_compr_runtime*) ;
 struct snd_compr_runtime* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 struct snd_compr* FUNC_10 (int ,int ) ;
 int VAR_13 ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_14, struct file *VAR_15)
{
 struct snd_compr *VAR_16;
 struct snd_compr_file *VAR_17;
 struct snd_compr_runtime *VAR_18;
 enum snd_compr_direction VAR_19;
 int VAR_20 = FUNC_1(VAR_14);
 int VAR_21;

 if ((VAR_15->f_flags & VAR_5) == VAR_7)
  VAR_19 = VAR_11;
 else if ((VAR_15->f_flags & VAR_5) == VAR_6)
  VAR_19 = VAR_10;
 else
  return -VAR_1;

 if (VAR_20 == VAR_13)
  VAR_16 = FUNC_10(FUNC_2(VAR_14),
     VAR_8);
 else
  return -VAR_0;

 if (VAR_16 == ((void*)0)) {
  FUNC_8("no device data!!!\n");
  return -VAR_2;
 }

 if (VAR_19 != VAR_16->direction) {
  FUNC_8("this device doesn't support this direction\n");
  FUNC_9(VAR_16->card);
  return -VAR_1;
 }

 VAR_17 = FUNC_5(sizeof(*VAR_17), VAR_4);
 if (!VAR_17) {
  FUNC_9(VAR_16->card);
  return -VAR_3;
 }

 FUNC_0(&VAR_17->stream.error_work, VAR_12);

 VAR_17->stream.ops = VAR_16->ops;
 VAR_17->stream.direction = VAR_19;
 VAR_17->stream.private_data = VAR_16->private_data;
 VAR_17->stream.device = VAR_16;
 VAR_18 = FUNC_5(sizeof(*VAR_18), VAR_4);
 if (!VAR_18) {
  FUNC_4(VAR_17);
  FUNC_9(VAR_16->card);
  return -VAR_3;
 }
 VAR_18->state = VAR_9;
 FUNC_3(&VAR_18->sleep);
 VAR_17->stream.runtime = VAR_18;
 VAR_15->private_data = (void *)VAR_17;
 FUNC_6(&VAR_16->lock);
 VAR_21 = VAR_16->ops->open(&VAR_17->stream);
 FUNC_7(&VAR_16->lock);
 if (VAR_21) {
  FUNC_4(VAR_18);
  FUNC_4(VAR_17);
 }
 FUNC_9(VAR_16->card);
 return VAR_21;
}
