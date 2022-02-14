
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char,int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (char*,int,char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    char VAR_2[8];
    const char *VAR_3 = "sma";
    int VAR_4;

    if(!&FUNC_2)
    {
        FUNC_3("strcat_s not found\n");
        return;
    }

    FUNC_0(VAR_2, 'X', sizeof(VAR_2));
    VAR_2[0] = '\0';
    VAR_4 = FUNC_2(VAR_2, sizeof(VAR_2), VAR_3);
    FUNC_1(VAR_4 == 0, "strcat_s: Copying a string into a big enough destination returned %d, expected 0\n", VAR_4);
    FUNC_1(VAR_2[0] == 's' && VAR_2[1] == 'm' && VAR_2[2] == 'a' && VAR_2[3] == '\0'&&
       VAR_2[4] == 'X' && VAR_2[5] == 'X' && VAR_2[6] == 'X' && VAR_2[7] == 'X',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);
    VAR_4 = FUNC_2(VAR_2, sizeof(VAR_2), VAR_3);
    FUNC_1(VAR_4 == 0, "strcat_s: Attaching a string to a big enough destination returned %d, expected 0\n", VAR_4);
    FUNC_1(VAR_2[0] == 's' && VAR_2[1] == 'm' && VAR_2[2] == 'a' && VAR_2[3] == 's' &&
       VAR_2[4] == 'm' && VAR_2[5] == 'a' && VAR_2[6] == '\0'&& VAR_2[7] == 'X',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

    VAR_4 = FUNC_2(VAR_2, sizeof(VAR_2), VAR_3);
    FUNC_1(VAR_4 == VAR_1, "strcat_s: Attaching a string to a filled up destination returned %d, expected ERANGE\n", VAR_4);
    FUNC_1(VAR_2[0] == '\0'&& VAR_2[1] == 'm' && VAR_2[2] == 'a' && VAR_2[3] == 's' &&
       VAR_2[4] == 'm' && VAR_2[5] == 'a' && VAR_2[6] == 's' && VAR_2[7] == 'm',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

    FUNC_0(VAR_2, 'X', sizeof(VAR_2));
    VAR_2[0] = 'a';
    VAR_2[1] = '\0';

    VAR_4 = FUNC_2(VAR_2, 0, VAR_3);
    FUNC_1(VAR_4 == VAR_0, "strcat_s: Source len = 0 returned %d, expected EINVAL\n", VAR_4);
    FUNC_1(VAR_2[0] == 'a' && VAR_2[1] == '\0'&& VAR_2[2] == 'X' && VAR_2[3] == 'X' &&
       VAR_2[4] == 'X' && VAR_2[5] == 'X' && VAR_2[6] == 'X' && VAR_2[7] == 'X',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

    VAR_4 = FUNC_2(VAR_2, 0, ((void*)0));
    FUNC_1(VAR_4 == VAR_0, "strcat_s: len = 0 and src = NULL returned %d, expected EINVAL\n", VAR_4);
    FUNC_1(VAR_2[0] == 'a' && VAR_2[1] == '\0'&& VAR_2[2] == 'X' && VAR_2[3] == 'X' &&
       VAR_2[4] == 'X' && VAR_2[5] == 'X' && VAR_2[6] == 'X' && VAR_2[7] == 'X',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

    VAR_4 = FUNC_2(VAR_2, sizeof(VAR_2), ((void*)0));
    FUNC_1(VAR_4 == VAR_0, "strcat_s:  Sourcing from NULL returned %d, expected EINVAL\n", VAR_4);
    FUNC_1(VAR_2[0] == '\0'&& VAR_2[1] == '\0'&& VAR_2[2] == 'X' && VAR_2[3] == 'X' &&
       VAR_2[4] == 'X' && VAR_2[5] == 'X' && VAR_2[6] == 'X' && VAR_2[7] == 'X',
       "Unexpected return data from strcpy_s: 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x\n",
       VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3], VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

    VAR_4 = FUNC_2(((void*)0), sizeof(VAR_2), VAR_3);
    FUNC_1(VAR_4 == VAR_0, "strcat_s: Writing to a NULL string returned %d, expected EINVAL\n", VAR_4);
}
