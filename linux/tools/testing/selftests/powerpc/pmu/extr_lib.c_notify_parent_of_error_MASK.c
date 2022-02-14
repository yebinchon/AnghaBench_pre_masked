
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pipe {int write_fd; } ;


 char VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(union pipe VAR_1)
{
 char VAR_2 = ~VAR_0;

 FUNC_0(FUNC_1(VAR_1.write_fd, &VAR_2, 1) != 1);

 return 0;
}
