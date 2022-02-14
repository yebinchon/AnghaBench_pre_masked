
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_light {double SpotExponent; double** SpotExpTable; } ;


 int VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (int,double) ;

void FUNC_1( struct gl_light *VAR_2 )
{
   int VAR_3;
   double VAR_4 = VAR_2->SpotExponent;
   double VAR_5;
   int VAR_6 = 0;

   VAR_2->SpotExpTable[0][0] = 0.0;

   for (VAR_3=VAR_0-1;VAR_3>0;VAR_3--) {
      if (VAR_6 == 0) {
         VAR_5 = FUNC_0(VAR_3/(double)(VAR_0-1), VAR_4);
         if (VAR_5 < VAR_1*100.0) {
            VAR_5 = 0.0;
            VAR_6 = 1;
         }
      }
      VAR_2->SpotExpTable[VAR_3][0] = VAR_5;
   }
   for (VAR_3=0;VAR_3<VAR_0-1;VAR_3++) {
      VAR_2->SpotExpTable[VAR_3][1] = VAR_2->SpotExpTable[VAR_3+1][0] - VAR_2->SpotExpTable[VAR_3][0];
   }
   VAR_2->SpotExpTable[VAR_0-1][1] = 0.0;
}
