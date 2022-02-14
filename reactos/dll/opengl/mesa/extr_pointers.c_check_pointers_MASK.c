
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_api_table {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void FUNC_2( struct gl_api_table *VAR_0 )
{
   void **VAR_1;
   int VAR_2 = sizeof( struct gl_api_table ) / sizeof(void*);
   int VAR_3;

   VAR_1 = (void **) VAR_0;

   for (VAR_3=0;VAR_3<VAR_2;VAR_3++) {
      if (!VAR_1[VAR_3]) {
         FUNC_1("found uninitialized function pointer at %d\n", VAR_3 );
         FUNC_0(((void*)0), "Missing pointer in pointers.c");

      }
   }
}
