
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; } ;
typedef int pollfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (struct pollfd*,int ,int) ;
 int FUNC_2 (struct pollfd*,int,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_2)
{
 struct pollfd VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.fd = VAR_2;
 VAR_4 = FUNC_2(&VAR_3, 1, VAR_0);
 if (VAR_4 != 1)
  FUNC_0(1, VAR_1, "poll");
}
