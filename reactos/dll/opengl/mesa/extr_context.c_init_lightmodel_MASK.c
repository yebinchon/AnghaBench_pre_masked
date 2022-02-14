
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_lightmodel {void* TwoSide; void* LocalViewer; int Ambient; } ;


 int FUNC_0 (int ,float,float,float,float) ;
 void* VAR_0 ;

__attribute__((used)) static void FUNC_1( struct gl_lightmodel *VAR_1 )
{
   FUNC_0( VAR_1->Ambient, 0.2f, 0.2f, 0.2f, 1.0f );
   VAR_1->LocalViewer = VAR_0;
   VAR_1->TwoSide = VAR_0;
}
