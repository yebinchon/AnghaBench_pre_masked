
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_load_attr {char* file; int expected_attach_type; int prog_type; } ;
struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_map*) ;
 struct bpf_map* FUNC_1 (int *,struct bpf_object*) ;
 int FUNC_2 (struct bpf_object*) ;
 int FUNC_3 (int,int,int ,int ) ;
 int FUNC_4 (struct bpf_prog_load_attr*,struct bpf_object**,int*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int,int,char*,int,int ,int,int ,int ) ;
 scalar_t__ FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(int VAR_2, int VAR_3)
{
 struct bpf_prog_load_attr VAR_4 = {
  .prog_type = VAR_1,
  .file = "./tcp_rtt.o",
  .expected_attach_type = VAR_0,
 };
 struct bpf_object *VAR_5;
 struct bpf_map *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(&VAR_4, &VAR_5, &VAR_8);
 if (VAR_10) {
  FUNC_7("Failed to load BPF object");
  return -1;
 }

 VAR_6 = FUNC_1(((void*)0), VAR_5);
 VAR_9 = FUNC_0(VAR_6);

 VAR_10 = FUNC_3(VAR_8, VAR_2, VAR_0, 0);
 if (VAR_10) {
  FUNC_7("Failed to attach BPF program");
  goto close_bpf_object;
 }

 VAR_7 = FUNC_6(VAR_3);
 if (VAR_7 < 0) {
  VAR_10 = -1;
  goto close_bpf_object;
 }

 VAR_10 += FUNC_9(VAR_9, VAR_7, "syn-ack",
                1,
                   0,
                  1,
                     0,
                         0);

 FUNC_8(VAR_7);
 if (FUNC_10(VAR_7, 100) < 0) {
  VAR_10 = -1;
  goto close_client_fd;
 }


 VAR_10 += FUNC_9(VAR_9, VAR_7, "first payload byte",
                2,
                   0,
                  2,
                     0,
                         0);

close_client_fd:
 FUNC_5(VAR_7);

close_bpf_object:
 FUNC_2(VAR_5);
 return VAR_10;
}
