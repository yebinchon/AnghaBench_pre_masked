
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_bpf {int command; int prog_id; struct bpf_prog* prog; } ;
struct net_device {int xdp_prog; } ;
struct bpf_prog {TYPE_1__* aux; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;


 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct bpf_prog*) ;
 struct bpf_prog* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, struct netdev_bpf *VAR_3)
{
 struct bpf_prog *VAR_4 = FUNC_4(VAR_2->xdp_prog);
 struct bpf_prog *VAR_5 = VAR_3->prog;
 int VAR_6 = 0;

 switch (VAR_3->command) {
 case 128:
  FUNC_3(VAR_2->xdp_prog, VAR_5);
  if (VAR_4)
   FUNC_0(VAR_4);

  if (VAR_4 && !VAR_5) {
   FUNC_5(&VAR_1);
  } else if (VAR_5 && !VAR_4) {
   FUNC_6(&VAR_1);
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);
  }
  break;

 case 129:
  VAR_3->prog_id = VAR_4 ? VAR_4->aux->id : 0;
  break;

 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
