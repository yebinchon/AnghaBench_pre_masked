
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,int ,int ,int*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int*,int) ;
 int * FUNC_4 () ;
 int * FUNC_5 (int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    HANDLE VAR_9;
    BOOL VAR_10;

    VAR_9 = FUNC_4();
    FUNC_0(VAR_9 != ((void*)0),"Failed to Initialize String Table\n");


    VAR_5 = FUNC_1(VAR_9, VAR_3, 0, ((void*)0), 0);
    FUNC_0(VAR_5 != -1, "Failed to add string to String Table\n");

    VAR_4 = FUNC_1(VAR_9, VAR_1, 0, ((void*)0), 0);
    FUNC_0(VAR_4 != -1, "Failed to add String to String Table\n");
    FUNC_0(VAR_5 == VAR_4, "string handle %x != String handle %x in String Table\n", VAR_5, VAR_4);

    VAR_7 = FUNC_1(VAR_9, VAR_2, 0, ((void*)0), 0);
    FUNC_0(VAR_7 != -1, "Failed to add foo to String Table\n");
    FUNC_0(VAR_7 != VAR_5, "foo and string share the same ID %x in String Table\n", VAR_7);


    VAR_6 = FUNC_1(VAR_9, VAR_1, VAR_0, ((void*)0), 0);
    FUNC_0(VAR_5 != VAR_6, "String handle and string share same ID %x in Table\n", VAR_5);

    FUNC_2(VAR_9);


    VAR_9 = FUNC_5(4, 0);
    FUNC_0(VAR_9 != ((void*)0), "Failed to Initialize String Table\n");

    VAR_8 = 10;
    VAR_5 = FUNC_1(VAR_9, VAR_3, 0, &VAR_8, 4);
    FUNC_0(VAR_5 != -1, "failed to add string, %d\n", VAR_5);

    VAR_8 = 0;
    VAR_10 = FUNC_3(VAR_9, VAR_5, &VAR_8, 4);
    FUNC_0(VAR_10 && VAR_8 == 10, "got %d, extra %d\n", VAR_10, VAR_8);

    VAR_8 = 11;
    VAR_5 = FUNC_1(VAR_9, VAR_3, 0, &VAR_8, 4);
    FUNC_0(VAR_5 != -1, "failed to add string, %d\n", VAR_5);

    VAR_8 = 0;
    VAR_10 = FUNC_3(VAR_9, VAR_5, &VAR_8, 4);
    FUNC_0(VAR_10 && VAR_8 == 10, "got %d, extra %d\n", VAR_10, VAR_8);

    FUNC_2(VAR_9);
}
