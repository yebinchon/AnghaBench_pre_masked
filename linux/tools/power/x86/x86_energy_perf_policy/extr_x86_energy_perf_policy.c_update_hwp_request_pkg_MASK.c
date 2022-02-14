
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msr_hwp_request {int hwp_epp; int hwp_window; int hwp_desired; int hwp_max; int hwp_min; } ;
struct msr_hwp_cap {int dummy; } ;
struct TYPE_2__ {int hwp_epp; int hwp_window; int hwp_desired; int hwp_max; int hwp_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct msr_hwp_request*,struct msr_hwp_cap*) ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct msr_hwp_cap*,char*) ;
 int FUNC_2 (int,struct msr_hwp_request*,char*) ;
 int FUNC_3 (int,struct msr_hwp_cap*,int ) ;
 int FUNC_4 (int,struct msr_hwp_request*,int) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int,struct msr_hwp_request*) ;
 int FUNC_6 (int,struct msr_hwp_request*,int) ;

int FUNC_7(int VAR_11)
{
 struct msr_hwp_request VAR_12;
 struct msr_hwp_cap VAR_13;
 int VAR_14 = VAR_3[VAR_11];

 int VAR_15 = VAR_1;

 FUNC_4(VAR_14, &VAR_12, VAR_15);
 if (VAR_2)
  FUNC_2(VAR_11, &VAR_12, "old: ");

 if (VAR_9)
  VAR_12.hwp_min = VAR_5.hwp_min;

 if (VAR_8)
  VAR_12.hwp_max = VAR_5.hwp_max;

 if (VAR_6)
  VAR_12.hwp_desired = VAR_5.hwp_desired;

 if (VAR_10)
  VAR_12.hwp_window = VAR_5.hwp_window;

 if (VAR_7)
  VAR_12.hwp_epp = VAR_5.hwp_epp;

 FUNC_3(VAR_14, &VAR_13, VAR_0);
 if (VAR_2)
  FUNC_1(VAR_14, &VAR_13, "");

 if (!VAR_4)
  FUNC_0(VAR_14, &VAR_12, &VAR_13);

 FUNC_5(VAR_14, &VAR_12);

 FUNC_6(VAR_14, &VAR_12, VAR_15);

 if (VAR_2) {
  FUNC_4(VAR_14, &VAR_12, VAR_15);
  FUNC_2(VAR_11, &VAR_12, "new: ");
 }
 return 0;
}
