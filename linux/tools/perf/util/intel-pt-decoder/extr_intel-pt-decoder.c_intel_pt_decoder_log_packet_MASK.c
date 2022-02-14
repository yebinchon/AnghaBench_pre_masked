
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_decoder {int buf; int pos; int pkt_len; int packet; } ;


 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_pt_decoder *VAR_0)
{
 FUNC_0(&VAR_0->packet, VAR_0->pkt_len, VAR_0->pos,
       VAR_0->buf);
}
