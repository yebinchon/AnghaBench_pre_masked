
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int SOCKET ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct sockaddr*,int) ;

int
FUNC_2(SOCKET VAR_0, struct sockaddr *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  FUNC_0();
 return VAR_3;
}
