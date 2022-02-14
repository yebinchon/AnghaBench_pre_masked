
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* Shared; } ;
struct TYPE_6__ {int DisplayList; } ;
typedef scalar_t__ GLuint ;
typedef scalar_t__ GLsizei ;
typedef TYPE_2__ GLcontext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 int FUNC_4 () ;

GLuint FUNC_5( GLcontext *VAR_2, GLsizei VAR_3 )
{
   GLuint VAR_4;

   if (FUNC_2(VAR_2)) {
      FUNC_3( VAR_2, VAR_0, "glGenLists" );
      return 0;
   }
   if (VAR_3<0) {
      FUNC_3( VAR_2, VAR_1, "glGenLists" );
      return 0;
   }
   if (VAR_3==0) {
      return 0;
   }

   VAR_4 = FUNC_0(VAR_2->Shared->DisplayList, VAR_3);
   if (VAR_4) {

      GLuint VAR_5;
      for (VAR_5=0; VAR_5<VAR_3; VAR_5++) {
         FUNC_1(VAR_2->Shared->DisplayList, VAR_4+VAR_5, FUNC_4());
      }
   }
   return VAR_4;
}
