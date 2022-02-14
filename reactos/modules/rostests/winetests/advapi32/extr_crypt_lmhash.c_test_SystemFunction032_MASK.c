
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ustring {unsigned char* Buffer; int Length; int MaximumLength; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ustring*,struct ustring*) ;

__attribute__((used)) static void FUNC_3(void)
{
    struct ustring VAR_1, VAR_2;
    unsigned char VAR_3[] = { 'f','o','o',0 };
    unsigned char VAR_4[8] = { 'b','a','r',0 };
    unsigned char VAR_5[] = {0x28, 0xb9, 0xf8, 0xe1};
    int VAR_6;



    VAR_1.Buffer = VAR_3;
    VAR_1.Length = sizeof VAR_3;
    VAR_1.MaximumLength = VAR_1.Length;

    VAR_2.Buffer = VAR_4;
    VAR_2.Length = 4;
    VAR_2.MaximumLength = 8;

    VAR_6 = FUNC_2(&VAR_2, &VAR_1);
    FUNC_1(VAR_6 == VAR_0, "function failed\n");

    FUNC_1(!FUNC_0(VAR_5, VAR_2.Buffer, VAR_2.Length), "wrong result\n");
}
