
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(vortex_t * VAR_6)
{
 int VAR_7;


 FUNC_1(VAR_6->mmio, VAR_5, 0);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_1(VAR_6->mmio, VAR_3 + (VAR_7 << 2),
   FUNC_0(VAR_6->mmio,
          VAR_3 + (VAR_7 << 2)) | VAR_0);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  FUNC_1(VAR_6->mmio, VAR_1 + (VAR_7 << 2),
   FUNC_0(VAR_6->mmio,
          VAR_1 + (VAR_7 << 2)) | VAR_0);
 }
}
