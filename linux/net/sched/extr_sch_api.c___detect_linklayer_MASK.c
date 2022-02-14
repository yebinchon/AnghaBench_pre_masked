
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_ratespec {int mpu; int cell_log; int rate; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static __u8 FUNC_2(struct tc_ratespec *VAR_2, __u32 *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2->mpu, 48);
 int VAR_5 = FUNC_1(VAR_4+1, 48);
 int VAR_6 = VAR_4 >> VAR_2->cell_log;
 int VAR_7 = (VAR_5 >> VAR_2->cell_log) - 1;


 if ((VAR_2->rate > (100000000/8)) || (VAR_3[0] == 0)) {
  FUNC_0("TC linklayer: Giving up ATM detection\n");
  return VAR_1;
 }

 if ((VAR_7 > VAR_6) && (VAR_7 < 256)
     && (VAR_3[VAR_6] == VAR_3[VAR_7])) {
  FUNC_0("TC linklayer: Detected ATM, low(%d)=high(%d)=%u\n",
    VAR_6, VAR_7, VAR_3[VAR_7]);
  return VAR_0;
 }
 return VAR_1;
}
