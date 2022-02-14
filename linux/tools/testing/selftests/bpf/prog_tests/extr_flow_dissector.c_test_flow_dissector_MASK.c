
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_prog_test_run_attr {int prog_fd; int data_size_in; int ctx_size_in; int data_size_out; int retval; int duration; struct bpf_flow_keys* ctx_in; struct bpf_flow_keys* data_out; int * data_in; } ;
struct bpf_object {int dummy; } ;
struct bpf_flow_keys {int flags; } ;
typedef int flow_keys ;
typedef int ctx ;
typedef int __u32 ;
struct TYPE_5__ {int dport; scalar_t__ sport; } ;
struct TYPE_4__ {int flags; int name; TYPE_2__ keys; int pkt; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*,int,int ) ;
 int FUNC_2 (int,int ,char*,int,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,struct bpf_flow_keys,TYPE_2__) ;
 int FUNC_5 (struct bpf_object**,char*,char*,char*,char*,int*,int*) ;
 int FUNC_6 (int,int*) ;
 int FUNC_7 (int,int*,struct bpf_flow_keys*) ;
 int FUNC_8 (struct bpf_object*) ;
 int FUNC_9 (int,int ,int ,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct bpf_prog_test_run_attr*) ;
 int FUNC_12 (char*) ;
 int VAR_2 ;
 int FUNC_13 (char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_14 (int,int *,int) ;

void FUNC_15(void)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = -1, VAR_8;
 struct bpf_object *VAR_9;
 __u32 VAR_10 = 0;

 VAR_5 = FUNC_5(&VAR_9, "./bpf_flow.o", "flow_dissector",
       "jmp_table", "last_dissection", &VAR_6, &VAR_7);
 if (FUNC_3(VAR_5))
  return;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  struct bpf_flow_keys VAR_11;
  struct bpf_prog_test_run_attr VAR_12 = {
   .prog_fd = VAR_6,
   .data_in = &VAR_3[VAR_4].pkt,
   .data_size_in = sizeof(VAR_3[VAR_4].pkt),
   .data_out = &VAR_11,
  };
  static struct bpf_flow_keys VAR_13 = {};

  if (VAR_3[VAR_4].flags) {
   VAR_12.ctx_in = &VAR_13;
   VAR_12.ctx_size_in = sizeof(VAR_13);
   VAR_13.flags = VAR_3[VAR_4].flags;
  }

  VAR_5 = FUNC_11(&VAR_12);
  FUNC_2(VAR_12.data_size_out != sizeof(VAR_11) ||
      VAR_5 || VAR_12.retval != 1,
      VAR_3[VAR_4].name,
      "err %d errno %d retval %d duration %d size %u/%lu\n",
      VAR_5, VAR_2, VAR_12.retval, VAR_12.duration,
      VAR_12.data_size_out, sizeof(VAR_11));
  FUNC_4(VAR_3[VAR_4].name, VAR_11, VAR_3[VAR_4].keys);
 }







 VAR_5 = FUNC_9(VAR_6, 0, VAR_0, 0);
 FUNC_1(VAR_5, "bpf_prog_attach", "err %d errno %d\n", VAR_5, VAR_2);

 VAR_8 = FUNC_12("tap0");
 FUNC_1(VAR_8 < 0, "create_tap", "tap_fd %d errno %d\n", VAR_8, VAR_2);
 VAR_5 = FUNC_13("tap0");
 FUNC_1(VAR_5, "ifup", "err %d errno %d\n", VAR_5, VAR_2);

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {

  __u32 VAR_14 =
   VAR_1;
  struct bpf_prog_test_run_attr VAR_15 = {};
  struct bpf_flow_keys VAR_16 = {};
  __u32 VAR_17 = (__u32)(VAR_3[VAR_4].keys.sport) << 16 |
       VAR_3[VAR_4].keys.dport;





  if (VAR_3[VAR_4].flags != VAR_14)
   continue;

  VAR_5 = FUNC_14(VAR_8, &VAR_3[VAR_4].pkt, sizeof(VAR_3[VAR_4].pkt));
  FUNC_1(VAR_5 < 0, "tx_tap", "err %d errno %d\n", VAR_5, VAR_2);

  VAR_5 = FUNC_7(VAR_7, &VAR_17, &VAR_16);
  FUNC_2(VAR_5, VAR_3[VAR_4].name, "bpf_map_lookup_elem %d\n", VAR_5);

  FUNC_2(VAR_5, VAR_3[VAR_4].name, "skb-less err %d\n", VAR_5);
  FUNC_4(VAR_3[VAR_4].name, VAR_16, VAR_3[VAR_4].keys);

  VAR_5 = FUNC_6(VAR_7, &VAR_17);
  FUNC_2(VAR_5, VAR_3[VAR_4].name, "bpf_map_delete_elem %d\n", VAR_5);
 }

 FUNC_10(VAR_6, VAR_0);
 FUNC_8(VAR_9);
}
