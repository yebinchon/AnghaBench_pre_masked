
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union pipe {int read_fd; } ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(union pipe VAR_1)
{
 char VAR_2;

 FUNC_0(FUNC_1(VAR_1.read_fd, &VAR_2, 1) != 1);
 FUNC_0(VAR_2 != VAR_0);

 return 0;
}
