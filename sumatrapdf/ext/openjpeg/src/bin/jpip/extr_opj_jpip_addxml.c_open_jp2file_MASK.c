
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

FILE * FUNC_8(const char VAR_2[])
{
    FILE *VAR_3;
    char *VAR_4;

    if (!(VAR_3 = FUNC_1(VAR_2, "a+b"))) {
        FUNC_2(VAR_1, "Original JP2 %s not found\n", VAR_2);
        return ((void*)0);
    }

    if (FUNC_5(VAR_3, 0, VAR_0) == -1) {
        FUNC_0(VAR_3);
        FUNC_2(VAR_1, "Original JP2 %s broken (fseek error)\n", VAR_2);
        return ((void*)0);
    }

    VAR_4 = (char *)FUNC_6(12);
    if (FUNC_3(VAR_4, 12, 1, VAR_3) != 1) {
        FUNC_4(VAR_4);
        FUNC_0(VAR_3);
        FUNC_2(VAR_1, "Original JP2 %s broken (read error)\n", VAR_2);
        return ((void*)0);
    }

    if (*VAR_4 || *(VAR_4 + 1) || *(VAR_4 + 2) ||
            *(VAR_4 + 3) != 12 || FUNC_7(VAR_4 + 4, "jP  \r\n\x87\n", 8)) {
        FUNC_4(VAR_4);
        FUNC_0(VAR_3);
        FUNC_2(VAR_1, "No JPEG 2000 Signature box in target %s\n", VAR_2);
        return ((void*)0);
    }
    FUNC_4(VAR_4);
    return VAR_3;
}
