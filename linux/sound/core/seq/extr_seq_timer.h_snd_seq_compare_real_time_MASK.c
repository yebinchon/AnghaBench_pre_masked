
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
typedef TYPE_1__ snd_seq_real_time_t ;



__attribute__((used)) static inline int FUNC_0(snd_seq_real_time_t *VAR_0, snd_seq_real_time_t *VAR_1)
{

 if (VAR_0->tv_sec > VAR_1->tv_sec)
  return 1;
 if ((VAR_0->tv_sec == VAR_1->tv_sec) && (VAR_0->tv_nsec >= VAR_1->tv_nsec))
  return 1;
 return 0;
}
