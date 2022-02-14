
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_link_fd {int fd; } ;
struct bpf_link {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bpf_link *VAR_2)
{
 struct bpf_link_fd *VAR_3 = (void *)VAR_2;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->fd, VAR_0, 0);
 if (VAR_4)
  VAR_4 = -VAR_1;

 FUNC_0(VAR_3->fd);
 return VAR_4;
}
