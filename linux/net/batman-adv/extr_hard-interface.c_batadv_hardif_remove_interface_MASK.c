
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct batadv_hard_iface {scalar_t__ if_status; int hardif_obj; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_hard_iface*,int ) ;
 int FUNC_3 (struct batadv_hard_iface*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct batadv_hard_iface *VAR_3)
{
 FUNC_0();


 if (VAR_3->if_status != VAR_1)
  FUNC_2(VAR_3,
      VAR_0);

 if (VAR_3->if_status != VAR_1)
  return;

 VAR_3->if_status = VAR_2;
 FUNC_1(VAR_3);
 FUNC_4(&VAR_3->hardif_obj);
 FUNC_3(VAR_3);
}
