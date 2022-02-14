
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xdp_flags; } ;
struct xsk_socket {int prog_fd; TYPE_1__ config; int ifindex; int xsks_map_fd; } ;
struct bpf_insn {int dummy; } ;
typedef int prog ;


 int VAR_0 ;
 struct bpf_insn FUNC_0 (int ,int ,int) ;
 struct bpf_insn FUNC_1 (int ) ;
 struct bpf_insn FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_insn FUNC_3 (int ,int ,int ,int) ;
 struct bpf_insn FUNC_4 (int ,int ,int ,int) ;
 struct bpf_insn FUNC_5 (int ,int ) ;
 struct bpf_insn FUNC_6 (int ,int) ;
 struct bpf_insn FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct bpf_insn FUNC_8 (int ,int ,int ,int) ;
 int VAR_10 ;
 int FUNC_9 (int ,struct bpf_insn*,size_t,char*,int ,char*,int const) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;

__attribute__((used)) static int FUNC_13(struct xsk_socket *VAR_11)
{
 static const int VAR_12 = 16 * 1024;
 char VAR_13[VAR_12];
 int VAR_14, VAR_15;
 struct bpf_insn VAR_16[] = {

  FUNC_4(VAR_10, VAR_6, VAR_6, 16),

  FUNC_8(VAR_10, VAR_7, VAR_6, -4),
  FUNC_7(VAR_8, VAR_7),
  FUNC_0(VAR_0, VAR_8, -4),
  FUNC_5(VAR_6, VAR_11->xsks_map_fd),
  FUNC_1(VAR_1),
  FUNC_7(VAR_6, VAR_5),
  FUNC_6(VAR_5, 2),

  FUNC_3(VAR_3, VAR_6, 0, 5),

  FUNC_5(VAR_6, VAR_11->xsks_map_fd),
  FUNC_4(VAR_10, VAR_8, VAR_7, -4),
  FUNC_6(VAR_9, 0),
  FUNC_1(VAR_2),

  FUNC_2(),
 };
 size_t VAR_17 = sizeof(VAR_16) / sizeof(struct bpf_insn);

 VAR_15 = FUNC_9(VAR_4, VAR_16, VAR_17,
       "LGPL-2.1 or BSD-2-Clause", 0, VAR_13,
       VAR_12);
 if (VAR_15 < 0) {
  FUNC_12("BPF log buffer:\n%s", VAR_13);
  return VAR_15;
 }

 VAR_14 = FUNC_10(VAR_11->ifindex, VAR_15, VAR_11->config.xdp_flags);
 if (VAR_14) {
  FUNC_11(VAR_15);
  return VAR_14;
 }

 VAR_11->prog_fd = VAR_15;
 return 0;
}
