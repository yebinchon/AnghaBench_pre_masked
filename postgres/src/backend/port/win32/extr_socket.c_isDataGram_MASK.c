
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type ;
typedef int SOCKET ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_1(SOCKET VAR_3)
{
 int VAR_4;
 int VAR_5 = sizeof(VAR_4);

 if (FUNC_0(VAR_3, VAR_1, VAR_2, (char *) &VAR_4, &VAR_5))
  return 1;

 return (VAR_4 == VAR_0) ? 1 : 0;
}
