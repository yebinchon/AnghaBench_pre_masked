
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (void*,int,int ,int *) ;
 void* VAR_3 ;
 int FUNC_2 (char*,int (*) (int)) ;
 int FUNC_3 (void*,int (*) (int),int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

int FUNC_6(void)
{
    unsigned char VAR_4[100];
    void* VAR_5;
    ULONG VAR_6;

    FUNC_4("NoExecute\n");

    FUNC_2("Executing within the code segment", FUNC_5);
    FUNC_3(VAR_3, FUNC_5, 100);
    FUNC_2("Executing within the data segment", (int(*)(int))VAR_3);
    FUNC_3(VAR_4, FUNC_5, 100);
    FUNC_2("Executing on stack segment", (int(*)(int))VAR_4);
    VAR_5 = FUNC_0(((void*)0), 100, VAR_0, VAR_2);
    FUNC_3(VAR_5, FUNC_5, 100);
    FUNC_2("Executing on the heap with protection PAGE_READWRITE", (int(*)(int))VAR_5);
    FUNC_1(VAR_5, 100, VAR_1, &VAR_6);
    FUNC_2("Executing on the heap with protection PAGE_EXECUTE", (int(*)(int))VAR_5);

    return 0;
}
