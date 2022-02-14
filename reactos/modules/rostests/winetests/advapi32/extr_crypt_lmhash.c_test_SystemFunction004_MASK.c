
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustring {unsigned char* Buffer; int Length; int MaximumLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_4 (struct ustring*,struct ustring*,struct ustring*) ;

__attribute__((used)) static void FUNC_5(void)
{
    unsigned char VAR_3[0x100], VAR_4[0x100], VAR_5[0x100];
    unsigned char VAR_6[8];
    int VAR_7;
    struct ustring VAR_8, VAR_9, VAR_10;






    FUNC_1(VAR_3, 0, sizeof VAR_3);
    FUNC_1(VAR_4, 0, sizeof VAR_4);
    FUNC_1(VAR_5, 0, sizeof VAR_5);

    VAR_8.Buffer = ((void*)0);
    VAR_8.Length = VAR_8.MaximumLength = 0;

    VAR_9.Buffer = ((void*)0);
    VAR_9.Length = VAR_9.MaximumLength = 0;

    VAR_10.Buffer = ((void*)0);
    VAR_10.Length = VAR_10.MaximumLength = 0;

    VAR_7 = FUNC_4(&VAR_8, &VAR_9, &VAR_10);
    FUNC_2(VAR_7 == VAR_1, "function failed\n");

    VAR_9.Buffer = VAR_4;
    VAR_9.Length = 0x100;
    VAR_9.MaximumLength = 0x100;

    VAR_7 = FUNC_4(&VAR_8, &VAR_9, &VAR_10);
    FUNC_2(VAR_7 == VAR_0, "function failed\n");

    VAR_8.Buffer = VAR_3;
    VAR_8.Length = 0x0c;
    VAR_8.MaximumLength = 0;


    VAR_3[0] = 1;
    VAR_3[1] = 2;
    VAR_3[2] = 3;
    VAR_3[3] = 4;

    VAR_3[8] = 1;
    VAR_3[9] = 2;
    VAR_3[10] = 3;
    VAR_3[11] = 4;


    VAR_4[6] = 1;

    VAR_9.Buffer = VAR_4;
    VAR_9.Length = 6;
    VAR_9.MaximumLength = 0;

    VAR_4[1] = 0x33;

    VAR_10.Buffer = VAR_5;
    VAR_10.Length = 0;
    VAR_10.MaximumLength = 0x40;
    VAR_7 = FUNC_4(&VAR_8, &VAR_9, &VAR_10);
    FUNC_2(VAR_7 == VAR_2, "function failed\n");

    VAR_4[6] = 0;

    FUNC_1(VAR_6, 0, sizeof VAR_6);
    VAR_7 = FUNC_3(VAR_10.Buffer, VAR_9.Buffer, VAR_6);
    FUNC_2(VAR_7 == VAR_2, "function failed\n");

    FUNC_2(((unsigned int*)VAR_6)[0] == VAR_8.Length, "crypted length wrong\n");
    FUNC_2(((unsigned int*)VAR_6)[1] == 1, "crypted value wrong\n");

    FUNC_1(VAR_6, 0, sizeof VAR_6);
    VAR_7 = FUNC_3(VAR_10.Buffer+8, VAR_9.Buffer, VAR_6);
    FUNC_2(VAR_7 == VAR_2, "function failed\n");
    FUNC_2(!FUNC_0(VAR_6, VAR_3, sizeof VAR_6), "crypted data wrong\n");

    FUNC_1(VAR_6, 0, sizeof VAR_6);
    VAR_7 = FUNC_3(VAR_10.Buffer+16, VAR_9.Buffer, VAR_6);
    FUNC_2(VAR_7 == VAR_2, "function failed\n");
    FUNC_2(!FUNC_0(VAR_6, VAR_3, sizeof VAR_6), "crypted data wrong\n");
}
