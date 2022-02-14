
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PUCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int * VAR_3 ;

int FUNC_2()
{
   int VAR_4;
   PUCHAR VAR_5;

   VAR_5 = FUNC_0(((void*)0),
         VAR_2,
         VAR_0,
         VAR_1);
   if (VAR_5 == ((void*)0))
     {
 FUNC_1("Failed to allocate virtual memory");
 return(1);
     }
   FUNC_1("BaseAddress %p\n", VAR_5);
   for (VAR_4 = 0; VAR_4 < (VAR_2 / 4096); VAR_4++)
     {
 FUNC_1("%.8x  ", VAR_4*4096);
 VAR_3[VAR_4] = VAR_5[VAR_4*4096];
     }

   return(0);
}
