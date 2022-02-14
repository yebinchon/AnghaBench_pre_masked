
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {int (* WriteIndexSpan ) (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int *,int*) ;int (* WriteColorSpan ) (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int*,int*,int*,int*,int *) ;} ;
struct TYPE_16__ {int* ClearColor; int ClearIndex; } ;
struct TYPE_13__ {scalar_t__ Enabled; } ;
struct TYPE_18__ {int RasterMask; TYPE_5__ Driver; TYPE_4__ Color; TYPE_3__* Visual; TYPE_2__* Buffer; TYPE_1__ Scissor; } ;
struct TYPE_15__ {int RedScale; int GreenScale; int BlueScale; int AlphaScale; scalar_t__ RGBAflag; } ;
struct TYPE_14__ {scalar_t__ Xmin; scalar_t__ Ymin; scalar_t__ Ymax; scalar_t__ Xmax; scalar_t__ Height; scalar_t__ Width; } ;
typedef int GLuint ;
typedef int GLubyte ;
typedef scalar_t__ GLint ;
typedef TYPE_6__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,scalar_t__) ;
 int FUNC_1 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int*,int*,int*,int*) ;
 int FUNC_2 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int*,int *) ;
 int FUNC_4 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int*,int*,int*,int*,int *) ;
 int FUNC_5 (TYPE_6__*,scalar_t__,scalar_t__,scalar_t__,int *,int*) ;

__attribute__((used)) static void FUNC_6( GLcontext *VAR_2 )
{
   GLint VAR_3, VAR_4, VAR_5, VAR_6;


   if (VAR_2->Scissor.Enabled) {
      VAR_3 = VAR_2->Buffer->Xmin;
      VAR_4 = VAR_2->Buffer->Ymin;
      VAR_5 = VAR_2->Buffer->Ymax - VAR_2->Buffer->Ymin + 1;
      VAR_6 = VAR_2->Buffer->Xmax - VAR_2->Buffer->Xmin + 1;
   }
   else {
      VAR_3 = 0;
      VAR_4 = 0;
      VAR_5 = VAR_2->Buffer->Height;
      VAR_6 = VAR_2->Buffer->Width;
   }

   if (VAR_2->Visual->RGBAflag) {

      GLubyte VAR_7[VAR_1], VAR_8[VAR_1];
      GLubyte VAR_9[VAR_1], VAR_10[VAR_1];
      GLubyte VAR_11 = VAR_2->Color.ClearColor[0] * VAR_2->Visual->RedScale;
      GLubyte VAR_12 = VAR_2->Color.ClearColor[1] * VAR_2->Visual->GreenScale;
      GLubyte VAR_13 = VAR_2->Color.ClearColor[2] * VAR_2->Visual->BlueScale;
      GLubyte VAR_14 = VAR_2->Color.ClearColor[3] * VAR_2->Visual->AlphaScale;
      GLint VAR_15;
      for (VAR_15=0;VAR_15<VAR_5;VAR_15++,VAR_4++) {
         FUNC_0( VAR_7, (int) VAR_11, VAR_6 );
         FUNC_0( VAR_8, (int) VAR_12, VAR_6 );
         FUNC_0( VAR_9, (int) VAR_13, VAR_6 );
         FUNC_0( VAR_10, (int) VAR_14, VAR_6 );
         FUNC_1( VAR_2, VAR_6, VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10 );
         (*VAR_2->Driver.WriteColorSpan)( VAR_2,
                                 VAR_6, VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_10, ((void*)0) );
         if (VAR_2->RasterMask & VAR_0) {
            FUNC_3( VAR_2, VAR_6, VAR_3, VAR_4, VAR_10, ((void*)0) );
         }
      }
   }
   else {

      GLuint VAR_16[VAR_1];
      GLubyte VAR_17[VAR_1];
      GLint VAR_18, VAR_19;
      FUNC_0( VAR_17, 1, VAR_6 );
      for (VAR_18=0;VAR_18<VAR_5;VAR_18++,VAR_4++) {
         for (VAR_19=0;VAR_19<VAR_6;VAR_19++) {
            VAR_16[VAR_19] = VAR_2->Color.ClearIndex;
         }
         FUNC_2( VAR_2, VAR_6, VAR_3, VAR_4, VAR_16 );
         (*VAR_2->Driver.WriteIndexSpan)( VAR_2, VAR_6, VAR_3, VAR_4, VAR_16, VAR_17 );
      }
   }
}
