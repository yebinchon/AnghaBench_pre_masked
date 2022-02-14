
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pgsocket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,...) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned long*) ;

bool
FUNC_2(pgsocket VAR_4)
{

 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return 0;
 if (FUNC_0(VAR_4, VAR_2, (VAR_5 | VAR_3)) == -1)
  return 0;
 return 1;






}
