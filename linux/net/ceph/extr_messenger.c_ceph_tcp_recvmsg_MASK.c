
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; int msg_iter; } ;
struct kvec {void* member_0; size_t member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,struct kvec*,int,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*,int) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_5, void *VAR_6, size_t VAR_7)
{
 struct kvec VAR_8 = {VAR_6, VAR_7};
 struct msghdr VAR_9 = { .msg_flags = VAR_1 | VAR_2 };
 int VAR_10;

 if (!VAR_6)
  VAR_9.msg_flags |= VAR_3;

 FUNC_0(&VAR_9.msg_iter, VAR_4, &VAR_8, 1, VAR_7);
 VAR_10 = FUNC_1(VAR_5, &VAR_9, VAR_9.msg_flags);
 if (VAR_10 == -VAR_0)
  VAR_10 = 0;
 return VAR_10;
}
