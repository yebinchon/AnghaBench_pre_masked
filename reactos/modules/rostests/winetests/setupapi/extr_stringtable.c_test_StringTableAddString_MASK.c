
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HSTRING_TABLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_4, VAR_5, VAR_6, VAR_7;
    HSTRING_TABLE VAR_8;

    VAR_8 = FUNC_3();
    FUNC_0(VAR_8 != ((void*)0), "failed to initialize string table\n");


    VAR_5=FUNC_1(VAR_8,VAR_3,0);
    FUNC_0(VAR_5!=-1,"Failed to add string to String Table\n");

    VAR_4=FUNC_1(VAR_8,VAR_1,0);
    FUNC_0(VAR_4!=-1,"Failed to add String to String Table\n");
    FUNC_0(VAR_5==VAR_4,"string handle %x != String handle %x in String Table\n", VAR_5, VAR_4);

    VAR_7=FUNC_1(VAR_8,VAR_2,0);
    FUNC_0(VAR_7!=-1,"Failed to add foo to String Table\n");
    FUNC_0(VAR_7!=VAR_5,"foo and string share the same ID %x in String Table\n", VAR_7);


    VAR_6=FUNC_1(VAR_8,VAR_1,VAR_0);
    FUNC_0(VAR_5!=VAR_6,"String handle and string share same ID %x in Table\n", VAR_5);

    FUNC_2(VAR_8);
}
