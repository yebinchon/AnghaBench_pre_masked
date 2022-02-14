
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vertex_buffer {scalar_t__ Start; scalar_t__ Bindex; scalar_t__ Eye; scalar_t__ Count; scalar_t__ Findex; scalar_t__ Bcolor; scalar_t__ Fcolor; } ;
struct TYPE_7__ {scalar_t__ LightTwoSide; TYPE_1__* Visual; struct vertex_buffer* VB; } ;
struct TYPE_6__ {scalar_t__ RGBAflag; } ;
typedef TYPE_2__ GLcontext ;


 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_0 )
{
   struct vertex_buffer *VAR_1 = VAR_0->VB;

   if (VAR_0->Visual->RGBAflag) {

      FUNC_0( VAR_0, VAR_1->Count - VAR_1->Start,
                             VAR_1->Eye + VAR_1->Start,
                             VAR_1->Fcolor + VAR_1->Start );
      if (VAR_0->LightTwoSide) {
         FUNC_0( VAR_0, VAR_1->Count - VAR_1->Start,
                                VAR_1->Eye + VAR_1->Start,
                                VAR_1->Bcolor + VAR_1->Start );
      }
   }
   else {

      FUNC_1( VAR_0, VAR_1->Count - VAR_1->Start,
                             VAR_1->Eye + VAR_1->Start,
                             VAR_1->Findex + VAR_1->Start );
      if (VAR_0->LightTwoSide) {
         FUNC_1( VAR_0, VAR_1->Count - VAR_1->Start,
                                VAR_1->Eye + VAR_1->Start,
                                VAR_1->Bindex + VAR_1->Start );
      }
   }
}
