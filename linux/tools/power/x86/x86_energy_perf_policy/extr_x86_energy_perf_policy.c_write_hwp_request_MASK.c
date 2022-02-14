
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {int hwp_min; int hwp_max; int hwp_desired; int hwp_epp; int hwp_window; int hwp_use_pkg; } ;


 unsigned long long FUNC_0 (int) ;
 unsigned long long FUNC_1 (int ) ;
 unsigned long long FUNC_2 (int) ;
 unsigned long long FUNC_3 (int ) ;
 unsigned long long FUNC_4 (int ) ;
 unsigned long long FUNC_5 (int) ;
 int VAR_0 ;
 int FUNC_6 (char*,int,int,int,int,int,int,int) ;
 int FUNC_7 (int,unsigned int,unsigned long long) ;
 int FUNC_8 (int) ;

void FUNC_9(int VAR_1, struct msr_hwp_request *VAR_2, unsigned int VAR_3)
{
 unsigned long long VAR_4 = 0;

 if (VAR_0 > 1)
  FUNC_6("cpu%d: requesting min %d max %d des %d epp %d window 0x%0x use_pkg %d\n",
   VAR_1, VAR_2->hwp_min, VAR_2->hwp_max,
   VAR_2->hwp_desired, VAR_2->hwp_epp,
   VAR_2->hwp_window, VAR_2->hwp_use_pkg);

 VAR_4 |= FUNC_4(FUNC_8(VAR_2->hwp_min));
 VAR_4 |= FUNC_3(FUNC_8(VAR_2->hwp_max));
 VAR_4 |= FUNC_1(FUNC_8(VAR_2->hwp_desired));
 VAR_4 |= FUNC_2(VAR_2->hwp_epp);
 VAR_4 |= FUNC_0(VAR_2->hwp_window);
 VAR_4 |= FUNC_5(VAR_2->hwp_use_pkg);

 FUNC_7(VAR_1, VAR_3, VAR_4);
}
