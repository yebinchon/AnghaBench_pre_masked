
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (char*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(char *VAR_0)
{
 unsigned long VAR_1, VAR_2;

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_1();
 if (VAR_1 != VAR_2) {
  FUNC_2("%s set, kernel get %lx != user get %lx\n",
     VAR_0, VAR_1, VAR_2);
  return 1;
 }
 return 0;
}
