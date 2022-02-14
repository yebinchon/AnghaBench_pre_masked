
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {scalar_t__ playback_pid; scalar_t__ capture_pid; int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline int FUNC_2(struct snd_rme9652 *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = 1;

 FUNC_0(&VAR_0->lock, VAR_1);
 if ((VAR_0->playback_pid != VAR_0->capture_pid) &&
     (VAR_0->playback_pid >= 0) && (VAR_0->capture_pid >= 0)) {
  VAR_2 = 0;
 }
 FUNC_1(&VAR_0->lock, VAR_1);
 return VAR_2;
}
