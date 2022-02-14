
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ errno_t ;
typedef int buffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    errno_t VAR_3;
    char VAR_4[20];

    if (!&FUNC_3)
    {
        FUNC_6("Skipping _strlwr_s tests\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(((void*)0), 0);
    FUNC_2(VAR_3 == VAR_1, "Expected _strlwr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(((void*)0), sizeof(VAR_4));
    FUNC_2(VAR_3 == VAR_1, "Expected _strlwr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, 0);
    FUNC_2(VAR_3 == VAR_1, "Expected _strlwr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);

    FUNC_5(VAR_4, "GoRrIsTeR");
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, 5);
    FUNC_2(VAR_3 == VAR_1, "Expected _strlwr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_2(!FUNC_0(VAR_4, "\0oRrIsTeR", sizeof("\0oRrIsTeR")),
       "Expected the output buffer to be \"\\0oRrIsTeR\"\n");

    FUNC_5(VAR_4, "GoRrIsTeR");
    VAR_2 = VAR_0;
    VAR_3 = FUNC_3(VAR_4, sizeof("GoRrIsTeR") - 1);
    FUNC_2(VAR_3 == VAR_1, "Expected _strlwr_s to return EINVAL, got %d\n", VAR_3);
    FUNC_2(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_2(!FUNC_0(VAR_4, "\0oRrIsTeR", sizeof("\0oRrIsTeR")),
       "Expected the output buffer to be \"\\0oRrIsTeR\"\n");

    FUNC_5(VAR_4, "GoRrIsTeR");
    VAR_3 = FUNC_3(VAR_4, sizeof("GoRrIsTeR"));
    FUNC_2(VAR_3 == 0, "Expected _strlwr_s to return 0, got %d\n", VAR_3);
    FUNC_2(!FUNC_4(VAR_4, "gorrister"),
       "Expected the output buffer to be \"gorrister\", got \"%s\"\n",
       VAR_4);

    FUNC_1(VAR_4, "GoRrIsTeR\0ELLEN", sizeof("GoRrIsTeR\0ELLEN"));
    VAR_3 = FUNC_3(VAR_4, sizeof(VAR_4));
    FUNC_2(VAR_3 == 0, "Expected _strlwr_s to return 0, got %d\n", VAR_3);
    FUNC_2(!FUNC_0(VAR_4, "gorrister\0ELLEN", sizeof("gorrister\0ELLEN")),
       "Expected the output buffer to be \"gorrister\\0ELLEN\", got \"%s\"\n",
       VAR_4);
}
