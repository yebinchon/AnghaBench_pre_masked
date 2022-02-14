
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pollfd*,int,int) ;

int FUNC_1(int VAR_2, int VAR_3)
{
 struct pollfd VAR_4;

 VAR_4.fd = VAR_2;
 VAR_4.events = VAR_1 | VAR_0;

 return FUNC_0(&VAR_4, 1, VAR_3);
}
