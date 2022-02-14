
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ZPassFunc; int ZFailFunc; } ;
struct TYPE_9__ {int (* DepthTestPixels ) (TYPE_4__*,size_t,int const*,int const*,int const*,int*) ;} ;
struct TYPE_8__ {scalar_t__ Test; } ;
struct TYPE_11__ {TYPE_3__ Stencil; TYPE_2__ Driver; TYPE_1__ Depth; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef int GLdepth ;
typedef TYPE_4__ GLcontext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,size_t,int const*,int const*,int ,int*) ;
 int FUNC_1 (TYPE_4__*,size_t,int const*,int const*,int const*,int*) ;

void FUNC_2( GLcontext *VAR_2,
                              GLuint VAR_3, const GLint VAR_4[], const GLint VAR_5[],
         const GLdepth VAR_6[], GLubyte VAR_7[] )
{
   if (VAR_2->Depth.Test==VAR_0) {



      FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_2->Stencil.ZPassFunc, VAR_7 );
   }
   else {



      GLubyte VAR_8[VAR_1], VAR_9[VAR_1], VAR_10[VAR_1];
      GLuint VAR_11;


      for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
  VAR_8[VAR_11] = VAR_9[VAR_11] = 0;
         VAR_10[VAR_11] = VAR_7[VAR_11];
      }


      if (VAR_2->Driver.DepthTestPixels)
         (*VAR_2->Driver.DepthTestPixels)( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7 );


      for (VAR_11=0;VAR_11<VAR_3;VAR_11++) {
         if (VAR_10[VAR_11]) {
            if (VAR_7[VAR_11]) {
               VAR_8[VAR_11] = 1;
            }
            else {
               VAR_9[VAR_11] = 1;
            }
         }
      }


      FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5,
                                  VAR_2->Stencil.ZFailFunc, VAR_9 );
      FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5,
                                  VAR_2->Stencil.ZPassFunc, VAR_8 );
   }

}
