
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct vertex_buffer {size_t Count; size_t* Findex; int * Edgeflag; int * TexCoord; int * Fcolor; int * Normal; int * Obj; int MonoNormal; int VertexSizeMask; } ;
struct TYPE_12__ {int EdgeFlag; } ;
struct TYPE_11__ {int ColorMaterialBitmask; scalar_t__ ColorMaterialEnabled; } ;
struct TYPE_9__ {scalar_t__ Map2Color4; scalar_t__ Map1Color4; } ;
struct TYPE_13__ {TYPE_4__ Current; TYPE_3__ Light; TYPE_2__* Visual; TYPE_1__ Eval; struct vertex_buffer* VB; } ;
struct TYPE_10__ {int const InvRedScale; int const InvGreenScale; int const InvBlueScale; int const InvAlphaScale; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLfloat ;
typedef TYPE_5__ GLcontext ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (int ,int const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int ,int*) ;
 int FUNC_4 (TYPE_5__*,int ) ;

void FUNC_5( GLcontext *VAR_3,
                     const GLfloat VAR_4[4], const GLfloat VAR_5[3],
       const GLubyte VAR_6[4],
                     GLuint VAR_7,
                     const GLfloat VAR_8[4] )
{
   struct vertex_buffer *VAR_9 = VAR_3->VB;
   GLuint VAR_10 = VAR_9->Count;

   VAR_9->VertexSizeMask = VAR_2;
   VAR_9->MonoNormal = VAR_0;
   FUNC_2( VAR_9->Obj[VAR_10], VAR_4 );
   FUNC_0( VAR_9->Normal[VAR_10], VAR_5 );
   FUNC_1( VAR_9->Fcolor[VAR_10], VAR_6 );
   VAR_9->Findex[VAR_10] = VAR_7;
   FUNC_2( VAR_9->TexCoord[VAR_10], VAR_8 );
   VAR_9->Edgeflag[VAR_10] = VAR_3->Current.EdgeFlag;

   VAR_10++;
   VAR_9->Count = VAR_10;
   if (VAR_10==VAR_1) {
      FUNC_4( VAR_3, VAR_0 );
   }
}
