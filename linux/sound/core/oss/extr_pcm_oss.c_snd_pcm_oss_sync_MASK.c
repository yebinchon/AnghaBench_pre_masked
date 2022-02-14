
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {unsigned int f_flags; struct snd_pcm_runtime* runtime; int pcm; int mmap_count; } ;
struct TYPE_4__ {scalar_t__ buffer_used; int period_bytes; int buffer; scalar_t__ period_ptr; int prepare; int params_lock; int rw_ref; int format; } ;
struct snd_pcm_runtime {size_t period_size; scalar_t__ access; TYPE_2__ oss; TYPE_1__* control; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
typedef int snd_pcm_format_t ;
struct TYPE_3__ {size_t appl_ptr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (int ,int,size_t) ;
 int FUNC_9 (struct snd_pcm_substream*,int ,int *) ;
 int FUNC_10 (struct snd_pcm_substream*,int *,size_t) ;
 int FUNC_11 (struct snd_pcm_substream*,int *,size_t) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct snd_pcm_substream*) ;
 int FUNC_14 (struct snd_pcm_substream*,size_t) ;

__attribute__((used)) static int FUNC_15(struct snd_pcm_oss_file *VAR_8)
{
 int VAR_9 = 0;
 unsigned int VAR_10;
 struct snd_pcm_substream *VAR_11;
 struct snd_pcm_runtime *VAR_12;
 snd_pcm_format_t VAR_13;
 unsigned long VAR_14;
 size_t VAR_15;

 VAR_11 = VAR_8->streams[VAR_7];
 if (VAR_11 != ((void*)0)) {
  VAR_12 = VAR_11->runtime;
  if (FUNC_2(&VAR_11->mmap_count))
   goto __direct;
  if ((VAR_9 = FUNC_13(VAR_11)) < 0)
   return VAR_9;
  FUNC_1(&VAR_12->oss.rw_ref);
  if (FUNC_4(&VAR_12->oss.params_lock)) {
   FUNC_0(&VAR_12->oss.rw_ref);
   return -VAR_0;
  }
  VAR_13 = FUNC_12(VAR_12->oss.format);
  VAR_14 = FUNC_7(VAR_13);
  if (VAR_12->oss.buffer_used > 0) {



   VAR_15 = (8 * (VAR_12->oss.period_bytes - VAR_12->oss.buffer_used) + 7) / VAR_14;
   FUNC_8(VAR_13,
         VAR_12->oss.buffer + VAR_12->oss.buffer_used,
         VAR_15);
   VAR_9 = FUNC_14(VAR_11, VAR_12->oss.period_bytes);
   if (VAR_9 < 0)
    goto unlock;
  } else if (VAR_12->oss.period_ptr > 0) {



   VAR_15 = VAR_12->oss.period_bytes - VAR_12->oss.period_ptr;
   FUNC_8(VAR_13,
         VAR_12->oss.buffer,
         VAR_15 * 8 / VAR_14);
   VAR_9 = FUNC_14(VAR_11, VAR_15);
   if (VAR_9 < 0)
    goto unlock;
  }




  VAR_15 = VAR_12->control->appl_ptr % VAR_12->period_size;
  if (VAR_15 > 0) {
   VAR_15 = VAR_12->period_size - VAR_15;
   if (VAR_12->access == VAR_2)
    FUNC_10(VAR_11, ((void*)0), VAR_15);
   else if (VAR_12->access == VAR_3)
    FUNC_11(VAR_11, ((void*)0), VAR_15);
  }
unlock:
  FUNC_5(&VAR_12->oss.params_lock);
  FUNC_0(&VAR_12->oss.rw_ref);
  if (VAR_9 < 0)
   return VAR_9;



       __direct:
  VAR_10 = VAR_11->f_flags;
  VAR_11->f_flags &= ~VAR_1;
  VAR_9 = FUNC_9(VAR_11, VAR_4, ((void*)0));
  VAR_11->f_flags = VAR_10;
  if (VAR_9 < 0)
   return VAR_9;
  FUNC_3(&VAR_12->oss.params_lock);
  VAR_12->oss.prepare = 1;
  FUNC_5(&VAR_12->oss.params_lock);
 }

 VAR_11 = VAR_8->streams[VAR_6];
 if (VAR_11 != ((void*)0)) {
  if ((VAR_9 = FUNC_13(VAR_11)) < 0)
   return VAR_9;
  VAR_12 = VAR_11->runtime;
  VAR_9 = FUNC_9(VAR_11, VAR_5, ((void*)0));
  if (VAR_9 < 0)
   return VAR_9;
  FUNC_3(&VAR_12->oss.params_lock);
  VAR_12->oss.buffer_used = 0;
  VAR_12->oss.prepare = 1;
  FUNC_5(&VAR_12->oss.params_lock);
 }
 return 0;
}
