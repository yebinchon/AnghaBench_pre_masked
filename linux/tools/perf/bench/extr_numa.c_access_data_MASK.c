
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {scalar_t__ data_writes; scalar_t__ data_reads; } ;
struct TYPE_4__ {TYPE_1__ p; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline u64 FUNC_0(u64 *VAR_1, u64 VAR_2)
{
 if (VAR_0->p.data_reads)
  VAR_2 += *VAR_1;
 if (VAR_0->p.data_writes)
  *VAR_1 = VAR_2 + 1;
 return VAR_2;
}
