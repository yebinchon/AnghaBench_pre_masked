
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_compr_stream {TYPE_2__* device; TYPE_1__* runtime; } ;
struct snd_compr_file {struct snd_compr_stream stream; } ;
struct file {struct snd_compr_file* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int state; size_t fragment_size; int sleep; } ;


 int VAR_0 ;





 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct file*,int *,int *) ;
 int FUNC_3 (char*,unsigned long) ;
 scalar_t__ FUNC_4 (int) ;
 size_t FUNC_5 (struct snd_compr_stream*) ;
 int FUNC_6 (struct snd_compr_stream*) ;

__attribute__((used)) static __poll_t FUNC_7(struct file *VAR_2, poll_table *VAR_3)
{
 struct snd_compr_file *VAR_4 = VAR_2->private_data;
 struct snd_compr_stream *VAR_5;
 size_t VAR_6;
 __poll_t VAR_7 = 0;

 if (FUNC_4(!VAR_4))
  return VAR_0;

 VAR_5 = &VAR_4->stream;

 FUNC_0(&VAR_5->device->lock);

 switch (VAR_5->runtime->state) {
 case 132:
 case 128:
  VAR_7 = FUNC_6(VAR_5) | VAR_0;
  goto out;
 default:
  break;
 }

 FUNC_2(VAR_2, &VAR_5->runtime->sleep, VAR_3);

 VAR_6 = FUNC_5(VAR_5);
 FUNC_3("avail is %ld\n", (unsigned long)VAR_6);

 switch (VAR_5->runtime->state) {
 case 133:



  VAR_7 = FUNC_6(VAR_5);
  VAR_5->runtime->state = VAR_1;
  break;
 case 129:
 case 130:
 case 131:
  if (VAR_6 >= VAR_5->runtime->fragment_size)
   VAR_7 = FUNC_6(VAR_5);
  break;
 default:
  VAR_7 = FUNC_6(VAR_5) | VAR_0;
  break;
 }
out:
 FUNC_1(&VAR_5->device->lock);
 return VAR_7;
}
