
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; int * member_0; } ;
struct kvec {char* member_0; size_t const member_1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,struct kvec*,int,size_t const) ;
 int FUNC_3 (struct socket*,struct msghdr*,int ) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, char *VAR_3, const size_t VAR_4)
{
 struct msghdr VAR_5 = {((void*)0),};
 struct kvec VAR_6 = {VAR_3, VAR_4};
 int VAR_7;

 FUNC_0(7);


 FUNC_2(&VAR_5.msg_iter, VAR_1, &VAR_6, 1, VAR_4);
 VAR_7 = FUNC_3(VAR_2, &VAR_5, VAR_0);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_1(7);
 return VAR_7;
}
