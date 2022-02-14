
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sock {int dummy; } ;
typedef int sa_family_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_sock*) ;

__attribute__((used)) static int FUNC_2(sa_family_t VAR_0, struct sctp_sock *VAR_1)
{
 switch (VAR_0) {
 case 128:
  return 1;

 case 129:
  if (!FUNC_0(FUNC_1(VAR_1)))
   return 1;

 default:
  return 0;
 }
}
