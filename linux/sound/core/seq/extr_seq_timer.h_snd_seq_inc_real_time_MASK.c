
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
typedef TYPE_1__ snd_seq_real_time_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(snd_seq_real_time_t *VAR_0, snd_seq_real_time_t *VAR_1)
{
 VAR_0->tv_sec += VAR_1->tv_sec;
 VAR_0->tv_nsec += VAR_1->tv_nsec;
 FUNC_0(VAR_0);
}
