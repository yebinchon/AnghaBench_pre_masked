
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pt_regs {int dummy; } ;
typedef int s64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct pt_regs *VAR_3)
{
 u32 VAR_4 = FUNC_0();
 u64 VAR_5, *VAR_6;
 s64 VAR_7;

 VAR_5 = FUNC_3(&VAR_1, VAR_4);
 VAR_7 = (s64)VAR_5;
 if (VAR_7 <= -2 && VAR_7 >= -22)
  return 0;

 VAR_6 = FUNC_1(&VAR_2, &VAR_4);
 if (VAR_6)
  *VAR_6 = VAR_5;
 else
  FUNC_2(&VAR_2, &VAR_4, &VAR_5, VAR_0);

 return 0;
}
