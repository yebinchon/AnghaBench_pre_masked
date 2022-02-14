
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct tcp_sock {int mss_cache; int rate_interval_us; int rate_delivered; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static u64 FUNC_2(const struct tcp_sock *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->rate_delivered);
 u32 VAR_3 = FUNC_0(VAR_1->rate_interval_us);
 u64 VAR_4 = 0;

 if (VAR_2 && VAR_3) {
  VAR_4 = (u64)VAR_2 * VAR_1->mss_cache * VAR_0;
  FUNC_1(VAR_4, VAR_3);
 }
 return VAR_4;
}
