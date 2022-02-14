
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostent {int h_length; int** h_addr_list; } ;
typedef int BYTE ;


 int FUNC_0 () ;
 struct hostent* FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    struct hostent *VAR_1;
    char VAR_2[256];
    static BYTE VAR_3[] = {127, 0, 0, 1};
    static BYTE VAR_4[] = {127, 12, 34, 56};
    int VAR_5;

    VAR_5 = FUNC_2(VAR_2, 256);
    FUNC_4(VAR_5 == 0, "gethostname() call failed: %d\n", FUNC_0());

    VAR_1 = FUNC_1("localhost");
    FUNC_4(VAR_1 != ((void*)0), "gethostbyname(\"localhost\") failed: %d\n", VAR_0);
    if(VAR_1)
    {
        if(VAR_1->h_length != 4)
        {
            FUNC_5("h_length is %d, not IPv4, skipping test.\n", VAR_1->h_length);
            return;
        }

        FUNC_4(FUNC_3(VAR_1->h_addr_list[0], VAR_3, VAR_1->h_length) == 0,
           "gethostbyname(\"localhost\") returned %u.%u.%u.%u\n",
           VAR_1->h_addr_list[0][0], VAR_1->h_addr_list[0][1], VAR_1->h_addr_list[0][2],
           VAR_1->h_addr_list[0][3]);
    }

    if(FUNC_6(VAR_2, "localhost") == 0)
    {
        FUNC_5("hostname seems to be \"localhost\", skipping test.\n");
        return;
    }

    VAR_1 = FUNC_1(VAR_2);
    FUNC_4(VAR_1 != ((void*)0), "gethostbyname(\"%s\") failed: %d\n", VAR_2, VAR_0);
    if(VAR_1)
    {
        if(VAR_1->h_length != 4)
        {
            FUNC_5("h_length is %d, not IPv4, skipping test.\n", VAR_1->h_length);
            return;
        }

        if (VAR_1->h_addr_list[0][0] == 127)
        {
            FUNC_4(FUNC_3(VAR_1->h_addr_list[0], VAR_4, VAR_1->h_length) == 0,
               "gethostbyname(\"%s\") returned %u.%u.%u.%u not 127.12.34.56\n",
               VAR_2, VAR_1->h_addr_list[0][0], VAR_1->h_addr_list[0][1],
               VAR_1->h_addr_list[0][2], VAR_1->h_addr_list[0][3]);
        }
    }

    FUNC_1("nonexistent.winehq.org");


}
