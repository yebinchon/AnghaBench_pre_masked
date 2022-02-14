
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int NormalStrideB; int NormalType; int ColorStrideB; int ColorType; int IndexStrideB; int IndexType; int TexCoordStrideB; int TexCoordType; int EdgeFlagStrideB; int VertexStrideB; int VertexType; int VertexSize; scalar_t__ VertexPtr; scalar_t__ VertexEnabled; scalar_t__ EdgeFlagPtr; scalar_t__ EdgeFlagEnabled; int TexCoordSize; scalar_t__ TexCoordPtr; scalar_t__ TexCoordEnabled; scalar_t__ IndexPtr; scalar_t__ IndexEnabled; int ColorSize; scalar_t__ ColorPtr; scalar_t__ ColorEnabled; scalar_t__ NormalPtr; scalar_t__ NormalEnabled; } ;
struct TYPE_6__ {TYPE_1__ Array; } ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLubyte ;
typedef int GLshort ;
typedef int GLint ;
typedef int GLfloat ;
typedef int GLdouble ;
typedef TYPE_2__ GLcontext ;
typedef int GLbyte ;
typedef int GLboolean ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int*) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int*) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int *) ;
 int FUNC_44 (int*) ;
 int FUNC_45 (int *) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *) ;
 int FUNC_48 (int*) ;
 int FUNC_49 (int *) ;
 int FUNC_50 (int *) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int*) ;
 int FUNC_53 (int *) ;
 int FUNC_54 (TYPE_2__*,char*) ;

