
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef int * HMODULE ;
typedef int * BOOL ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int VAR_0 ;
 int * FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (int,char*,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HMODULE VAR_2, VAR_3;
    NTSTATUS VAR_4;
    BOOL VAR_5;

    if (!&FUNC_4)
    {
        FUNC_5( "LdrAddRefDll not supported\n" );
        return;
    }

    VAR_2 = FUNC_2("comctl32.dll");
    FUNC_3(VAR_2 != ((void*)0), "got %p\n", VAR_2);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);

    VAR_3 = FUNC_1("comctl32.dll");
    FUNC_3(VAR_3 == ((void*)0), "got %p\n", VAR_3);


    VAR_2 = FUNC_2("comctl32.dll");
    FUNC_3(VAR_2 != ((void*)0), "got %p\n", VAR_2);
    VAR_4 = FUNC_4(0, VAR_2);
    FUNC_3(VAR_4 == VAR_1, "got 0x%08x\n", &VAR_4);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);

    VAR_3 = FUNC_1("comctl32.dll");
    FUNC_3(VAR_3 != ((void*)0), "got %p\n", VAR_3);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);

    VAR_3 = FUNC_1("comctl32.dll");
    FUNC_3(VAR_3 == ((void*)0), "got %p\n", VAR_3);


    VAR_2 = FUNC_2("comctl32.dll");
    FUNC_3(VAR_2 != ((void*)0), "got %p\n", VAR_2);
    VAR_4 = FUNC_4(VAR_0, VAR_2);
    FUNC_3(VAR_4 == VAR_1, "got 0x%08x\n", &VAR_4);

    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);
    VAR_5 = FUNC_0(VAR_2);
    FUNC_3(*VAR_5, "got %d\n", VAR_5);

    VAR_3 = FUNC_1("comctl32.dll");
    FUNC_3(VAR_3 != ((void*)0), "got %p\n", VAR_3);
}
