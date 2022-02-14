
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned short* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short* FUNC_0 (int) ;
 unsigned short* FUNC_1 (char*,int *) ;
 int FUNC_2 (char*,unsigned short*,int) ;
 unsigned short* FUNC_3 (char*,int*,int*,int*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,int) ;

void FUNC_7(int VAR_3, char **VAR_4)
{
   int VAR_5,VAR_6;






   unsigned short *VAR_7 = FUNC_1("c:/x/ned_1m/x73_y428_10012_10012.bin", ((void*)0));
   int VAR_8=10012, VAR_9 = 10012;


   VAR_0 = FUNC_0(VAR_2 * VAR_1 * 4);
   for (VAR_6=0; VAR_6 < VAR_1; ++VAR_6)
      for (VAR_5=0; VAR_5 < VAR_2; ++VAR_5)
         VAR_0[VAR_6*VAR_2+VAR_5] = VAR_7[VAR_6*VAR_8+VAR_5] / 32.0f;

   FUNC_4(1,1);
   FUNC_6("terrain_edit", 1920, 1080);
   FUNC_5();

   return;
}
