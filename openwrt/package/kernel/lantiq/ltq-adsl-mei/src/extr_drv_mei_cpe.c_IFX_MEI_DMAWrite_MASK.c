
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t * VAR_5, u32 VAR_6,
   u32 * VAR_7, u32 VAR_8)
{
 u32 *VAR_9 = VAR_7;
 u32 VAR_10;

 if (VAR_6 & 3)
  return VAR_0;


 FUNC_0 (VAR_5, VAR_3, VAR_6);


 while (VAR_8--) {
  VAR_10 = *VAR_9;
  if (VAR_6 == VAR_2)
   FUNC_1 (VAR_10);
  FUNC_0 (VAR_5, (u32) VAR_4, VAR_10);
  VAR_9++;
 }

 return VAR_1;

}
