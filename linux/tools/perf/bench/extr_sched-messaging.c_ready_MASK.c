
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3)
{
 char VAR_4;
 struct pollfd VAR_5 = { .fd = VAR_3, .events = VAR_1 };


 if (FUNC_2(VAR_2, &VAR_4, 1) != 1)
  FUNC_0(VAR_0, "CLIENT: ready write");


 if (FUNC_1(&VAR_5, 1, -1) != 1)
  FUNC_0(VAR_0, "poll");
}
