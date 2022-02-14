
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int small ;
typedef int dest ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,char,int) ;
 int FUNC_1 (int,char*,unsigned char,...) ;
 int FUNC_2 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    unsigned char VAR_1[8];
    const unsigned char VAR_2[] = "atoolongstringforthislittledestination";
    const unsigned char VAR_3[] = "small";
    int VAR_4;

    if(!&FUNC_2)
    {
        FUNC_3("_mbsnbcpy_s not found\n");
        return;
    }

    FUNC_0(VAR_1, 'X', sizeof(VAR_1));
    VAR_4 = FUNC_2(VAR_1, sizeof(VAR_1), VAR_3, sizeof(VAR_3));
    FUNC_1(VAR_4 == 0, "_mbsnbcpy_s: Copying a string into a big enough destination returned %d, expected 0\n", VAR_4);
    FUNC_1(VAR_1[0] == 's' && VAR_1[1] == 'm' && VAR_1[2] == 'a' && VAR_1[3] == 'l' &&
       VAR_1[4] == 'l' && VAR_1[5] == '\0'&& VAR_1[6] == 'X' && VAR_1[7] == 'X',
       "Unexpected return data from _mbsnbcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);


    FUNC_0(VAR_1, 'X', sizeof(VAR_1));
    VAR_4 = FUNC_2(VAR_1, sizeof(VAR_1) - 2, VAR_2, sizeof(VAR_3));
    FUNC_1(VAR_4 == VAR_0, "_mbsnbcpy_s: Copying a too long string returned %d, expected ERANGE\n", VAR_4);
    FUNC_1(VAR_1[0] == '\0'&& VAR_1[1] == 't' && VAR_1[2] == 'o' && VAR_1[3] == 'o' &&
       VAR_1[4] == 'l' && VAR_1[5] == 'o' && VAR_1[6] == 'X' && VAR_1[7] == 'X',
       "Unexpected return data from _mbsnbcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);

    FUNC_0(VAR_1, 'X', sizeof(VAR_1));
    VAR_4 = FUNC_2(VAR_1, sizeof(VAR_1) - 2, VAR_2, 4);
    FUNC_1(VAR_4 == 0, "_mbsnbcpy_s: Copying a too long string with a count cap returned %d, expected 0\n", VAR_4);
    FUNC_1(VAR_1[0] == 'a' && VAR_1[1] == 't' && VAR_1[2] == 'o' && VAR_1[3] == 'o' &&
       VAR_1[4] == '\0'&& VAR_1[5] == 'X' && VAR_1[6] == 'X' && VAR_1[7] == 'X',
       "Unexpected return data from _mbsnbcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);

    FUNC_0(VAR_1, 'X', sizeof(VAR_1));
    VAR_4 = FUNC_2(VAR_1, sizeof(VAR_1) - 2, VAR_3, sizeof(VAR_3) + 10);
    FUNC_1(VAR_4 == 0, "_mbsnbcpy_s: Copying more data than the source string len returned %d, expected 0\n", VAR_4);
    FUNC_1(VAR_1[0] == 's' && VAR_1[1] == 'm' && VAR_1[2] == 'a' && VAR_1[3] == 'l' &&
       VAR_1[4] == 'l' && VAR_1[5] == '\0'&& VAR_1[6] == 'X' && VAR_1[7] == 'X',
       "Unexpected return data from _mbsnbcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7]);
}
