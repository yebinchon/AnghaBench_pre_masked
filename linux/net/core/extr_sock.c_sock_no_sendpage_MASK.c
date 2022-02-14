
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct page {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct kvec {char* iov_base; size_t iov_len; } ;
typedef int ssize_t ;


 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,int,size_t) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

ssize_t FUNC_3(struct socket *VAR_0, struct page *VAR_1, int VAR_2, size_t VAR_3, int VAR_4)
{
 ssize_t VAR_5;
 struct msghdr VAR_6 = {.msg_flags = VAR_4};
 struct kvec VAR_7;
 char *VAR_8 = FUNC_1(VAR_1);
 VAR_7.iov_base = VAR_8 + VAR_2;
 VAR_7.iov_len = VAR_3;
 VAR_5 = FUNC_0(VAR_0, &VAR_6, &VAR_7, 1, VAR_3);
 FUNC_2(VAR_1);
 return VAR_5;
}
