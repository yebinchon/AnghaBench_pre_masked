
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int file; } ;
struct kcm_attach {int bpf_fd; int fd; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bpf_prog*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct socket*,struct socket*,struct bpf_prog*) ;
 struct socket* FUNC_6 (int ,int*) ;

__attribute__((used)) static int FUNC_7(struct socket *VAR_2, struct kcm_attach *VAR_3)
{
 struct socket *VAR_4;
 struct bpf_prog *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_3->fd, &VAR_6);
 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_3->bpf_fd, VAR_0);
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  goto out;
 }

 VAR_6 = FUNC_5(VAR_2, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_5);
  goto out;
 }



 return 0;
out:
 FUNC_4(VAR_4->file);
 return VAR_6;
}
