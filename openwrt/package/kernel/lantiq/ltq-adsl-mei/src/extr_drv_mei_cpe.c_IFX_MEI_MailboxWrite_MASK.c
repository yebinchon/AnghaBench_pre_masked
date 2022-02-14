
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int cmv_waiting; } ;
typedef int DSL_DEV_MeiError_t ;
typedef int DSL_DEV_Device_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int,int*) ;
 int FUNC_4 (int *,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static DSL_DEV_MeiError_t
FUNC_5 (DSL_DEV_Device_t * VAR_7, u16 * VAR_8,
       u16 VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0x0;
 u32 VAR_12 = 0;
 DSL_DEV_MeiError_t VAR_13 = VAR_1;


 VAR_13 =
  FUNC_1 (VAR_7, VAR_2, (u32 *) VAR_8, VAR_9 / 2);
 VAR_13 =
  FUNC_1 (VAR_7, VAR_3, (u32 *) (&VAR_12), 1);


 FUNC_0(VAR_7)->cmv_waiting = 1;
 FUNC_4 (VAR_7, (u32) VAR_5, VAR_4);

 VAR_10 = 0;
 while (VAR_10 < VAR_6) {
  FUNC_3 (VAR_7, (u32) VAR_5, &VAR_11);
  if ((VAR_11 & VAR_4) != VAR_4)
   break;
  VAR_10++;
  if (VAR_10 == VAR_6) {
   FUNC_2 (">>> Timeout waiting for ARC to clear MEI_TO_ARC_MSGAV!!!"
         " MEI_TO_ARC message size = %d DWORDs <<<\n", VAR_9/2);
   VAR_13 = VAR_0;
  }
 }

 return VAR_13;
}
