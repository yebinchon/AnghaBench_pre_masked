
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_flags; } ;
struct kvec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct socket*,struct msghdr*,struct kvec*,size_t,size_t) ;

__attribute__((used)) static int FUNC_1(struct socket *VAR_5, struct kvec *VAR_6,
       size_t VAR_7, size_t VAR_8, bool VAR_9)
{
 struct msghdr VAR_10 = { .msg_flags = VAR_1 | VAR_4 };
 int VAR_11;

 if (VAR_9)
  VAR_10.msg_flags |= VAR_3;
 else
  VAR_10.msg_flags |= VAR_2;

 VAR_11 = FUNC_0(VAR_5, &VAR_10, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == -VAR_0)
  VAR_11 = 0;
 return VAR_11;
}
