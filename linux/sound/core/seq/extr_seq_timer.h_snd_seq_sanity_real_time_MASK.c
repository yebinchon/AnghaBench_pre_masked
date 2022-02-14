
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tv_nsec; int tv_sec; } ;
typedef TYPE_1__ snd_seq_real_time_t ;



__attribute__((used)) static inline void FUNC_0(snd_seq_real_time_t *VAR_0)
{
 while (VAR_0->tv_nsec >= 1000000000) {

  VAR_0->tv_nsec -= 1000000000;
                VAR_0->tv_sec++;
        }
}
