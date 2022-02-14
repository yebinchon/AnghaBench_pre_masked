
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int taus; unsigned int ts; } ;
struct TYPE_10__ {int member_0; } ;
union qsb_queue_vbr_parameter_table {int dword; TYPE_7__ bit; TYPE_2__ member_0; } ;
struct TYPE_14__ {unsigned int tp; unsigned int wfqf; int vbr; } ;
struct TYPE_9__ {int member_0; } ;
union qsb_queue_parameter_table {int dword; TYPE_6__ bit; TYPE_1__ member_0; } ;
struct clk {int dummy; } ;
struct atm_vcc {int atm_options; } ;
struct TYPE_13__ {unsigned int max_pcr; int traffic_class; unsigned int min_pcr; unsigned int scr; int mbs; } ;
struct atm_qos {TYPE_5__ txtp; } ;
struct TYPE_16__ {TYPE_4__* port; TYPE_3__* conn; } ;
struct TYPE_12__ {int tx_max_cell_rate; } ;
struct TYPE_11__ {int port; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (unsigned int) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 (int ) ;
 int * VAR_11 ;
 int FUNC_5 (int ) ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 struct clk* FUNC_6 () ;
 unsigned int FUNC_7 (struct clk*) ;
 TYPE_8__ VAR_16 ;
 unsigned int VAR_17 ;

__attribute__((used)) static void FUNC_8(struct atm_vcc *VAR_18, struct atm_qos *VAR_19, unsigned int VAR_20)
{
 struct clk *VAR_21 = FUNC_6();
 unsigned int VAR_22 = FUNC_7(VAR_21);
 unsigned int VAR_23 = VAR_20 + VAR_1;
 union qsb_queue_parameter_table VAR_24 = {0};
 union qsb_queue_vbr_parameter_table VAR_25 = {0};
 unsigned int VAR_26;





 if ( VAR_19->txtp.max_pcr == 0 )
  VAR_24.bit.tp = 0;
 else {

  VAR_26 = ((VAR_22 * VAR_17) >> 5) / VAR_19->txtp.max_pcr + 1;

  VAR_24.bit.tp = VAR_26 > VAR_13 ? VAR_13 : VAR_26;
 }
 if ( VAR_19->txtp.traffic_class == 131 && VAR_24.bit.tp == 0 ) {
  int VAR_27 = VAR_16.conn[VAR_20].port;
  unsigned int VAR_28 = VAR_16.port[VAR_27].tx_max_cell_rate + 1000;

  VAR_26 = ((VAR_22 * VAR_17) >> 5) / VAR_28 + 1;
  if ( VAR_26 > VAR_13 )
   VAR_26 = VAR_13;
  else if ( VAR_26 < 1 )
   VAR_26 = 1;
  VAR_24.bit.tp = VAR_26;
 }





 switch ( VAR_19->txtp.traffic_class ) {
 case 132:
 case 128:

  VAR_24.bit.wfqf = 0;
  break;
 case 129:
 case 130:



  if ( VAR_19->txtp.min_pcr == 0 )
   VAR_24.bit.wfqf = VAR_14;
  else {
   VAR_26 = VAR_2 * VAR_14 / VAR_19->txtp.min_pcr;
   if ( VAR_26 == 0 )
    VAR_24.bit.wfqf = 1;
   else if ( VAR_26 > VAR_14 )
    VAR_24.bit.wfqf = VAR_14;
   else
    VAR_24.bit.wfqf = VAR_26;
  }
  break;
 default:
 case 131:
  VAR_24.bit.wfqf = VAR_15;
 }




 if ( VAR_19->txtp.traffic_class == 128 || VAR_19->txtp.traffic_class == 129 ) {




   VAR_25.bit.taus = 0;
   VAR_25.bit.ts = 0;
 } else {
  VAR_25.bit.taus = 0;
  VAR_25.bit.ts = 0;
 }


 *VAR_11 = FUNC_5(VAR_3);
 *VAR_10 = FUNC_4(VAR_24.dword);
 *VAR_5 = FUNC_1(VAR_7) | FUNC_3(VAR_8) | FUNC_0(VAR_6) | FUNC_2(VAR_23);

 *VAR_11 = FUNC_5(VAR_4);
 *VAR_10 = FUNC_4(VAR_25.dword);
 *VAR_5 = FUNC_1(VAR_7) | FUNC_3(VAR_9) | FUNC_0(VAR_6) | FUNC_2(VAR_23);

}
