
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int,int) ;
 int VAR_4 ;
 int FUNC_5 (int,int ,char*) ;
 int FUNC_6 (int ,char*,int ,int) ;
 scalar_t__ FUNC_7 () ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_8(int VAR_7, int VAR_8, int VAR_9)
{
 const int VAR_10 = 400;
 uint64_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_9);

 VAR_11 = FUNC_7() + VAR_3 + VAR_10;
 do {
  if (VAR_8 == VAR_1)
   FUNC_2(VAR_12);
  else
   FUNC_1(VAR_12, VAR_8);

  FUNC_3(VAR_12, VAR_0);

 } while (FUNC_7() < VAR_11);

 if (FUNC_0(VAR_12))
  FUNC_5(1, VAR_4, "close");

 FUNC_6(VAR_6, "rx=%d (%d MB)\n", VAR_5, VAR_2 >> 20);
}
