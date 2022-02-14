
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct psched_ratecfg {int rate_bytes_ps; scalar_t__ linklayer; int overhead; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static u64 FUNC_2(const struct psched_ratecfg *VAR_2,
    u64 VAR_3)
{



 u64 VAR_4 = VAR_3 * VAR_2->rate_bytes_ps;

 FUNC_0(VAR_4, VAR_0);

 if (FUNC_1(VAR_2->linklayer == VAR_1)) {
  FUNC_0(VAR_4, 53);
  VAR_4 = VAR_4 * 48;
 }

 if (VAR_4 > VAR_2->overhead)
  VAR_4 -= VAR_2->overhead;
 else
  VAR_4 = 0;

 return VAR_4;
}
