
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shared_state {int TexObjects; scalar_t__ TexObjectList; int DisplayList; } ;
typedef scalar_t__ GLuint ;
typedef int GLcontext ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gl_shared_state*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct gl_shared_state*,scalar_t__) ;

__attribute__((used)) static void FUNC_5( GLcontext *VAR_0, struct gl_shared_state *VAR_1 )
{

   while (1) {
      GLuint VAR_2 = FUNC_1(VAR_1->DisplayList);
      if (VAR_2) {
         FUNC_3(VAR_0, VAR_2);
      }
      else {
         break;
      }
   }
   FUNC_0(VAR_1->DisplayList);


   while (VAR_1->TexObjectList)
   {

      FUNC_4(VAR_1, VAR_1->TexObjectList);
   }
   FUNC_0(VAR_1->TexObjects);

   FUNC_2(VAR_1);
}
