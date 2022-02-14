
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ samples_per_sec; } ;
struct TYPE_5__ {TYPE_1__ info; } ;
typedef TYPE_2__ audio_t ;



__attribute__((used)) static inline double FUNC_0(const audio_t *VAR_0, uint64_t VAR_1)
{
 double VAR_2 = (double)VAR_1;
 VAR_2 /= 1000000000.0;
 VAR_2 *= (double)VAR_0->info.samples_per_sec;

 return VAR_2;
}
