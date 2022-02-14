
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t IndexMask; } ;
struct TYPE_7__ {int (* ReadIndexPixels ) (TYPE_3__*,size_t,int const*,int const*,size_t*,int const*) ;} ;
struct TYPE_8__ {TYPE_1__ Color; TYPE_2__ Driver; } ;
typedef size_t GLuint ;
typedef int GLubyte ;
typedef int GLint ;
typedef TYPE_3__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t,int const*,int const*,size_t*,int const*) ;

void FUNC_1( GLcontext *VAR_1,
                           GLuint VAR_2, const GLint VAR_3[], const GLint VAR_4[],
                           GLuint VAR_5[], const GLubyte VAR_6[] )
{
   GLuint VAR_7;
   GLuint VAR_8[VAR_0];
   GLuint VAR_9, VAR_10;

   (*VAR_1->Driver.ReadIndexPixels)( VAR_1, VAR_2, VAR_3, VAR_4, VAR_8, VAR_6 );

   VAR_9 = VAR_1->Color.IndexMask;
   VAR_10 = ~VAR_9;

   for (VAR_7=0;VAR_7<VAR_2;VAR_7++) {
      VAR_5[VAR_7] = (VAR_5[VAR_7] & VAR_9) | (VAR_8[VAR_7] & VAR_10);
   }
}
