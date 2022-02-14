
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vertex_buffer {scalar_t__ Count; scalar_t__ VertexSizeMask; scalar_t__ Start; scalar_t__ Obj; scalar_t__ Eye; scalar_t__ Normal; } ;
struct TYPE_7__ {int Normalize; } ;
struct TYPE_8__ {int VertexTime; TYPE_1__ Transform; int ModelViewInv; scalar_t__ NeedNormals; struct vertex_buffer* VB; } ;
typedef scalar_t__ GLdouble ;
typedef TYPE_2__ GLcontext ;
typedef int GLboolean ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_6( GLcontext *VAR_1, GLboolean VAR_2 )
{
   struct vertex_buffer *VAR_3 = VAR_1->VB;




   FUNC_0( VAR_3->Count>0 );




   if (VAR_3->VertexSizeMask==VAR_0) {
      FUNC_5( VAR_1, VAR_3->Count - VAR_3->Start,
                         VAR_3->Obj + VAR_3->Start, VAR_3->Eye + VAR_3->Start );
   }
   else {
      FUNC_4( VAR_1, VAR_3->Count - VAR_3->Start,
                         VAR_3->Obj + VAR_3->Start, VAR_3->Eye + VAR_3->Start );
   }


   if (VAR_1->NeedNormals) {
      FUNC_3( VAR_3->Count - VAR_3->Start,
                            VAR_3->Normal + VAR_3->Start, VAR_1->ModelViewInv,
                            VAR_3->Normal + VAR_3->Start, VAR_1->Transform.Normalize );
   }






   FUNC_2( VAR_1, VAR_2 );
}
