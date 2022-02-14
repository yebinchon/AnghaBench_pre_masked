
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int sa; int da; int src_name; int dst_name; } ;
struct j1939_sk_buff_cb {int flags; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct j1939_sk_buff_cb *VAR_2)
{
 u8 VAR_3 = 0;

 FUNC_0(VAR_2->addr.dst_name, VAR_2->addr.src_name);
 FUNC_0(VAR_2->addr.da, VAR_2->addr.sa);


 if (VAR_2->flags & VAR_1)
  VAR_3 |= VAR_0;
 if (VAR_2->flags & VAR_0)
  VAR_3 |= VAR_1;
 VAR_2->flags &= ~(VAR_1 | VAR_0);
 VAR_2->flags |= VAR_3;
}
