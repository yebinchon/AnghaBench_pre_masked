
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_fanout {int lock; int bpf_prog; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct bpf_prog*) ;
 struct bpf_prog* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct packet_fanout *VAR_0, struct bpf_prog *VAR_1)
{
 struct bpf_prog *VAR_2;

 FUNC_4(&VAR_0->lock);
 VAR_2 = FUNC_3(VAR_0->bpf_prog, FUNC_1(&VAR_0->lock));
 FUNC_2(VAR_0->bpf_prog, VAR_1);
 FUNC_5(&VAR_0->lock);

 if (VAR_2) {
  FUNC_6();
  FUNC_0(VAR_2);
 }
}
