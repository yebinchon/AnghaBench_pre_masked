
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct xdp_exception_ctx {scalar_t__ act; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* FUNC_0 (int *,scalar_t__*) ;
 int VAR_2 ;

int FUNC_1(struct xdp_exception_ctx *VAR_3)
{
 u64 *VAR_4;
 u32 VAR_5;

 VAR_5 = VAR_3->act;
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_1;

 VAR_4 = FUNC_0(&VAR_2, &VAR_5);
 if (!VAR_4)
  return 1;
 *VAR_4 += 1;

 return 0;
}
