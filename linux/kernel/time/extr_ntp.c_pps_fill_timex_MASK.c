
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __kernel_timex {scalar_t__ stbcnt; scalar_t__ errcnt; scalar_t__ calcnt; scalar_t__ jitcnt; scalar_t__ stabil; scalar_t__ shift; scalar_t__ jitter; scalar_t__ ppsfreq; } ;



__attribute__((used)) static inline void FUNC_0(struct __kernel_timex *VAR_0)
{

 VAR_0->ppsfreq = 0;
 VAR_0->jitter = 0;
 VAR_0->shift = 0;
 VAR_0->stabil = 0;
 VAR_0->jitcnt = 0;
 VAR_0->calcnt = 0;
 VAR_0->errcnt = 0;
 VAR_0->stbcnt = 0;
}
