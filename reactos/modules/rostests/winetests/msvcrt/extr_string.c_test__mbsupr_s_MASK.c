
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char* errno_t ;
typedef int buffer ;


 unsigned char* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (unsigned char*,char*,int) ;
 int FUNC_2 (int,char*,unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    errno_t VAR_3;
    unsigned char VAR_4[20];

    if (!&FUNC_3)
    {
        FUNC_4("Skipping _mbsupr_s tests\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(((void*)0), 0);
    FUNC_2(VAR_3 == 0, "Expected _mbsupr_s to return 0, got %d\n", VAR_3);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(((void*)0), sizeof(VAR_4));
    FUNC_2(VAR_3 == VAR_1, "Expected _mbsupr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, 0);
    FUNC_2(VAR_3 == VAR_1, "Expected _mbsupr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    FUNC_1(VAR_4, "abcdefgh", sizeof("abcdefgh"));
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, sizeof("abcdefgh"));
    FUNC_2(VAR_3 == 0, "Expected _mbsupr_s to return 0, got %d\n", VAR_3);
    FUNC_2(!FUNC_0(VAR_4, "ABCDEFGH", sizeof("ABCDEFGH")),
       "Expected the output buffer to be \"ABCDEFGH\", got \"%s\"\n",
       VAR_4);

    FUNC_1(VAR_4, "abcdefgh", sizeof("abcdefgh"));
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4));
    FUNC_2(VAR_3 == 0, "Expected _mbsupr_s to return 0, got %d\n", VAR_3);
    FUNC_2(!FUNC_0(VAR_4, "ABCDEFGH", sizeof("ABCDEFGH")),
       "Expected the output buffer to be \"ABCDEFGH\", got \"%s\"\n",
       VAR_4);

    FUNC_1(VAR_4, "abcdefgh", sizeof("abcdefgh"));
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, 4);
    FUNC_2(VAR_3 == VAR_1, "Expected _mbsupr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    FUNC_1(VAR_4, "abcdefgh\0ijklmnop", sizeof("abcdefgh\0ijklmnop"));
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4));
    FUNC_2(VAR_3 == 0, "Expected _mbsupr_s to return 0, got %d\n", VAR_3);
    FUNC_2(!FUNC_0(VAR_4, "ABCDEFGH\0ijklmnop", sizeof("ABCDEFGH\0ijklmnop")),
       "Expected the output buffer to be \"ABCDEFGH\\0ijklmnop\", got \"%s\"\n",
       VAR_4);

}
