
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bpf_prog {int dummy; } ;
struct bpf_flow_keys {int nhoff; int thoff; unsigned int flags; int n_proto; } ;
struct bpf_flow_dissector {struct bpf_flow_keys* flow_keys; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bpf_prog*,struct bpf_flow_dissector*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (struct bpf_flow_keys*,int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_7 ;

bool FUNC_6(struct bpf_prog *VAR_8, struct bpf_flow_dissector *VAR_9,
        __be16 VAR_10, int VAR_11, int VAR_12, unsigned int VAR_13)
{
 struct bpf_flow_keys *VAR_14 = VAR_9->flow_keys;
 u32 VAR_15;


 FUNC_3(VAR_14, 0, sizeof(*VAR_14));
 VAR_14->n_proto = VAR_10;
 VAR_14->nhoff = VAR_11;
 VAR_14->thoff = VAR_14->nhoff;

 FUNC_1((int)VAR_0 !=
       (int)VAR_4);
 FUNC_1((int)VAR_2 !=
       (int)VAR_6);
 FUNC_1((int)VAR_1 !=
       (int)VAR_5);
 VAR_14->flags = VAR_13;

 FUNC_4();
 VAR_15 = FUNC_0(VAR_8, VAR_9);
 FUNC_5();

 VAR_14->nhoff = FUNC_2(VAR_7, VAR_14->nhoff, VAR_11, VAR_12);
 VAR_14->thoff = FUNC_2(VAR_7, VAR_14->thoff,
       VAR_14->nhoff, VAR_12);

 return VAR_15 == VAR_3;
}
