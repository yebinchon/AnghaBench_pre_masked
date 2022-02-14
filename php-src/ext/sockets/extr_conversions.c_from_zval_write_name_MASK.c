
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zval ;
struct sockaddr {int dummy; } ;
struct msghdr {int msg_namelen; struct sockaddr* msg_name; } ;
typedef int socklen_t ;
typedef int ser_context ;


 int FUNC_0 (int const*,struct sockaddr**,int *,int *) ;

__attribute__((used)) static void FUNC_1(const zval *VAR_0, char *VAR_1, ser_context *VAR_2)
{
 struct sockaddr *VAR_3;
 socklen_t VAR_4;
 struct msghdr *VAR_5 = (struct msghdr *)VAR_1;

 FUNC_0(VAR_0, &VAR_3, &VAR_4, VAR_2);

 VAR_5->msg_name = VAR_3;
 VAR_5->msg_namelen = VAR_4;
}
