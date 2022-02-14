
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int payload; } ;
struct intel_pt_decoder {int tx_flags; TYPE_1__ packet; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct intel_pt_decoder *VAR_1)
{
 VAR_1->tx_flags = VAR_1->packet.payload & VAR_0;
}
