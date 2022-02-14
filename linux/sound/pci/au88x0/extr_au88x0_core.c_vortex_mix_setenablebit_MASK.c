
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mmio; } ;
typedef TYPE_1__ vortex_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(vortex_t * VAR_3, unsigned char VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_5 < 0)
  VAR_8 = (VAR_5 + 3);
 else
  VAR_8 = VAR_5;
 VAR_8 = ((VAR_4 << 3) + (VAR_8 >> 2)) << 2;
 VAR_7 = FUNC_0(VAR_3->mmio, VAR_0 + VAR_8);
 if (VAR_6)
  VAR_7 |= (1 << (VAR_5 & 3));
 else
  VAR_7 &= ~(1 << (VAR_5 & 3));

 FUNC_1(VAR_3->mmio,
  VAR_1 + (((VAR_4 << 5) + VAR_5) << 2), 0x80);

 FUNC_1(VAR_3->mmio, VAR_2 + (VAR_5 << 2), 0x0);
 FUNC_1(VAR_3->mmio, VAR_2 + 4 + (VAR_5 << 2), 0x0);

 FUNC_1(VAR_3->mmio, VAR_0 + VAR_8, VAR_7);
}
