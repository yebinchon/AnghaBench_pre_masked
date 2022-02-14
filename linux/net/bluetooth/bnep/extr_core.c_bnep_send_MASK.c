
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct kvec {void* member_0; size_t member_1; } ;
struct bnep_session {int msg; struct socket* sock; } ;


 int FUNC_0 (struct socket*,int *,struct kvec*,int,size_t) ;

__attribute__((used)) static int FUNC_1(struct bnep_session *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct socket *VAR_3 = VAR_0->sock;
 struct kvec VAR_4 = { VAR_1, VAR_2 };

 return FUNC_0(VAR_3, &VAR_0->msg, &VAR_4, 1, VAR_2);
}
