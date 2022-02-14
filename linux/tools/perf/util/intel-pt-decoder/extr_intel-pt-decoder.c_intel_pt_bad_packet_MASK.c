
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int have_tma; int pkt_len; int pkt_step; scalar_t__ pkt_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct intel_pt_decoder*) ;
 int FUNC_1 (struct intel_pt_decoder*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct intel_pt_decoder *VAR_3)
{
 FUNC_0(VAR_3);
 VAR_3->have_tma = 0;
 VAR_3->pkt_len = 1;
 VAR_3->pkt_step = 1;
 FUNC_1(VAR_3);
 if (VAR_3->pkt_state != VAR_2) {
  FUNC_2("ERROR: Bad packet\n");
  VAR_3->pkt_state = VAR_1;
 }
 return -VAR_0;
}
