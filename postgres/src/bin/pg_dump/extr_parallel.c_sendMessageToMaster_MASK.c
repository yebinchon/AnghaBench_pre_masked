
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(int VAR_1[2], const char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2) + 1;

 if (FUNC_1(VAR_1[VAR_0], VAR_2, VAR_3) != VAR_3)
  FUNC_0("could not write to the communication channel: %m");
}
