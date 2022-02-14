
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debuginfo {scalar_t__ dwfl; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct debuginfo*) ;

void FUNC_2(struct debuginfo *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->dwfl)
   FUNC_0(VAR_0->dwfl);
  FUNC_1(VAR_0);
 }
}
