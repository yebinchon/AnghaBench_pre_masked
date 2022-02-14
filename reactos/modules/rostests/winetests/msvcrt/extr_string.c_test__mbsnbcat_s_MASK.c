
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int second ;
typedef int first ;
typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,...) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (unsigned char*,char,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (unsigned char*,int,unsigned char const*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    unsigned char VAR_4[16];
    const unsigned char VAR_5[] = "dinosaur";
    const unsigned char VAR_6[] = "duck";
    int VAR_7;

    if (!&FUNC_4)
    {
        FUNC_5("Skipping _mbsnbcat_s tests\n");
        return;
    }


    VAR_7 = FUNC_4(((void*)0), 0, ((void*)0), 0);
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);

    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(((void*)0), 10, ((void*)0), 0);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);

    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(((void*)0), 0, ((void*)0), 10);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, 0, ((void*)0), 0);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_4[0] == 'X', "Expected the output buffer to be untouched\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, 0, VAR_6, 0);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_4[0] == 'X', "Expected the output buffer to be untouched\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), ((void*)0), 0);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_4[0] == '\0', "Expected the output buffer to be null terminated\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), ((void*)0), 10);
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(VAR_4[0] == '\0', "Expected the output buffer to be null terminated\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    VAR_4[0] = '\0';
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, VAR_6, sizeof(VAR_6)),
       "Expected the output buffer string to be \"duck\"\n");


    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, 0);
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, VAR_5, sizeof(VAR_5)),
       "Expected the output buffer string to be \"dinosaur\"\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, "dinosaurduck", sizeof("dinosaurduck")),
       "Expected the output buffer string to be \"dinosaurduck\"\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6) + 1);
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, "dinosaurduck", sizeof("dinosaurduck")),
       "Expected the output buffer string to be \"dinosaurduck\"\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6) - 1);
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, "dinosaurduck", sizeof("dinosaurduck")),
       "Expected the output buffer string to be \"dinosaurduck\"\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6) - 2);
    FUNC_3(VAR_7 == 0, "Expected _mbsnbcat_s to return 0, got %d\n", VAR_7);
    FUNC_3(!FUNC_0(VAR_4, "dinosaurduc", sizeof("dinosaurduc")),
       "Expected the output buffer string to be \"dinosaurduc\"\n");


    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_5) - 1, VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_7 == VAR_1, "Expected _mbsnbcat_s to return EINVAL, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_3);
    FUNC_3(!FUNC_0(VAR_4, "\0inosaur", sizeof("\0inosaur") - 1),
       "Expected the output buffer string to be \"\\0inosaur\" without ending null terminator\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_5), VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_7 == VAR_2, "Expected _mbsnbcat_s to return ERANGE, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_2, "Expected errno to be ERANGE, got %d\n", VAR_3);
    FUNC_3(!FUNC_0(VAR_4, "\0inosaurd", sizeof("\0inosaurd") - 1),
       "Expected the output buffer string to be \"\\0inosaurd\" without ending null terminator\n");

    FUNC_2(VAR_4, 'X', sizeof(VAR_4));
    FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    VAR_3 = VAR_0;
    VAR_7 = FUNC_4(VAR_4, sizeof(VAR_5) + 1, VAR_6, sizeof(VAR_6));
    FUNC_3(VAR_7 == VAR_2, "Expected _mbsnbcat_s to return ERANGE, got %d\n", VAR_7);
    FUNC_3(VAR_3 == VAR_2, "Expected errno to be ERANGE, got %d\n", VAR_3);
    FUNC_3(!FUNC_0(VAR_4, "\0inosaurdu", sizeof("\0inosaurdu") - 1),
       "Expected the output buffer string to be \"\\0inosaurdu\" without ending null terminator\n");
}
