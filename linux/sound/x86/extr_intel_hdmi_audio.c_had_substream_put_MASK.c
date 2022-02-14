
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int substream_refcount; } ;
struct snd_intelhad {int had_spinlock; TYPE_1__ stream_info; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct snd_intelhad *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->had_spinlock, VAR_1);
 VAR_0->stream_info.substream_refcount--;
 FUNC_1(&VAR_0->had_spinlock, VAR_1);
}
