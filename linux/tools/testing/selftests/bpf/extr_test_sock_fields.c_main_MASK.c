
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_program {int dummy; } ;
struct bpf_prog_load_attr {char* file; int prog_flags; int prog_type; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char*,...) ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int (*) ()) ;
 void* FUNC_2 (struct bpf_map*) ;
 int FUNC_3 (struct bpf_object*) ;
 struct bpf_map* FUNC_4 (struct bpf_object*,char*) ;
 struct bpf_program* FUNC_5 (struct bpf_object*,char*) ;
 int FUNC_6 (int,int,int ,int ) ;
 int FUNC_7 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_8 (struct bpf_program*) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 void* VAR_7 ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_15 () ;
 void* VAR_11 ;

int FUNC_16(int VAR_12, char **VAR_13)
{
 struct bpf_prog_load_attr VAR_14 = {
  .file = "test_sock_fields_kern.o",
  .prog_type = VAR_3,
  .prog_flags = VAR_2,
 };
 int VAR_15, VAR_16, VAR_17, VAR_18;
 struct bpf_program *VAR_19;
 struct bpf_object *VAR_20;
 struct bpf_map *VAR_21;

 VAR_18 = FUNC_14();
 FUNC_0(VAR_18, "setup_cgroup_environment()", "err:%d errno:%d",
       VAR_18, VAR_6);

 FUNC_1(FUNC_9);


 VAR_15 = FUNC_11(VAR_4);
 FUNC_0(VAR_15 == -1, "create_and_get_cgroup()",
       "cgroup_fd:%d errno:%d", VAR_15, VAR_6);

 VAR_18 = FUNC_12(VAR_4);
 FUNC_0(VAR_18, "join_cgroup", "err:%d errno:%d", VAR_18, VAR_6);

 VAR_18 = FUNC_7(&VAR_14, &VAR_20, &VAR_16);
 FUNC_0(VAR_18, "bpf_prog_load_xattr()", "err:%d", VAR_18);

 VAR_19 = FUNC_5(VAR_20,
        "cgroup_skb/ingress");
 FUNC_0(!VAR_19,
       "bpf_object__find_program_by_title(cgroup_skb/ingress)",
       "not found");
 VAR_17 = FUNC_8(VAR_19);

 VAR_18 = FUNC_6(VAR_16, VAR_15, VAR_0, 0);
 FUNC_0(VAR_18 == -1, "bpf_prog_attach(CPF_CGROUP_INET_EGRESS)",
       "err:%d errno%d", VAR_18, VAR_6);

 VAR_18 = FUNC_6(VAR_17, VAR_15,
         VAR_1, 0);
 FUNC_0(VAR_18 == -1, "bpf_prog_attach(CPF_CGROUP_INET_INGRESS)",
       "err:%d errno%d", VAR_18, VAR_6);
 FUNC_10(VAR_15);

 VAR_21 = FUNC_4(VAR_20, "addr_map");
 FUNC_0(!VAR_21, "cannot find addr_map", "(null)");
 VAR_5 = FUNC_2(VAR_21);

 VAR_21 = FUNC_4(VAR_20, "sock_result_map");
 FUNC_0(!VAR_21, "cannot find sock_result_map", "(null)");
 VAR_8 = FUNC_2(VAR_21);

 VAR_21 = FUNC_4(VAR_20, "tcp_sock_result_map");
 FUNC_0(!VAR_21, "cannot find tcp_sock_result_map", "(null)");
 VAR_11 = FUNC_2(VAR_21);

 VAR_21 = FUNC_4(VAR_20, "linum_map");
 FUNC_0(!VAR_21, "cannot find linum_map", "(null)");
 VAR_7 = FUNC_2(VAR_21);

 VAR_21 = FUNC_4(VAR_20, "sk_pkt_out_cnt");
 FUNC_0(!VAR_21, "cannot find sk_pkt_out_cnt", "(null)");
 VAR_10 = FUNC_2(VAR_21);

 VAR_21 = FUNC_4(VAR_20, "sk_pkt_out_cnt10");
 FUNC_0(!VAR_21, "cannot find sk_pkt_out_cnt10", "(null)");
 VAR_9 = FUNC_2(VAR_21);

 FUNC_15();

 FUNC_3(VAR_20);
 FUNC_9();

 FUNC_13("PASS\n");

 return 0;
}
