
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


struct TYPE_17__ {scalar_t__ DrawBuffer; } ;
struct TYPE_16__ {int (* SetBuffer ) (TYPE_6__*,scalar_t__) ;} ;
struct TYPE_15__ {float ZoomX; float ZoomY; scalar_t__ ReadBuffer; size_t IndexShift; size_t IndexOffset; size_t MapItoIsize; size_t* MapItoI; scalar_t__ MapColorFlag; } ;
struct TYPE_14__ {int* RasterPos; } ;
struct TYPE_13__ {scalar_t__ Test; } ;
struct TYPE_18__ {TYPE_5__ Color; TYPE_4__ Driver; TYPE_3__ Pixel; TYPE_2__ Current; TYPE_1__ Depth; } ;
typedef size_t GLuint ;
typedef size_t GLint ;
typedef size_t GLdepth ;
typedef TYPE_6__ GLcontext ;
typedef int GLboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,size_t,size_t,size_t,size_t*) ;
 int FUNC_1 (TYPE_6__*,size_t,size_t,size_t,size_t*,size_t*,int ) ;
 int FUNC_2 (TYPE_6__*,size_t,size_t,size_t,size_t*,size_t*,size_t) ;
 int FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_6__*,scalar_t__) ;

__attribute__((used)) static void FUNC_5( GLcontext* VAR_5,
                            GLint VAR_6, GLint VAR_7, GLint VAR_8, GLint VAR_9,
                            GLint VAR_10, GLint VAR_11 )
{
   GLdepth VAR_12[VAR_4];
   GLuint VAR_13[VAR_4];
   GLint VAR_14, VAR_15, VAR_16;
   GLint VAR_17, VAR_18;
   GLboolean VAR_19, VAR_20;

   if (VAR_5->Pixel.ZoomX==1.0F && VAR_5->Pixel.ZoomY==1.0F) {
      VAR_20 = VAR_2;
   }
   else {
      VAR_20 = VAR_3;
   }


   if (VAR_7<VAR_11) {

      VAR_14 = VAR_7 + VAR_9 - 1;
      VAR_15 = VAR_11 + VAR_9 - 1;
      VAR_16 = -1;
   }
   else {

      VAR_14 = VAR_7;
      VAR_15 = VAR_11;
      VAR_16 = 1;
   }

   if (VAR_5->Depth.Test) {

      GLint VAR_21 = (GLint) (VAR_5->Current.RasterPos[2] * VAR_0);
      for (VAR_17=0;VAR_17<VAR_8;VAR_17++) {
         VAR_12[VAR_17] = VAR_21;
      }
   }


   VAR_19 = VAR_5->Pixel.ReadBuffer!=VAR_5->Color.DrawBuffer;

   for (VAR_18=0; VAR_18<VAR_9; VAR_18++, VAR_14+=VAR_16, VAR_15+=VAR_16) {

      if (VAR_19) {
         (*VAR_5->Driver.SetBuffer)( VAR_5, VAR_5->Pixel.ReadBuffer );
      }
      FUNC_0( VAR_5, VAR_8, VAR_6, VAR_14, VAR_13 );


      if (VAR_5->Pixel.IndexShift || VAR_5->Pixel.IndexOffset) {
         if (VAR_5->Pixel.IndexShift<0) {
            for (VAR_17=0;VAR_17<VAR_8;VAR_17++) {
               VAR_13[VAR_17] = (VAR_13[VAR_17] >> -VAR_5->Pixel.IndexShift)
                         + VAR_5->Pixel.IndexOffset;
            }
         }
         else {
            for (VAR_17=0;VAR_17<VAR_8;VAR_17++) {
               VAR_13[VAR_17] = (VAR_13[VAR_17] << VAR_5->Pixel.IndexShift)
                         + VAR_5->Pixel.IndexOffset;
            }
         }
      }


      if (VAR_5->Pixel.MapColorFlag) {
         for (VAR_17=0;VAR_17<VAR_8;VAR_17++) {
            if (VAR_13[VAR_17] < VAR_5->Pixel.MapItoIsize) {
               VAR_13[VAR_17] = VAR_5->Pixel.MapItoI[ VAR_13[VAR_17] ];
            }
         }
      }


      if (VAR_19) {
         (*VAR_5->Driver.SetBuffer)( VAR_5, VAR_5->Color.DrawBuffer );
      }
      if (VAR_20) {
         FUNC_2( VAR_5, VAR_8, VAR_10, VAR_15, VAR_12, VAR_13, VAR_11 );
      }
      else {
         FUNC_1( VAR_5, VAR_8, VAR_10, VAR_15, VAR_12, VAR_13, VAR_1 );
      }
   }
}
