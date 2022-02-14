
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vertex_buffer {float** Obj; float** TexCoord; int TexCoordSize; int ClipAndMask; scalar_t__ ClipOrMask; void* MonoNormal; void* MonoMaterial; void* MonoColor; int VertexSizeMask; scalar_t__* ClipMask; scalar_t__* MaterialMask; } ;
typedef size_t GLuint ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;

struct vertex_buffer *FUNC_1(void)
{
   struct vertex_buffer *VAR_4;
   VAR_4 = (struct vertex_buffer *) FUNC_0(sizeof(struct vertex_buffer), 1);
   if (VAR_4) {

      GLuint VAR_5;
      for (VAR_5=0;VAR_5<VAR_2;VAR_5++) {
         VAR_4->MaterialMask[VAR_5] = 0;
         VAR_4->ClipMask[VAR_5] = 0;
         VAR_4->Obj[VAR_5][3] = 1.0F;
         VAR_4->TexCoord[VAR_5][2] = 0.0F;
         VAR_4->TexCoord[VAR_5][3] = 1.0F;
      }
      VAR_4->VertexSizeMask = VAR_3;
      VAR_4->TexCoordSize = 2;
      VAR_4->MonoColor = VAR_1;
      VAR_4->MonoMaterial = VAR_1;
      VAR_4->MonoNormal = VAR_1;
      VAR_4->ClipOrMask = 0;
      VAR_4->ClipAndMask = VAR_0;
   }
   return VAR_4;
}
