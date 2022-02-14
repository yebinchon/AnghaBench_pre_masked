
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,scalar_t__,char*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int,int *,int,int) ;

__attribute__((used)) static void FUNC_3(int VAR_6)
{
 int VAR_7;

 while (1) {

  VAR_7 = FUNC_2(VAR_6, ((void*)0), 1 << 21, VAR_2 | VAR_1);
  if (VAR_7 == -1 && VAR_4 == VAR_0)
   return;
  if (VAR_7 == -1)
   FUNC_0(1, VAR_4, "flush");
  if (VAR_7 == 0) {

   FUNC_1(0);
  }

  VAR_5++;
  VAR_3 += VAR_7;
 }

}
