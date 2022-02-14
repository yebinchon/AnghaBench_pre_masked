
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utsname {int * release; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (struct utsname*) ;

__attribute__((used)) static int FUNC_8(void)
{
    int VAR_9;
    int VAR_10;
    int VAR_11[3] = { -1, -1, -1 };
    int VAR_12;
    char *VAR_13;
    struct utsname VAR_14;

    VAR_9 = FUNC_7(&VAR_14);
    if (VAR_9 != 0) {
        FUNC_0(VAR_0,
                 VAR_1);
        return 0;
    }

    VAR_13 = FUNC_6(VAR_14.release, ".");
    for (VAR_10 = 0; VAR_10 < 3 && VAR_13 != ((void*)0); VAR_10++) {
        VAR_11[VAR_10] = FUNC_3(VAR_13);
        VAR_13 = FUNC_6(((void*)0), ".");
    }

    if (FUNC_2(VAR_11[0], VAR_11[1], VAR_11[2])
        < FUNC_2(VAR_5, VAR_6, VAR_7)) {
        FUNC_1("ASYNC AFALG not supported this kernel(%d.%d.%d)\n",
                 VAR_11[0], VAR_11[1], VAR_11[2]);
        FUNC_1("ASYNC AFALG requires kernel version %d.%d.%d or later\n",
                 VAR_5, VAR_6, VAR_7);
        FUNC_0(VAR_0,
                 VAR_2);
        return 0;
    }


    VAR_12 = FUNC_5(VAR_4, VAR_8, 0);
    if (VAR_12 == -1) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    FUNC_4(VAR_12);

    return 1;
}
