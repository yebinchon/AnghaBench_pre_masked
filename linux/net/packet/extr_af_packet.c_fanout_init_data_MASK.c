
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_fanout {int type; int bpf_prog; int rr_cur; } ;





 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct packet_fanout *VAR_0)
{
 switch (VAR_0->type) {
 case 128:
  FUNC_1(&VAR_0->rr_cur, 0);
  break;
 case 130:
 case 129:
  FUNC_0(VAR_0->bpf_prog, ((void*)0));
  break;
 }
}
