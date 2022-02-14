
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct kvec {void* iov_base; unsigned int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct kvec VAR_5 = {
  .iov_base = VAR_3,
  .iov_len = VAR_4,
 };
 struct msghdr VAR_6 = {
  .msg_flags = VAR_0 | VAR_1,
 };

 return FUNC_0(VAR_2, &VAR_6, &VAR_5, 1, VAR_5.iov_len);
}
