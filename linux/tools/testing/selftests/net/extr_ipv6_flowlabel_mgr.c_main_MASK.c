
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,int ,char*) ;
 int FUNC_2 (int,char**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(int VAR_3, char **VAR_4)
{
 int VAR_5;

 FUNC_2(VAR_3, VAR_4);

 VAR_5 = FUNC_4(VAR_0, VAR_1, 0);
 if (VAR_5 == -1)
  FUNC_1(1, VAR_2, "socket");

 FUNC_3(VAR_5);

 if (FUNC_0(VAR_5))
  FUNC_1(1, VAR_2, "close");

 return 0;
}
