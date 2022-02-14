
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int DIR ;


 int FUNC_0 (int,size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int ** VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_6 (char*,int,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(void)
{
 size_t VAR_6;
 DIR *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(&VAR_3);
 VAR_4 = VAR_6;
 for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8) {
  char VAR_9[256];

  FUNC_6(VAR_9, sizeof(VAR_9),
    "/sys/devices/system/cpu/cpu%d", VAR_8);
  VAR_7 = FUNC_5(VAR_9);
  if (VAR_7) {
   int VAR_10, VAR_11;

   FUNC_0(VAR_8, VAR_6, VAR_3);
   VAR_11 = FUNC_3(VAR_8);
   if (VAR_11 < 0)
    VAR_11 = 0;

   VAR_10 = FUNC_4(VAR_8);
   if (VAR_10 < VAR_1 &&
       VAR_11 < VAR_0)
    VAR_2[VAR_10][VAR_11]++;
  }
  FUNC_2(VAR_7);
 }
}
