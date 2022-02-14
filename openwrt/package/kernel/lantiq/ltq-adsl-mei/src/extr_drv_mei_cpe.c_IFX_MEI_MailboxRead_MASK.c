
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t * VAR_4, u16 * VAR_5,
      u16 VAR_6)
{
 DSL_DEV_MeiError_t VAR_7 = VAR_2;

 VAR_7 =
  FUNC_0 (VAR_4, VAR_0, (u32 *) VAR_5, VAR_6 / 2);


 FUNC_1 (VAR_4, (u32) VAR_3, VAR_1);

 return VAR_7;
}
