
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_material {float* ShineTable; } ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int,int ) ;

void FUNC_1( struct gl_material *VAR_2 )
{
   int VAR_3;

   VAR_2->ShineTable[0] = 0.0F;
   for (VAR_3=1;VAR_3<VAR_0;VAR_3++) {
      VAR_2->ShineTable[VAR_3] = -1.0;

   }
}
