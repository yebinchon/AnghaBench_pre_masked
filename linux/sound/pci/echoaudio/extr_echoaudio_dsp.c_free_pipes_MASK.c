
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct echoaudio {int pipe_alloc_mask; int pipe_cyclic_mask; } ;
struct audiopipe {int index; scalar_t__ state; int interleave; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct echoaudio*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct echoaudio *VAR_2, struct audiopipe *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (FUNC_1(!FUNC_0(VAR_2, VAR_3->index)))
  return -VAR_0;
 if (FUNC_1(VAR_3->state != VAR_1))
  return -VAR_0;

 for (VAR_4 = VAR_5 = 0; VAR_5 < VAR_3->interleave; VAR_5++)
  VAR_4 |= 1 << (VAR_3->index + VAR_5);

 VAR_2->pipe_alloc_mask &= ~VAR_4;
 VAR_2->pipe_cyclic_mask &= ~VAR_4;
 return 0;
}
