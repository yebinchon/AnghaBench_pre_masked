
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {int dummy; } ;
typedef scalar_t__ msr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*,int,unsigned long long,char*,char*) ;
 int FUNC_1 (int ,int ,unsigned long long*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,struct msr_hwp_request*,char*) ;
 int FUNC_3 (int ,struct msr_hwp_request*,int ) ;
 int VAR_6 ;

int FUNC_4(int VAR_7)
{
 struct msr_hwp_request VAR_8;
 unsigned long long VAR_9;

 if (!VAR_4)
  return 0;

 FUNC_3(VAR_3[VAR_7], &VAR_8, VAR_1);
 FUNC_2(VAR_7, &VAR_8, "");

 if (VAR_5) {
  FUNC_1(VAR_3[VAR_7], VAR_0, &VAR_9);
  FUNC_0(VAR_6,
  "pkg%d: MSR_HWP_INTERRUPT: 0x%08llx (Excursion_Min-%sabled, Guaranteed_Perf_Change-%sabled)\n",
  VAR_7, VAR_9,
  ((VAR_9) & 0x2) ? "EN" : "Dis",
  ((VAR_9) & 0x1) ? "EN" : "Dis");
 }
 FUNC_1(VAR_3[VAR_7], VAR_2, &VAR_9);
 FUNC_0(VAR_6,
  "pkg%d: MSR_HWP_STATUS: 0x%08llx (%sExcursion_Min, %sGuaranteed_Perf_Change)\n",
  VAR_7, VAR_9,
  ((VAR_9) & 0x4) ? "" : "No-",
  ((VAR_9) & 0x1) ? "" : "No-");

 return 0;
}
