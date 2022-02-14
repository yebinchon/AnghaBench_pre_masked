
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int payload; scalar_t__ type; } ;
struct intel_pt_decoder {unsigned int fup_tx_flags; int set_fup_tx_flags; int pos; TYPE_1__ packet; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct intel_pt_decoder*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_decoder *VAR_3, bool *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->packet.payload &
         (VAR_2 | VAR_0);
 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;
 if (VAR_3->packet.type == VAR_1) {
  VAR_3->fup_tx_flags = VAR_5;
  VAR_3->set_fup_tx_flags = 1;
  if (!(VAR_3->fup_tx_flags & VAR_0))
   *VAR_4 = 1;
 } else {
  FUNC_1("ERROR: Missing FUP after MODE.TSX",
    VAR_3->pos);
  FUNC_2(VAR_3);
 }
 return 0;
}
