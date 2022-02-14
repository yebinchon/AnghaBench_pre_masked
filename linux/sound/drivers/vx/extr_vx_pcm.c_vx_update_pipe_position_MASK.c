
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vx_rmh {int* Stat; } ;
struct vx_pipe {int cur_count; int position; int transferred; int number; int is_capture; } ;
struct vx_core {int dummy; } ;
struct snd_pcm_runtime {int buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct vx_rmh*,int ) ;
 int FUNC_1 (struct vx_core*,struct vx_rmh*) ;
 int FUNC_2 (struct vx_rmh*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct vx_core *VAR_1,
       struct snd_pcm_runtime *VAR_2,
       struct vx_pipe *VAR_3)
{
 struct vx_rmh VAR_4;
 int VAR_5, VAR_6;
 u64 VAR_7;

 FUNC_0(&VAR_4, VAR_0);
 FUNC_2(&VAR_4, VAR_3->is_capture, VAR_3->number, 0);
 VAR_5 = FUNC_1(VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_7 = ((u64)(VAR_4.Stat[0] & 0xfffff) << 24) | (u64)VAR_4.Stat[1];
 VAR_6 = (int)(VAR_7 - VAR_3->cur_count);
 VAR_3->cur_count = VAR_7;
 VAR_3->position += VAR_6;
 if (VAR_3->position >= (int)VAR_2->buffer_size)
  VAR_3->position %= VAR_2->buffer_size;
 VAR_3->transferred += VAR_6;
 return 0;
}
