
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int * HANDLE ;
typedef int BOOL ;


 int FUNC_0 (float*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (float*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,float*) ;
 int VAR_3 ;
 int FUNC_4 (float*,float const*) ;
 int FUNC_5 (float*,float*) ;
 int FUNC_6 (float*,float*) ;
 int FUNC_7 (int,char*,int ,...) ;
 int FUNC_8 (float*,float*,float const*,float const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (float*) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_4[] = {'f','i','l','e','.','t','s','t',0};
    static const WCHAR VAR_5[] = {'f','i','l','e',' ','(','2',')','.','t','s','t',0};
    static const WCHAR VAR_6[] = {'t','m','p',0};
    static const WCHAR VAR_7[] = {'n','a','m','e',0};
    static const WCHAR VAR_8[] = {'n','a','m','e',' ','(','2',')',0};
    WCHAR VAR_9[VAR_3], VAR_10[VAR_3], VAR_11[VAR_3];
    HANDLE VAR_12;
    BOOL VAR_13;

    if (!&FUNC_8)
    {
        FUNC_9("PathYetAnotherMakeUniqueName() is not available.\n");
        return;
    }

if (0)
{

    VAR_13 = FUNC_8(((void*)0), ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(!VAR_13, "got %d\n", VAR_13);

    VAR_13 = FUNC_8(VAR_9, ((void*)0), ((void*)0), ((void*)0));
    FUNC_7(!VAR_13, "got %d\n", VAR_13);
}

    FUNC_3(FUNC_0(VAR_11), VAR_11);


    VAR_9[0] = 0;
    VAR_13 = FUNC_8(VAR_9, VAR_11, VAR_4, ((void*)0));
    FUNC_7(VAR_13, "got %d\n", VAR_13);
    FUNC_6(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_4);
    FUNC_7(!FUNC_5(VAR_9, VAR_10), "got %s, expected %s\n", FUNC_10(VAR_9), FUNC_10(VAR_10));


    VAR_12 = FUNC_2(VAR_9, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_7(VAR_12 != ((void*)0), "got %p\n", *VAR_12);

    VAR_9[0] = 0;
    VAR_13 = FUNC_8(VAR_9, VAR_11, VAR_4, ((void*)0));
    FUNC_7(VAR_13, "got %d\n", VAR_13);
    FUNC_6(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_5);
    FUNC_7(!FUNC_5(VAR_9, VAR_10), "got %s, expected %s\n", FUNC_10(VAR_9), FUNC_10(VAR_10));

    FUNC_1(VAR_12);


    VAR_9[0] = 0;
    VAR_13 = FUNC_8(VAR_9, VAR_11, VAR_6, VAR_7);
    FUNC_7(VAR_13, "got %d\n", VAR_13);
    FUNC_6(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_7);
    FUNC_7(!FUNC_5(VAR_9, VAR_10), "got %s, expected %s\n", FUNC_10(VAR_9), FUNC_10(VAR_10));

    VAR_12 = FUNC_2(VAR_9, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_7(VAR_12 != ((void*)0), "got %p\n", *VAR_12);

    VAR_9[0] = 0;
    VAR_13 = FUNC_8(VAR_9, VAR_11, VAR_6, VAR_7);
    FUNC_7(VAR_13, "got %d\n", VAR_13);
    FUNC_6(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_8);
    FUNC_7(!FUNC_5(VAR_9, VAR_10), "got %s, expected %s\n", FUNC_10(VAR_9), FUNC_10(VAR_10));

    FUNC_1(VAR_12);


    VAR_9[0] = 0;
    VAR_13 = FUNC_8(VAR_9, VAR_11, ((void*)0), VAR_7);
    FUNC_7(VAR_13, "got %d\n", VAR_13);
    FUNC_6(VAR_10, VAR_11);
    FUNC_4(VAR_10, VAR_7);
    FUNC_7(!FUNC_5(VAR_9, VAR_10), "got %s, expected %s\n", FUNC_10(VAR_9), FUNC_10(VAR_10));
}
