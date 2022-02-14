
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pipe {int read_fd; int write_fd; } ;


 char VAR_0 ;
 int FUNC_0 (int) ;
 char VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(union pipe VAR_2, union pipe VAR_3)
{
 char VAR_4 = VAR_1;

 FUNC_0(FUNC_2(VAR_3.write_fd, &VAR_4, 1) != 1);
 FUNC_0(FUNC_1(VAR_2.read_fd, &VAR_4, 1) != 1);
 if (VAR_4 != VAR_0)
  return 1;

 return 0;
}
