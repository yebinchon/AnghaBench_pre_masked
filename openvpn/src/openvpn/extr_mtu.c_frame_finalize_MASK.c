
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int link_mtu; int link_mtu_dynamic; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct frame*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct frame*) ;
 int FUNC_3 (struct frame*,int ,char*) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__) ;

void
FUNC_5(struct frame *VAR_3,
               bool VAR_4,
               int VAR_5,
               bool VAR_6,
               int VAR_7)
{

    if (VAR_6)
    {
        FUNC_0(!VAR_4);
        VAR_3->link_mtu = VAR_7 + FUNC_1(VAR_3);
    }
    else
    {
        FUNC_0(VAR_4);
        VAR_3->link_mtu = VAR_5;
    }

    if (FUNC_2(VAR_3) < VAR_2)
    {
        FUNC_4(VAR_1, "TUN MTU value (%d) must be at least %d", FUNC_2(VAR_3), VAR_2);
        FUNC_3(VAR_3, VAR_0, "MTU is too small");
    }

    VAR_3->link_mtu_dynamic = VAR_3->link_mtu;
}
