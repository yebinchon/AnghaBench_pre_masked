
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_korg1212 {scalar_t__ playback_pid; scalar_t__ capture_pid; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_korg1212 *VAR_0)
{
 if (VAR_0->playback_pid != VAR_0->capture_pid &&
     VAR_0->playback_pid >= 0 && VAR_0->capture_pid >= 0)
  return 0;

 return 1;
}
