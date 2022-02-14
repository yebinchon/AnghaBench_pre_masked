
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int,int,int,int,int) ;
 int FUNC_1 (int ,int,int,char*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
   int VAR_12;
   VAR_11 = FUNC_0(20,14, 8, 16,16, 100);

   FUNC_2(VAR_11, VAR_8);

   for (VAR_12=0; VAR_12 < VAR_6; ++VAR_12) {
      if (VAR_12 != VAR_10 && VAR_12 != VAR_9 && VAR_12 != VAR_7)
         FUNC_1(VAR_11, 0+VAR_12, 1, "Background");
   }
   FUNC_1(VAR_11, 256+VAR_3 , 8, "Char");
   FUNC_1(VAR_11, 256+VAR_4 , 8, "Char");
   for (VAR_12=VAR_1; VAR_12 < VAR_0-2; ++VAR_12)
      if (VAR_12 == VAR_2 || VAR_12 == VAR_5)
         FUNC_1(VAR_11, 256+VAR_12, 4, "Object");
      else
         FUNC_1(VAR_11, 256+VAR_12, 2, "Object");





}
