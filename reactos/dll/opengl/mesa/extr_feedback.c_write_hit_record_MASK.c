
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int HitMinZ; int HitMaxZ; size_t NameStackDepth; size_t* NameStack; int HitFlag; int Hits; } ;
struct TYPE_6__ {TYPE_1__ Select; } ;
typedef size_t GLuint ;
typedef int GLfloat ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( GLcontext *VAR_1 )
{
   GLuint VAR_2;
   GLuint VAR_3, VAR_4, VAR_5 = (~0u);




   FUNC_1( VAR_1 != ((void*)0) );
   VAR_3 = (GLuint) ((GLfloat) VAR_5 * VAR_1->Select.HitMinZ);
   VAR_4 = (GLuint) ((GLfloat) VAR_5 * VAR_1->Select.HitMaxZ);

   FUNC_0( VAR_1, VAR_1->Select.NameStackDepth );
   FUNC_0( VAR_1, VAR_3 );
   FUNC_0( VAR_1, VAR_4 );
   for (VAR_2=0;VAR_2<VAR_1->Select.NameStackDepth;VAR_2++) {
      FUNC_0( VAR_1, VAR_1->Select.NameStack[VAR_2] );
   }

   VAR_1->Select.Hits++;
   VAR_1->Select.HitFlag = VAR_0;
   VAR_1->Select.HitMinZ = 1.0;
   VAR_1->Select.HitMaxZ = -1.0;
}
