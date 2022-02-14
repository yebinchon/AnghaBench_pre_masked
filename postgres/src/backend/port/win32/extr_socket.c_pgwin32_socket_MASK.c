
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SOCKET ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int,int,int,int *,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,unsigned long*) ;

SOCKET
FUNC_3(int VAR_4, int VAR_5, int VAR_6)
{
 SOCKET VAR_7;
 unsigned long VAR_8 = 1;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_6, ((void*)0), 0, VAR_2);
 if (VAR_7 == VAR_1)
 {
  FUNC_0();
  return VAR_1;
 }

 if (FUNC_2(VAR_7, VAR_0, &VAR_8))
 {
  FUNC_0();
  return VAR_1;
 }
 VAR_3 = 0;

 return VAR_7;
}
