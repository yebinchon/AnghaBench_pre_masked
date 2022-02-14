
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mg_iface {int data; } ;
struct mg_ev_mgr_lwip_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct mg_iface *VAR_7) {
  FUNC_0(VAR_0, ("Mongoose %s, LwIP %u.%u.%u", VAR_4, VAR_1,
                VAR_2, VAR_3));
  VAR_7->data = FUNC_1(1, sizeof(struct mg_ev_mgr_lwip_data));

  FUNC_2(&VAR_5, 1);
  FUNC_2(&VAR_6, 0);

}
