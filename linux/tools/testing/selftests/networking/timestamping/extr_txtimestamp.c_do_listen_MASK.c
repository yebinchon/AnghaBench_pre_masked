
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,void*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int ,char*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static void FUNC_4(int VAR_5, void *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = VAR_3 == VAR_1 ? VAR_0 : VAR_3;

 VAR_8 = FUNC_3(VAR_5, VAR_9, 0);
 if (VAR_8 == -1)
  FUNC_1(1, VAR_4, "socket rx");

 if (FUNC_0(VAR_8, VAR_6, VAR_7))
  FUNC_1(1, VAR_4, "bind rx");

 if (VAR_9 == VAR_2 && FUNC_2(VAR_8, 10))
  FUNC_1(1, VAR_4, "listen rx");




}
