
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {int link_mtu; scalar_t__ link_mtu_dynamic; int extra_link; } ;
typedef int packet_id_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct frame*) ;
 int FUNC_2 (struct frame*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (struct frame*,int ) ;
 int FUNC_5 (struct frame*) ;

__attribute__((used)) static void
FUNC_6(const struct frame *VAR_2,
                                          struct frame *VAR_3)
{






    VAR_3->link_mtu = VAR_2->link_mtu;
    VAR_3->extra_link = VAR_2->extra_link;


    FUNC_5(VAR_3);
    FUNC_4(VAR_3, VAR_0);
    FUNC_2(VAR_3, VAR_1 + sizeof(packet_id_type));


    FUNC_0(FUNC_1(VAR_3) < FUNC_3(VAR_3->link_mtu, 1250));
    VAR_3->link_mtu_dynamic = FUNC_3(VAR_3->link_mtu, 1250) - FUNC_1(VAR_3);
}
