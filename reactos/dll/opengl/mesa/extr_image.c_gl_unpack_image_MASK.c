
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gl_image {void** Data; scalar_t__ RefCount; scalar_t__ Type; scalar_t__ Format; scalar_t__ Components; scalar_t__ Height; scalar_t__ Width; } ;
struct TYPE_6__ {int SwapBytes; scalar_t__ LsbFirst; } ;
struct TYPE_5__ {TYPE_4__ Unpack; } ;
typedef void* GLvoid ;
typedef int GLushort ;
typedef int GLuint ;
typedef void* GLubyte ;
typedef int GLshort ;
typedef scalar_t__ GLint ;
typedef void* GLfloat ;
typedef scalar_t__ GLenum ;
typedef TYPE_1__ GLcontext ;
typedef int GLbyte ;
typedef int GLboolean ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ VAR_3 ;



 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (void**,void**,scalar_t__) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (void**) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (void**,scalar_t__) ;
 void** FUNC_12 (TYPE_4__*,void* const*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_14 (int) ;

struct gl_image *FUNC_15( GLcontext *VAR_4,
                                  GLint VAR_5, GLint VAR_6,
                                  GLenum VAR_7, GLenum VAR_8,
                                  const GLvoid *VAR_9 )
{
   GLint VAR_10;
   GLenum VAR_11;

   if (VAR_8==130) {
      VAR_11 = 130;
   }
   else if (VAR_8==VAR_0) {
      VAR_11 = VAR_0;
   }
   else {
      VAR_11 = 133;
   }

   VAR_10 = FUNC_10( VAR_7 );

   if (VAR_10 < 0)
      return ((void*)0);

   if (VAR_8==VAR_0 || VAR_11==VAR_0) {
      struct gl_image *VAR_12;
      GLint VAR_13, VAR_14, VAR_15;
      GLubyte *VAR_16, *VAR_17;
      FUNC_8( VAR_8==VAR_0 );
      FUNC_8( VAR_11==VAR_0 );


      if (VAR_5 > 0 && VAR_6 > 0)
         VAR_13 = ((VAR_5+7)/8 * VAR_6);
      else
         VAR_13 = 0;
      if (VAR_13>0 && VAR_9!=((void*)0)) {
         VAR_16 = (GLubyte *) FUNC_14( VAR_13 );
         if (!VAR_16) {
            return ((void*)0);
         }

         VAR_15 = FUNC_1( VAR_5, 8 );
         VAR_17 = VAR_16;
         for (VAR_14=0; VAR_14<VAR_6; VAR_14++) {
            GLvoid *VAR_18 = FUNC_12( &VAR_4->Unpack, VAR_9,
                                                  VAR_5, VAR_6,
                                                  VAR_1, VAR_8,
                                                  VAR_14);
            if (!VAR_18) {
               FUNC_9(VAR_16);
               return ((void*)0);
            }
            FUNC_3( VAR_17, VAR_18, VAR_15 );
            VAR_17 += VAR_15;
         }

         if (VAR_4->Unpack.LsbFirst) {
            FUNC_11( VAR_16, VAR_13 );
         }
      }
      else {

         VAR_16 = ((void*)0);
      }

      VAR_12 = (struct gl_image *) FUNC_14( sizeof(struct gl_image) );
      if (VAR_12) {
         VAR_12->Width = VAR_5;
         VAR_12->Height = VAR_6;
         VAR_12->Components = 0;
         VAR_12->Format = VAR_1;
         VAR_12->Type = VAR_0;
         VAR_12->Data = VAR_16;
         VAR_12->RefCount = 0;
      }
      else {
         if (VAR_16)
            FUNC_9( VAR_16 );
         return ((void*)0);
      }
      return VAR_12;
   }
   else if (VAR_7==VAR_2) {


   }
   else if (VAR_7==VAR_3) {


   }
   else if (VAR_11==130) {
      struct gl_image *VAR_19;
      GLint VAR_20;
      GLubyte *VAR_21, *VAR_22;
      GLint VAR_23;
      FUNC_8( VAR_8==130 );

      VAR_20 = VAR_5 * VAR_10 * sizeof(GLubyte);
      VAR_21 = (GLubyte *) FUNC_14( VAR_6 * VAR_20 );
      if (!VAR_21) {
         return ((void*)0);
      }

      VAR_22 = VAR_21;
      for (VAR_23=0;VAR_23<VAR_6;VAR_23++) {
         GLubyte *VAR_24 = (GLubyte *) FUNC_12( &VAR_4->Unpack,
                        VAR_9, VAR_5, VAR_6, VAR_7, VAR_8, VAR_23);
         if (!VAR_24) {
            FUNC_9(VAR_21);
            return ((void*)0);
         }
         FUNC_3( VAR_22, VAR_24, VAR_20 );
         VAR_22 += VAR_20;
      }

      if (VAR_4->Unpack.LsbFirst) {
         FUNC_11( VAR_21, VAR_6 * VAR_20 );
      }

      VAR_19 = (struct gl_image *) FUNC_14( sizeof(struct gl_image) );
      if (VAR_19) {
         VAR_19->Width = VAR_5;
         VAR_19->Height = VAR_6;
         VAR_19->Components = VAR_10;
         VAR_19->Format = VAR_7;
         VAR_19->Type = 130;
         VAR_19->Data = VAR_21;
         VAR_19->RefCount = 0;
      }
      else {
         FUNC_9( VAR_21 );
         return ((void*)0);
      }
      return VAR_19;
   }
   else if (VAR_11==133) {
      struct gl_image *VAR_25;
      GLfloat *VAR_26, *VAR_27;
      GLint VAR_28;
      GLint VAR_29, VAR_30;
      GLboolean VAR_31;
      VAR_28 = VAR_5 * VAR_10;
      VAR_26 = (GLfloat *) FUNC_14( VAR_6 * VAR_28 * sizeof(GLfloat));
      if (!VAR_26) {
         return ((void*)0);
      }

      VAR_31 = (VAR_7 != VAR_1)
               && (VAR_7 != VAR_3);

      VAR_27 = VAR_26;

      for (VAR_29=0;VAR_29<VAR_6;VAR_29++) {
         GLvoid *VAR_32 = FUNC_12( &VAR_4->Unpack, VAR_9,
                                               VAR_5, VAR_6,
                                               VAR_7, VAR_8,
                                               VAR_29);
         if (!VAR_32) {
            FUNC_9(VAR_26);
            return ((void*)0);
         }

         switch (VAR_8) {
            case 130:
               if (VAR_31) {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     *VAR_27++ = FUNC_5(((GLubyte*)VAR_32)[VAR_30]);
                  }
               }
               else {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     *VAR_27++ = (GLfloat) ((GLubyte*)VAR_32)[VAR_30];
                  }
               }
               break;
            case 134:
               if (VAR_31) {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     *VAR_27++ = FUNC_0(((GLbyte*)VAR_32)[VAR_30]);
                  }
               }
               else {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     *VAR_27++ = (GLfloat) ((GLbyte*)VAR_32)[VAR_30];
                  }
               }
               break;
            case 128:
               if (VAR_4->Unpack.SwapBytes) {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     GLushort VAR_33 = ((GLushort*)VAR_32)[VAR_30];
                     VAR_33 = ((VAR_33 >> 8) & 0xff) | ((VAR_33&0xff) << 8);
                     if (VAR_31) {
                        *VAR_27++ = FUNC_7(VAR_33);
                     }
                     else {
                        *VAR_27++ = (GLfloat) VAR_33;
                     }
                  }
               }
               else {
                  if (VAR_31) {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = FUNC_7(((GLushort*)VAR_32)[VAR_30]);
                     }
                  }
                  else {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = (GLfloat) ((GLushort*)VAR_32)[VAR_30];
                     }
                  }
               }
               break;
            case 131:
               if (VAR_4->Unpack.SwapBytes) {
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     GLshort VAR_34 = ((GLshort*)VAR_32)[VAR_30];
                     VAR_34 = ((VAR_34 >> 8) & 0xff) | ((VAR_34&0xff) << 8);
                     if (VAR_31) {
                        *VAR_27++ = FUNC_4(VAR_34);
                     }
                     else {
                        *VAR_27++ = (GLfloat) VAR_34;
                     }
                  }
               }
               else {
                  if (VAR_31) {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = FUNC_4(((GLshort*)VAR_32)[VAR_30]);
                     }
                  }
                  else {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = (GLfloat) ((GLshort*)VAR_32)[VAR_30];
                     }
                  }
               }
               break;
            case 129:
               if (VAR_4->Unpack.SwapBytes) {
                  GLuint VAR_35;
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     VAR_35 = ((GLuint*)VAR_32)[VAR_30];
                     VAR_35 = ((VAR_35 & 0xff000000) >> 24)
                           | ((VAR_35 & 0x00ff0000) >> 8)
                           | ((VAR_35 & 0x0000ff00) << 8)
                           | ((VAR_35 & 0x000000ff) << 24);
                     if (VAR_31) {
                        *VAR_27++ = FUNC_6(VAR_35);
                     }
                     else {
                        *VAR_27++ = (GLfloat) VAR_35;
                     }
                  }
               }
               else {
                  if (VAR_31) {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = FUNC_6(((GLuint*)VAR_32)[VAR_30]);
                     }
                  }
                  else {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = (GLfloat) ((GLuint*)VAR_32)[VAR_30];
                     }
                  }
               }
               break;
            case 132:
               if (VAR_4->Unpack.SwapBytes) {
                  GLint VAR_36;
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     VAR_36 = ((GLint*)VAR_32)[VAR_30];
                     VAR_36 = ((VAR_36 & 0xff000000) >> 24)
                           | ((VAR_36 & 0x00ff0000) >> 8)
                           | ((VAR_36 & 0x0000ff00) << 8)
                           | ((VAR_36 & 0x000000ff) << 24);
                     if (VAR_31) {
                        *VAR_27++ = FUNC_2(VAR_36);
                     }
                     else {
                        *VAR_27++ = (GLfloat) VAR_36;
                     }
                  }
               }
               else {
                  if (VAR_31) {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = FUNC_2(((GLint*)VAR_32)[VAR_30]);
                     }
                  }
                  else {
                     for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                        *VAR_27++ = (GLfloat) ((GLint*)VAR_32)[VAR_30];
                     }
                  }
               }
               break;
            case 133:
               if (VAR_4->Unpack.SwapBytes) {
                  GLint VAR_37;
                  for (VAR_30=0;VAR_30<VAR_28;VAR_30++) {
                     VAR_37 = ((GLuint*)VAR_32)[VAR_30];
                     VAR_37 = ((VAR_37 & 0xff000000) >> 24)
                           | ((VAR_37 & 0x00ff0000) >> 8)
                           | ((VAR_37 & 0x0000ff00) << 8)
                           | ((VAR_37 & 0x000000ff) << 24);
                     *VAR_27++ = *((GLfloat*) &VAR_37);
                  }
               }
               else {
                  FUNC_3( VAR_27, VAR_32, VAR_28*sizeof(GLfloat) );
                  VAR_27 += VAR_28;
               }
               break;
            default:
               FUNC_13(VAR_4, "Bad type in gl_unpack_image3D");
               return ((void*)0);
         }
      }

      VAR_25 = (struct gl_image *) FUNC_14( sizeof(struct gl_image) );
      if (VAR_25) {
         VAR_25->Width = VAR_5;
         VAR_25->Height = VAR_6;
         VAR_25->Components = VAR_10;
         VAR_25->Format = VAR_7;
         VAR_25->Type = 133;
         VAR_25->Data = VAR_26;
         VAR_25->RefCount = 0;
      }
      else {
         FUNC_9( VAR_26 );
         return ((void*)0);
      }
      return VAR_25;
   }
   else {
      FUNC_13(VAR_4, "Bad dest type in gl_unpack_image3D");
      return ((void*)0);
   }
   return ((void*)0);
}
