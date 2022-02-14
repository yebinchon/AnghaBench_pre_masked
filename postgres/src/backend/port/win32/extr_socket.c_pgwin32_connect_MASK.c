
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,struct sockaddr const*,int,int *,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

int
FUNC_4(SOCKET VAR_3, const struct sockaddr *VAR_4, int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 if (VAR_6 == 0)
  return 0;

 if (FUNC_2() != VAR_2)
 {
  FUNC_0();
  return -1;
 }

 while (FUNC_3(VAR_3, VAR_0, VAR_1) == 0)
 {

 }

 return 0;
}
