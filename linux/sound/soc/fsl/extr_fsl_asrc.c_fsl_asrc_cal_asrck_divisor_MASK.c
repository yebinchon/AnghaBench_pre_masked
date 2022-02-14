
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_asrc_pair {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct fsl_asrc_pair *VAR_1, u32 VAR_2)
{
 u32 VAR_3;


 for (VAR_3 = 0; VAR_2 > 8; VAR_3++)
  VAR_2 >>= 1;

 return ((VAR_2 - 1) << VAR_0) | VAR_3;
}
