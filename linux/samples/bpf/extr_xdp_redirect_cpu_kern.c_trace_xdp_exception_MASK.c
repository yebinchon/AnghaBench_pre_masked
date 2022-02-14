
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_exception_ctx {int dummy; } ;
struct datarec {int dropped; } ;


 struct datarec* FUNC_0 (int *,int *) ;
 int VAR_0 ;

int FUNC_1(struct xdp_exception_ctx *VAR_1)
{
 struct datarec *VAR_2;
 u32 VAR_3 = 0;

 VAR_2 = FUNC_0(&VAR_0, &VAR_3);
 if (!VAR_2)
  return 1;
 VAR_2->dropped += 1;

 return 0;
}
