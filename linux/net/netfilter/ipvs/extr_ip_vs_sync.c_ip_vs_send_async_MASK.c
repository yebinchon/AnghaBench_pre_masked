
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct kvec {size_t iov_len; void* iov_base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct socket*,struct msghdr*,struct kvec*,int,size_t) ;

__attribute__((used)) static int
FUNC_3(struct socket *VAR_2, const char *VAR_3, const size_t VAR_4)
{
 struct msghdr VAR_5 = {.msg_flags = VAR_0|VAR_1};
 struct kvec VAR_6;
 int VAR_7;

 FUNC_0(7);
 VAR_6.iov_base = (void *)VAR_3;
 VAR_6.iov_len = VAR_4;

 VAR_7 = FUNC_2(VAR_2, &VAR_5, &VAR_6, 1, (size_t)(VAR_4));

 FUNC_1(7);
 return VAR_7;
}
