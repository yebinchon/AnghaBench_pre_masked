
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long tv_nsec; } ;
typedef TYPE_1__ snd_seq_real_time_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(snd_seq_real_time_t *VAR_0, unsigned long VAR_1)
{
 VAR_0->tv_nsec += VAR_1;
 FUNC_0(VAR_0);
}
