
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct port {int tx_current_cell_rate; } ;
struct connection {size_t port; scalar_t__ aal5_vcc_oversize_sdu; scalar_t__ aal5_vcc_crc_err; int * vcc; } ;
struct TYPE_4__ {int traffic_class; int min_pcr; int scr; int max_pcr; } ;
struct TYPE_5__ {TYPE_1__ txtp; } ;
struct atm_vcc {TYPE_2__ qos; } ;
struct TYPE_6__ {scalar_t__ conn_table; struct port* port; struct connection* conn; } ;






 int VAR_0 ;
 int FUNC_0 (int,scalar_t__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct atm_vcc*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct atm_vcc *VAR_3)
{
 int VAR_4;
 struct port *VAR_5;
 struct connection *VAR_6;
 if ( VAR_3 == ((void*)0) )
  return;


 VAR_4 = FUNC_3(VAR_3);
 if ( VAR_4 < 0 ) {
  FUNC_4("can't find vcc\n");
  goto PPE_CLOSE_EXIT;
 }
 VAR_6 = &VAR_1.conn[VAR_4];
 VAR_5 = &VAR_1.port[VAR_6->port];


 FUNC_1(VAR_4);


 VAR_6->vcc = ((void*)0);
 VAR_6->aal5_vcc_crc_err = 0;
 VAR_6->aal5_vcc_oversize_sdu = 0;
 FUNC_0(VAR_4, &VAR_1.conn_table);


 if ( VAR_1.conn_table == 0 )
  FUNC_2(VAR_0);


 switch ( VAR_3->qos.txtp.traffic_class )
 {
 case 131:
 case 128:
  VAR_5->tx_current_cell_rate -= VAR_3->qos.txtp.max_pcr;
  break;
 case 129:



  break;
 case 130:
  VAR_5->tx_current_cell_rate -= VAR_3->qos.txtp.min_pcr;
  break;
 }


 FUNC_5(&VAR_2);

PPE_CLOSE_EXIT:
 return;
}
