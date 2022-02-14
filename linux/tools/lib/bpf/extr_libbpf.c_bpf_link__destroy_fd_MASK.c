
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_link_fd {int fd; } ;
struct bpf_link {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bpf_link *VAR_0)
{
 struct bpf_link_fd *VAR_1 = (void *)VAR_0;

 return FUNC_0(VAR_1->fd);
}
