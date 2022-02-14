
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* PolygonStipple ) (TYPE_3__*,int const*) ;} ;
struct TYPE_10__ {TYPE_1__ Exec; scalar_t__ ExecuteFlag; } ;
struct TYPE_9__ {void* data; } ;
typedef TYPE_2__ Node ;
typedef int GLubyte ;
typedef TYPE_3__ GLcontext ;


 int FUNC_0 (void*,int const*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int const*) ;

void FUNC_4( GLcontext *VAR_1, const GLubyte *VAR_2 )
{
   Node *VAR_3 = FUNC_1( VAR_1, VAR_0, 1 );
   if (VAR_3) {
      void *VAR_4;
      VAR_3[1].data = FUNC_2( 32 * 4 );
      VAR_4 = VAR_3[1].data;
      FUNC_0( VAR_4, VAR_2, 32 * 4 );
   }
   if (VAR_1->ExecuteFlag) {
      (*VAR_1->Exec.PolygonStipple)( VAR_1, VAR_2 );
   }
}
