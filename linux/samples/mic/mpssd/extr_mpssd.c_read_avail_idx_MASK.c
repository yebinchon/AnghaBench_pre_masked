
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mic_vring {TYPE_1__* info; } ;
typedef int __u16 ;
struct TYPE_2__ {int avail_idx; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline __u16 FUNC_1(struct mic_vring *VAR_0)
{
 return FUNC_0(VAR_0->info->avail_idx);
}
