
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dst; int src; } ;
union hmark_ports {int b32; int v32; TYPE_1__ b16; } ;
typedef int u16 ;
struct TYPE_6__ {int b32; } ;
struct TYPE_5__ {int b32; } ;
struct xt_hmark_info {TYPE_3__ port_set; TYPE_2__ port_mask; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(union hmark_ports *VAR_0,
        const struct xt_hmark_info *VAR_1)
{
 union hmark_ports VAR_2;
 u16 VAR_3, VAR_4;

 VAR_2.b32 = (VAR_0->b32 & VAR_1->port_mask.b32) | VAR_1->port_set.b32;
 VAR_3 = FUNC_0(VAR_2.b16.src);
 VAR_4 = FUNC_0(VAR_2.b16.dst);

 if (VAR_4 > VAR_3)
  VAR_0->v32 = (VAR_4 << 16) | VAR_3;
 else
  VAR_0->v32 = (VAR_3 << 16) | VAR_4;
}
