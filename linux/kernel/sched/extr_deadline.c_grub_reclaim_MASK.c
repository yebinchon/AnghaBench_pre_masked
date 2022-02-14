
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sched_dl_entity {scalar_t__ dl_bw; } ;
struct TYPE_2__ {scalar_t__ this_bw; scalar_t__ running_bw; scalar_t__ bw_ratio; scalar_t__ extra_bw; } ;
struct rq {TYPE_1__ dl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_3, struct rq *VAR_4, struct sched_dl_entity *VAR_5)
{
 u64 VAR_6 = VAR_4->dl.this_bw - VAR_4->dl.running_bw;
 u64 VAR_7;
 u64 VAR_8 = (VAR_5->dl_bw * VAR_4->dl.bw_ratio) >> VAR_2;
 if (VAR_6 + VAR_4->dl.extra_bw > VAR_1 - VAR_8)
  VAR_7 = VAR_8;
 else
  VAR_7 = VAR_1 - VAR_6 - VAR_4->dl.extra_bw;

 return (VAR_3 * VAR_7) >> VAR_0;
}
