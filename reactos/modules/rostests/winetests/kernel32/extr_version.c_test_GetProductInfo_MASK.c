
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,int,int,...) ;
 int FUNC_3 (int,int,int,int,int*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    DWORD VAR_2;
    DWORD VAR_3;
    DWORD VAR_4[] = {9,8,7,6,
                     7,0,0,0,
                     6,2,0,0,
                     6,1,2,0,
                     6,1,1,0,
                     6,1,0,2,
                     6,1,0,0,
                     6,0,3,0,
                     6,0,2,0,
                     6,0,1,5,
                     6,0,1,0,
                     6,0,0,0,
                     5,3,0,0,
                     5,2,0,0,
                     5,1,0,0,
                     5,0,0,0,
                     0};

    DWORD *VAR_5 = VAR_4;

    if (!&FUNC_3)
    {

        FUNC_4("GetProductInfo() not available\n");
        return;
    }

    while (*VAR_5)
    {

        VAR_2 = 0xdeadbeef;
        FUNC_1(0xdeadbeef);
        VAR_3 = FUNC_3(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], &VAR_2);

        if (VAR_5[0] >= 6)
            FUNC_2(VAR_3 && (VAR_2 > VAR_1) && (VAR_2 <= VAR_0),
               "got %d and 0x%x (expected TRUE and a valid PRODUCT_* value)\n", VAR_3, VAR_2);
        else
            FUNC_2(!VAR_3 && !VAR_2 && (FUNC_0() == 0xdeadbeef),
               "got %d and 0x%x with 0x%x (expected FALSE and PRODUCT_UNDEFINED with LastError untouched)\n",
               VAR_3, VAR_2, FUNC_0());

        VAR_5+= 4;
    }


    FUNC_1(0xdeadbeef);
    VAR_3 = FUNC_3(6, 1, 0, 0, ((void*)0));
    FUNC_2( (!VAR_3) && (FUNC_0() == 0xdeadbeef),
        "got %d with 0x%x (expected FALSE with LastError untouched\n", VAR_3, FUNC_0());
}
