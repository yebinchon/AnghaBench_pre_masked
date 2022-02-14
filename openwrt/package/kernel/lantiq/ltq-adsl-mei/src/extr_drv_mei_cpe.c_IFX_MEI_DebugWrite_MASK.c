
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_2 (DSL_DEV_Device_t * VAR_4, u32 VAR_5,
     u32 * VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9 = 0x0;
 u32 VAR_10 = 0x0;
 u32 *VAR_11 = 0x0;


 FUNC_0 (VAR_4, VAR_2);


 VAR_10 = VAR_5;
 VAR_11 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_9 = *VAR_11;
  FUNC_1 (VAR_4, VAR_3, VAR_10, VAR_9);
  VAR_10 += 4;
  VAR_11++;
 }


 FUNC_0 (VAR_4, VAR_1);

 return VAR_0;
}
