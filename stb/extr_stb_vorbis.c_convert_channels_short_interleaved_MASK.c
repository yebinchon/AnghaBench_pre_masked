
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (short*,int,float**,int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(int VAR_1, short *VAR_2, int VAR_3, float **VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7;
   FUNC_3();
   if (VAR_1 != VAR_3 && VAR_1 <= 2 && VAR_3 <= 6) {
      FUNC_2(VAR_1 == 2);
      for (VAR_7=0; VAR_7 < VAR_1; ++VAR_7)
         FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
   } else {
      int VAR_8 = VAR_1 < VAR_3 ? VAR_1 : VAR_3;
      int VAR_9;
      for (VAR_9=0; VAR_9 < VAR_6; ++VAR_9) {
         for (VAR_7=0; VAR_7 < VAR_8; ++VAR_7) {
            FUNC_0(VAR_0);
            float VAR_10 = VAR_4[VAR_7][VAR_5+VAR_9];
            int VAR_11 = FUNC_1(VAR_0, VAR_10,15);
            if ((unsigned int) (VAR_11 + 32768) > 65535)
               VAR_11 = VAR_11 < 0 ? -32768 : 32767;
            *VAR_2++ = VAR_11;
         }
         for ( ; VAR_7 < VAR_1; ++VAR_7)
            *VAR_2++ = 0;
      }
   }
}
