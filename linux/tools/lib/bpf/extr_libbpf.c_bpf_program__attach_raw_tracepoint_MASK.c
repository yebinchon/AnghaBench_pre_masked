
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
 int FUNC_1 (struct bpf_program*) ;
 int FUNC_2 (struct bpf_program*,int) ;
 int FUNC_3 (char const*,int) ;
 int VAR_4 ;
 int FUNC_4 (struct bpf_link_fd*) ;
 int FUNC_5 (int,char*,int) ;
 struct bpf_link_fd* FUNC_6 (int) ;
 int FUNC_7 (char*,int ,...) ;

struct bpf_link *FUNC_8(struct bpf_program *VAR_5,
          const char *VAR_6)
{
 char VAR_7[VAR_2];
 struct bpf_link_fd *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_5);
 if (VAR_9 < 0) {
  FUNC_7("program '%s': can't attach before loaded\n",
      FUNC_2(VAR_5, 0));
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8));
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 VAR_8->link.destroy = &VAR_3;

 VAR_10 = FUNC_3(VAR_6, VAR_9);
 if (VAR_10 < 0) {
  VAR_10 = -VAR_4;
  FUNC_4(VAR_8);
  FUNC_7("program '%s': failed to attach to raw tracepoint '%s': %s\n",
      FUNC_2(VAR_5, 0), VAR_6,
      FUNC_5(VAR_10, VAR_7, sizeof(VAR_7)));
  return FUNC_0(VAR_10);
 }
 VAR_8->fd = VAR_10;
 return (struct bpf_link *)VAR_8;
}
