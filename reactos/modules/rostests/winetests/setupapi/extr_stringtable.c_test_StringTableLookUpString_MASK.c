
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HSTRING_TABLE ;
typedef unsigned int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,...) ;
 unsigned int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 () ;
 unsigned int FUNC_5 (int *,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(void)
{
    DWORD VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    HSTRING_TABLE VAR_9, VAR_10;

    VAR_9 = FUNC_4();
    FUNC_0(VAR_9 != ((void*)0),"failed to initialize string table\n");

    VAR_6 = FUNC_1(VAR_9, VAR_3, 0);
    FUNC_0(VAR_6 != ~0u, "failed to add 'string' to string table\n");

    VAR_7 = FUNC_1(VAR_9, VAR_1, 0);
    FUNC_0(VAR_7 != ~0u,"failed to add 'String' to string table\n");

    VAR_8 = FUNC_1(VAR_9, VAR_2, 0);
    FUNC_0(VAR_8 != ~0u, "failed to add 'foo' to string table\n");

    VAR_10 = FUNC_3(VAR_9);
    FUNC_0(VAR_10 != ((void*)0), "Failed to duplicate String Table\n");


    VAR_4=FUNC_5(VAR_9,VAR_3,0);
    FUNC_0(VAR_4!=-1,"Failed find string in String Table 1\n");
    FUNC_0(VAR_4==VAR_6,
        "Lookup for string (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_4, VAR_6);

    VAR_4=FUNC_5(VAR_10,VAR_3,0);
    FUNC_0(VAR_4!=-1,"Failed find string in String Table 2\n");

    VAR_4=FUNC_5(VAR_9,VAR_1,0);
    FUNC_0(VAR_4!=-1,"Failed find String in String Table 1\n");

    VAR_4=FUNC_5(VAR_10,VAR_1,0);
    FUNC_0(VAR_4!=-1,"Failed find String in String Table 2\n");

    VAR_4=FUNC_5(VAR_9,VAR_2,0);
    FUNC_0(VAR_4!=-1,"Failed find foo in String Table 1\n");
    FUNC_0(VAR_4==VAR_8,
        "Lookup for foo (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_4, VAR_8);

    VAR_4=FUNC_5(VAR_10,VAR_2,0);
    FUNC_0(VAR_4!=-1,"Failed find foo in String Table 2\n");


    VAR_4=FUNC_5(VAR_9,VAR_3,VAR_0);
    VAR_5=FUNC_5(VAR_9,VAR_1,VAR_0);
    FUNC_0(VAR_4!=VAR_5,"Lookup of string equals String in Table 1\n");
    FUNC_0(VAR_4==VAR_7,
        "Lookup for String (%x) does not match previous handle (%x) in String Table 1\n",
        VAR_4, VAR_7);

    FUNC_2(VAR_9);
    FUNC_2(VAR_10);
}
