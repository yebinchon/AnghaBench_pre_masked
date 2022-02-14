
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct l2cap_ctrl {int reqseq; int final; int sframe; int poll; int super; int sar; int txseq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_0(u32 VAR_13, struct l2cap_ctrl *VAR_14)
{
 VAR_14->reqseq = (VAR_13 & VAR_5) >> VAR_6;
 VAR_14->final = (VAR_13 & VAR_0) >> VAR_1;

 if (VAR_13 & VAR_2) {

  VAR_14->sframe = 1;
  VAR_14->poll = (VAR_13 & VAR_3) >> VAR_4;
  VAR_14->super = (VAR_13 & VAR_9) >> VAR_10;

  VAR_14->sar = 0;
  VAR_14->txseq = 0;
 } else {

  VAR_14->sframe = 0;
  VAR_14->sar = (VAR_13 & VAR_7) >> VAR_8;
  VAR_14->txseq = (VAR_13 & VAR_11) >> VAR_12;

  VAR_14->poll = 0;
  VAR_14->super = 0;
 }
}
