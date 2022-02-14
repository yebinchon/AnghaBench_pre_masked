
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct sock {int dummy; } ;
struct bbr {unsigned int min_rtt_us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bbr* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct sock *VAR_3, u32 VAR_4, int VAR_5)
{
 struct bbr *VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7;
 u64 VAR_8;







 if (FUNC_1(VAR_6->min_rtt_us == ~0U))
  return VAR_2;

 VAR_8 = (u64)VAR_4 * VAR_6->min_rtt_us;




 VAR_7 = (((VAR_8 * VAR_5) >> VAR_0) + VAR_1 - 1) / VAR_1;

 return VAR_7;
}
