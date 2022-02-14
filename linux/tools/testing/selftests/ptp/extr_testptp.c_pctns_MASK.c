
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptp_clock_time {long long sec; scalar_t__ nsec; } ;
typedef scalar_t__ int64_t ;



__attribute__((used)) static int64_t FUNC_0(struct ptp_clock_time *VAR_0)
{
 return VAR_0->sec * 1000000000LL + VAR_0->nsec;
}
