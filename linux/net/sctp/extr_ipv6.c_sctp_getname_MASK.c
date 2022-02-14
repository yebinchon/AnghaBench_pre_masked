
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sctp_addr {int dummy; } sctp_addr ;
struct socket {int sk; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (struct socket*,struct sockaddr*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,union sctp_addr*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_0, struct sockaddr *VAR_1,
   int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_0->sk),
       (union sctp_addr *)VAR_1);

 return VAR_3;
}
