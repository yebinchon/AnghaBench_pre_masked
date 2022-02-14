
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union bpf_attr {int dummy; } bpf_attr ;
struct net {int flow_dissector_prog; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {struct net* net_ns; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct bpf_prog*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bpf_prog* FUNC_5 (int ,int ) ;

int FUNC_6(const union bpf_attr *VAR_3)
{
 struct bpf_prog *VAR_4;
 struct net *VAR_5;

 VAR_5 = VAR_1->nsproxy->net_ns;
 FUNC_3(&VAR_2);
 VAR_4 = FUNC_5(VAR_5->flow_dissector_prog,
          FUNC_2(&VAR_2));
 if (!VAR_4) {
  FUNC_4(&VAR_2);
  return -VAR_0;
 }
 FUNC_0(VAR_5->flow_dissector_prog, ((void*)0));
 FUNC_1(VAR_4);
 FUNC_4(&VAR_2);
 return 0;
}
