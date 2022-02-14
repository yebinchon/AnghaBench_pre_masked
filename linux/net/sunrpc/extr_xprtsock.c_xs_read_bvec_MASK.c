
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;
struct bio_vec {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct bio_vec*,unsigned long,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*,int,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(struct socket *VAR_1, struct msghdr *VAR_2, int VAR_3,
  struct bio_vec *VAR_4, unsigned long VAR_5, size_t VAR_6,
  size_t VAR_7)
{
 FUNC_0(&VAR_2->msg_iter, VAR_0, VAR_4, VAR_5, VAR_6);
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_7);
}
