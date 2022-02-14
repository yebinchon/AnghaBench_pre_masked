
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int sockaddr ;
typedef int RD_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;

RD_BOOL
FUNC_1()
{
 struct sockaddr_in VAR_3;
 socklen_t VAR_4 = sizeof(VAR_3);
 if (FUNC_0(VAR_2, (struct sockaddr *) &VAR_3, &VAR_4))
  return VAR_1;
 return VAR_0;
}
