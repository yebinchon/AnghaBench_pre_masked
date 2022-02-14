
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
    if (!FUNC_2(FUNC_1(VAR_0), FUNC_1(VAR_1)))
        return 0;

    FILE *VAR_3 = FUNC_4(VAR_0, "rb");
    if (!VAR_3)
        return 0;

    bool VAR_4 = 0;

    char VAR_5[50];

    FUNC_0(FUNC_7(VAR_2) <= sizeof(VAR_5));

    if (FUNC_5(VAR_5, 50, 1, VAR_3) == 1) {
        if (FUNC_6(VAR_5, VAR_2, FUNC_7(VAR_2)) == 0)
            VAR_4 = 1;
    }

    FUNC_3(VAR_3);
    return VAR_4;
}
