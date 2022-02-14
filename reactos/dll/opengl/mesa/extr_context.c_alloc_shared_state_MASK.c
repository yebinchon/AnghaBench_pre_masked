
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_shared_state {void* Default2D; void* Default1D; void* TexObjects; void* DisplayList; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct gl_shared_state*) ;
 void* FUNC_4 (struct gl_shared_state*,int ,int) ;
 int FUNC_5 (struct gl_shared_state*,void*) ;

__attribute__((used)) static struct gl_shared_state *FUNC_6( void )
{
   struct gl_shared_state *VAR_0;

   VAR_0 = (struct gl_shared_state*) FUNC_2( 1, sizeof(struct gl_shared_state) );
   if (!VAR_0)
      return ((void*)0);

   VAR_0->DisplayList = FUNC_1();

   VAR_0->TexObjects = FUNC_1();


   VAR_0->Default1D = FUNC_4(VAR_0, 0, 1);
   VAR_0->Default2D = FUNC_4(VAR_0, 0, 2);

   if (!VAR_0->DisplayList || !VAR_0->TexObjects
       || !VAR_0->Default1D || !VAR_0->Default2D) {

      if (!VAR_0->DisplayList)
         FUNC_0(VAR_0->DisplayList);
      if (!VAR_0->TexObjects)
         FUNC_0(VAR_0->TexObjects);
      if (!VAR_0->Default1D)
         FUNC_5(VAR_0, VAR_0->Default1D);
      if (!VAR_0->Default2D)
         FUNC_5(VAR_0, VAR_0->Default2D);
      FUNC_3(VAR_0);
      return ((void*)0);
   }
   else {
      return VAR_0;
   }
}