void FUNC_55( GLcontext *VAR_0, GLint VAR_1 )
{
   if (VAR_0->Array.NormalEnabled) {
      GLbyte *VAR_2 = (GLbyte*) VAR_0->Array.NormalPtr
                  + VAR_1 * VAR_0->Array.NormalStrideB;
      switch (VAR_0->Array.NormalType) {
         case 135:
            FUNC_21( (GLbyte*) VAR_2 );
            break;
         case 131:
            FUNC_25( (GLshort*) VAR_2 );
            break;
         case 132:
            FUNC_24( (GLint*) VAR_2 );
            break;
         case 133:
            FUNC_23( (GLfloat*) VAR_2 );
            break;
         case 134:
            FUNC_22( (GLdouble*) VAR_2 );
            break;
         default:
            FUNC_54(VAR_0, "Bad normal type in gl_save_ArrayElement");
            return;
      }
   }

   if (VAR_0->Array.ColorEnabled) {
      GLbyte *VAR_3 = (GLbyte*) VAR_0->Array.ColorPtr + VAR_1 * VAR_0->Array.ColorStrideB;
      switch (VAR_0->Array.ColorType) {
         case 135:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_0( (GLbyte*) VAR_3 ); break;
               case 4: FUNC_8( (GLbyte*) VAR_3 ); break;
            }
            break;
         case 130:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_5( (GLubyte*) VAR_3 ); break;
               case 4: FUNC_13( (GLubyte*) VAR_3 ); break;
            }
            break;
         case 131:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_4( (GLshort*) VAR_3 ); break;
               case 4: FUNC_12( (GLshort*) VAR_3 ); break;
            }
            break;
         case 128:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_7( (GLushort*) VAR_3 ); break;
               case 4: FUNC_15( (GLushort*) VAR_3 ); break;
            }
            break;
         case 132:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_3( (GLint*) VAR_3 ); break;
               case 4: FUNC_11( (GLint*) VAR_3 ); break;
            }
            break;
         case 129:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_6( (GLuint*) VAR_3 ); break;
               case 4: FUNC_14( (GLuint*) VAR_3 ); break;
            }
            break;
         case 133:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_2( (GLfloat*) VAR_3 ); break;
               case 4: FUNC_10( (GLfloat*) VAR_3 ); break;
            }
            break;
         case 134:
            switch (VAR_0->Array.ColorSize) {
               case 3: FUNC_1( (GLdouble*) VAR_3 ); break;
               case 4: FUNC_9( (GLdouble*) VAR_3 ); break;
            }
            break;
         default:
            FUNC_54(VAR_0, "Bad color type in gl_save_ArrayElement");
            return;
      }
   }

   if (VAR_0->Array.IndexEnabled) {
      GLbyte *VAR_4 = (GLbyte*) VAR_0->Array.IndexPtr + VAR_1 * VAR_0->Array.IndexStrideB;
      switch (VAR_0->Array.IndexType) {
         case 131:
            FUNC_20( (GLshort*) VAR_4 );
            break;
         case 132:
            FUNC_19( (GLint*) VAR_4 );
            break;
         case 133:
            FUNC_18( (GLfloat*) VAR_4 );
            break;
         case 134:
            FUNC_17( (GLdouble*) VAR_4 );
            break;
         default:
            FUNC_54(VAR_0, "Bad index type in gl_save_ArrayElement");
            return;
      }
   }

   if (VAR_0->Array.TexCoordEnabled) {
      GLbyte *VAR_5 = (GLbyte*) VAR_0->Array.TexCoordPtr
                  + VAR_1 * VAR_0->Array.TexCoordStrideB;
      switch (VAR_0->Array.TexCoordType) {
         case 131:
            switch (VAR_0->Array.TexCoordSize) {
               case 1: FUNC_29( (GLshort*) VAR_5 ); break;
               case 2: FUNC_33( (GLshort*) VAR_5 ); break;
               case 3: FUNC_37( (GLshort*) VAR_5 ); break;
               case 4: FUNC_41( (GLshort*) VAR_5 ); break;
            }
            break;
         case 132:
            switch (VAR_0->Array.TexCoordSize) {
               case 1: FUNC_28( (GLint*) VAR_5 ); break;
               case 2: FUNC_32( (GLint*) VAR_5 ); break;
               case 3: FUNC_36( (GLint*) VAR_5 ); break;
               case 4: FUNC_40( (GLint*) VAR_5 ); break;
            }
            break;
         case 133:
            switch (VAR_0->Array.TexCoordSize) {
               case 1: FUNC_27( (GLfloat*) VAR_5 ); break;
               case 2: FUNC_31( (GLfloat*) VAR_5 ); break;
               case 3: FUNC_35( (GLfloat*) VAR_5 ); break;
               case 4: FUNC_39( (GLfloat*) VAR_5 ); break;
            }
            break;
         case 134:
            switch (VAR_0->Array.TexCoordSize) {
               case 1: FUNC_26( (GLdouble*) VAR_5 ); break;
               case 2: FUNC_30( (GLdouble*) VAR_5 ); break;
               case 3: FUNC_34( (GLdouble*) VAR_5 ); break;
               case 4: FUNC_38( (GLdouble*) VAR_5 ); break;
            }
            break;
         default:
            FUNC_54(VAR_0, "Bad texcoord type in gl_save_ArrayElement");
            return;
      }
   }

   if (VAR_0->Array.EdgeFlagEnabled) {
      GLbyte *VAR_6 = (GLbyte*) VAR_0->Array.EdgeFlagPtr + VAR_1 * VAR_0->Array.EdgeFlagStrideB;
      FUNC_16( (GLboolean*) VAR_6 );
   }

   if (VAR_0->Array.VertexEnabled) {
      GLbyte *VAR_7 = (GLbyte*) VAR_0->Array.VertexPtr
                  + VAR_1 * VAR_0->Array.VertexStrideB;
      switch (VAR_0->Array.VertexType) {
         case 131:
            switch (VAR_0->Array.VertexSize) {
               case 2: FUNC_45( (GLshort*) VAR_7 ); break;
               case 3: FUNC_49( (GLshort*) VAR_7 ); break;
               case 4: FUNC_53( (GLshort*) VAR_7 ); break;
            }
            break;
         case 132:
            switch (VAR_0->Array.VertexSize) {
               case 2: FUNC_44( (GLint*) VAR_7 ); break;
               case 3: FUNC_48( (GLint*) VAR_7 ); break;
               case 4: FUNC_52( (GLint*) VAR_7 ); break;
            }
            break;
         case 133:
            switch (VAR_0->Array.VertexSize) {
               case 2: FUNC_43( (GLfloat*) VAR_7 ); break;
               case 3: FUNC_47( (GLfloat*) VAR_7 ); break;
               case 4: FUNC_51( (GLfloat*) VAR_7 ); break;
            }
            break;
         case 134:
            switch (VAR_0->Array.VertexSize) {
               case 2: FUNC_42( (GLdouble*) VAR_7 ); break;
               case 3: FUNC_46( (GLdouble*) VAR_7 ); break;
               case 4: FUNC_50( (GLdouble*) VAR_7 ); break;
            }
            break;
         default:
            FUNC_54(VAR_0, "Bad vertex type in gl_save_ArrayElement");
            return;
      }
   }
}
