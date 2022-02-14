
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, int VAR_1)
{
 if (VAR_0 > 0 && VAR_1 > 0)





  FUNC_0("There are %d other session(s) and %d prepared transaction(s) using the database.",
      VAR_0, VAR_1);
 else if (VAR_0 > 0)
  FUNC_1("There is %d other session using the database.",
       "There are %d other sessions using the database.",
       VAR_0,
       VAR_0);
 else
  FUNC_1("There is %d prepared transaction using the database.",
       "There are %d prepared transactions using the database.",
       VAR_1,
       VAR_1);
 return 0;
}
