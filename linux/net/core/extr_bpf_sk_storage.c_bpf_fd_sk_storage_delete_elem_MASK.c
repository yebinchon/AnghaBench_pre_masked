
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (int ,struct bpf_map*) ;
 struct socket* FUNC_1 (int,int*) ;
 int FUNC_2 (struct socket*) ;

__attribute__((used)) static int FUNC_3(struct bpf_map *VAR_0, void *VAR_1)
{
 struct socket *VAR_2;
 int VAR_3, VAR_4;

 VAR_3 = *(int *)VAR_1;
 VAR_2 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_2) {
  VAR_4 = FUNC_0(VAR_2->sk, VAR_0);
  FUNC_2(VAR_2);
  return VAR_4;
 }

 return VAR_4;
}
