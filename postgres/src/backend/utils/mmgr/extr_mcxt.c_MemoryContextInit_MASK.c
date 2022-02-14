
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MemoryContext ;


 int VAR_0 ;
 void* FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (void*,int) ;
 int * VAR_3 ;

void
FUNC_3(void)
{
 FUNC_1(VAR_3 == ((void*)0));




 VAR_3 = FUNC_0((MemoryContext) ((void*)0),
            "TopMemoryContext",
            VAR_0);





 VAR_1 = VAR_3;
 VAR_2 = FUNC_0(VAR_3,
           "ErrorContext",
           8 * 1024,
           8 * 1024,
           8 * 1024);
 FUNC_2(VAR_2, 1);
}
