
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int dummy; } ;


 int FUNC_0 (char const* const,struct sockaddr_in*,int) ;
 int FUNC_1 (int,struct sockaddr_in*,int const) ;

int
FUNC_2(int VAR_0, const char * const VAR_1, const int VAR_2)
{
 int VAR_3;
 struct sockaddr_in VAR_4;

 if ((VAR_3 = FUNC_0(VAR_1, &VAR_4, -1)) == 0) {
  VAR_3 = FUNC_1(VAR_0, &VAR_4, VAR_2);
 }
 return (VAR_3);
}
