
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int daddr; int saddr; } ;
struct TYPE_3__ {int dest; int source; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*,int *,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_0)
{



 FUNC_1("IPv6: udp checksum is 0 for [%pI6c]:%u->[%pI6c]:%u\n",
       &FUNC_0(VAR_0)->saddr, FUNC_2(FUNC_3(VAR_0)->source),
       &FUNC_0(VAR_0)->daddr, FUNC_2(FUNC_3(VAR_0)->dest));
}
