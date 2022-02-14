
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long u8 ;
typedef long long u64 ;
typedef long long u32 ;
struct TYPE_2__ {long long target; long long mtu_time; int p_inc; int p_dec; void* interval; } ;
struct cake_tin_data {int flow_quantum; long long tin_rate_bps; long long tin_rate_ns; long long tin_rate_shft; TYPE_1__ cparams; } ;


 scalar_t__ VAR_0 ;
 long long FUNC_0 (long long,void*) ;
 void* FUNC_1 (long long const,int) ;
 long long FUNC_2 (long long,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct cake_tin_data *VAR_1, u64 VAR_2, u32 VAR_3,
     u64 VAR_4, u64 VAR_5)
{



 static const u64 VAR_6 = 64;
 u32 VAR_7 = VAR_3;
 u64 VAR_8;
 u8 VAR_9 = 0;
 u64 VAR_10 = 0;

 VAR_1->flow_quantum = 1514;
 if (VAR_2) {
  VAR_1->flow_quantum = FUNC_1(FUNC_2(VAR_2 >> 12, 1514ULL), 300ULL);
  VAR_9 = 34;
  VAR_10 = ((u64)VAR_0) << VAR_9;
  VAR_10 = FUNC_0(VAR_10, FUNC_1(VAR_6, VAR_2));
  while (!!(VAR_10 >> 34)) {
   VAR_10 >>= 1;
   VAR_9--;
  }
 }

 VAR_1->tin_rate_bps = VAR_2;
 VAR_1->tin_rate_ns = VAR_10;
 VAR_1->tin_rate_shft = VAR_9;

 VAR_8 = (VAR_7 * VAR_10) >> VAR_9;

 VAR_1->cparams.target = FUNC_1((VAR_8 * 3) / 2, VAR_4);
 VAR_1->cparams.interval = FUNC_1(VAR_5 +
         VAR_1->cparams.target - VAR_4,
         VAR_1->cparams.target * 2);
 VAR_1->cparams.mtu_time = VAR_8;
 VAR_1->cparams.p_inc = 1 << 24;
 VAR_1->cparams.p_dec = 1 << 20;
}
