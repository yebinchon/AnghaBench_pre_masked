
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_program {int dummy; } ;
struct TYPE_2__ {int * destroy; } ;
struct bpf_link_fd {int fd; TYPE_1__ link; } ;
struct bpf_link {int dummy; } ;
typedef int errmsg ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_link* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bpf_program*) ;
 int FUNC_2 (struct bpf_program*,int) ;
 int VAR_6 ;
 int FUNC_3 (struct bpf_link_fd*) ;
 scalar_t__ FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,char*,int) ;
 struct bpf_link_fd* FUNC_6 (int) ;
 int FUNC_7 (char*,int ,...) ;

struct bpf_link *FUNC_8(struct bpf_program *VAR_7,
      int VAR_8)
{
 char VAR_9[VAR_4];
 struct bpf_link_fd *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_8 < 0) {
  FUNC_7("program '%s': invalid perf event FD %d\n",
      FUNC_2(VAR_7, 0), VAR_8);
  return FUNC_0(-VAR_0);
 }
 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 < 0) {
  FUNC_7("program '%s': can't attach BPF program w/o FD (did you load it?)\n",
      FUNC_2(VAR_7, 0));
  return FUNC_0(-VAR_0);
 }

 VAR_10 = FUNC_6(sizeof(*VAR_10));
 if (!VAR_10)
  return FUNC_0(-VAR_1);
 VAR_10->link.destroy = &VAR_5;
 VAR_10->fd = VAR_8;

 if (FUNC_4(VAR_8, VAR_3, VAR_11) < 0) {
  VAR_12 = -VAR_6;
  FUNC_3(VAR_10);
  FUNC_7("program '%s': failed to attach to pfd %d: %s\n",
      FUNC_2(VAR_7, 0), VAR_8,
      FUNC_5(VAR_12, VAR_9, sizeof(VAR_9)));
  return FUNC_0(VAR_12);
 }
 if (FUNC_4(VAR_8, VAR_2, 0) < 0) {
  VAR_12 = -VAR_6;
  FUNC_3(VAR_10);
  FUNC_7("program '%s': failed to enable pfd %d: %s\n",
      FUNC_2(VAR_7, 0), VAR_8,
      FUNC_5(VAR_12, VAR_9, sizeof(VAR_9)));
  return FUNC_0(VAR_12);
 }
 return (struct bpf_link *)VAR_10;
}
