
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr_hwp_request {int dummy; } ;
struct msr_hwp_cap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,unsigned long long*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct msr_hwp_cap*,char*) ;
 int FUNC_2 (int,struct msr_hwp_request*,char*) ;
 int FUNC_3 (char*,int,unsigned int) ;
 int FUNC_4 (int,struct msr_hwp_cap*,int ) ;
 int FUNC_5 (int,struct msr_hwp_request*,int ) ;

int FUNC_6(int VAR_5)
{
 unsigned long long VAR_6;
 struct msr_hwp_request VAR_7;
 struct msr_hwp_cap VAR_8;

 if (VAR_3) {
  FUNC_0(VAR_5, VAR_2, &VAR_6);

  FUNC_3("cpu%d: EPB %u\n", VAR_5, (unsigned int) VAR_6);
 }

 if (!VAR_4)
  return 0;

 FUNC_5(VAR_5, &VAR_7, VAR_1);
 FUNC_2(VAR_5, &VAR_7, "");

 FUNC_4(VAR_5, &VAR_8, VAR_0);
 FUNC_1(VAR_5, &VAR_8, "");

 return 0;
}
