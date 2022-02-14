
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_ctrl {int reqseq; int final; int poll; int super; int sar; int txseq; scalar_t__ sframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u16 FUNC_0(struct l2cap_ctrl *VAR_7)
{
 u16 VAR_8;

 VAR_8 = VAR_7->reqseq << VAR_3;
 VAR_8 |= VAR_7->final << VAR_0;

 if (VAR_7->sframe) {
  VAR_8 |= VAR_7->poll << VAR_2;
  VAR_8 |= VAR_7->super << VAR_5;
  VAR_8 |= VAR_1;
 } else {
  VAR_8 |= VAR_7->sar << VAR_4;
  VAR_8 |= VAR_7->txseq << VAR_6;
 }

 return VAR_8;
}
