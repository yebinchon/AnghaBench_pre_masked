
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(int VAR_4[2])
{
 if (VAR_3) {
  if (FUNC_1(VAR_4) == 0)
   return;
 } else {
  if (FUNC_2(VAR_0, VAR_2, 0, VAR_4) == 0)
   return;
 }

 FUNC_0(VAR_1, VAR_3 ? "pipe()" : "socketpair()");
}
