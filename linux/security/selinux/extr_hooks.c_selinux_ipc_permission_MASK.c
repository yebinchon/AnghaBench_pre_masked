
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kern_ipc_perm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 int FUNC_0 (struct kern_ipc_perm*,int ) ;

__attribute__((used)) static int FUNC_1(struct kern_ipc_perm *VAR_4, short VAR_5)
{
 u32 VAR_6 = 0;

 VAR_6 = 0;
 if (VAR_5 & VAR_2)
  VAR_6 |= VAR_0;
 if (VAR_5 & VAR_3)
  VAR_6 |= VAR_1;

 if (VAR_6 == 0)
  return 0;

 return FUNC_0(VAR_4, VAR_6);
}
