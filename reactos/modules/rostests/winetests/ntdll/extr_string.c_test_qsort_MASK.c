
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (void*,int,int,int ) ;
 int FUNC_2 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_3[5] = { 23, 42, 8, 4, 16 };
    char VAR_4[5] = { 42, 23, 4, 8, 16 };
    const char *VAR_5[7] = {
 "Hello",
 "Wine",
 "World",
 "!",
 "Hopefully",
 "Sorted",
 "."
    };

    FUNC_1 ((void*)VAR_3, 0, sizeof(int), VAR_1);
    FUNC_0(VAR_3[0] == 23, "badly sorted, nmemb=0, arr[0] is %d\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 42, "badly sorted, nmemb=0, arr[1] is %d\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 8, "badly sorted, nmemb=0, arr[2] is %d\n", VAR_3[2]);
    FUNC_0(VAR_3[3] == 4, "badly sorted, nmemb=0, arr[3] is %d\n", VAR_3[3]);
    FUNC_0(VAR_3[4] == 16, "badly sorted, nmemb=0, arr[4] is %d\n", VAR_3[4]);

    FUNC_1 ((void*)VAR_3, 1, sizeof(int), VAR_1);
    FUNC_0(VAR_3[0] == 23, "badly sorted, nmemb=1, arr[0] is %d\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 42, "badly sorted, nmemb=1, arr[1] is %d\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 8, "badly sorted, nmemb=1, arr[2] is %d\n", VAR_3[2]);
    FUNC_0(VAR_3[3] == 4, "badly sorted, nmemb=1, arr[3] is %d\n", VAR_3[3]);
    FUNC_0(VAR_3[4] == 16, "badly sorted, nmemb=1, arr[4] is %d\n", VAR_3[4]);

    FUNC_1 ((void*)VAR_3, 5, 0, VAR_1);
    FUNC_0(VAR_3[0] == 23, "badly sorted, size=0, arr[0] is %d\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 42, "badly sorted, size=0, arr[1] is %d\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 8, "badly sorted, size=0, arr[2] is %d\n", VAR_3[2]);
    FUNC_0(VAR_3[3] == 4, "badly sorted, size=0, arr[3] is %d\n", VAR_3[3]);
    FUNC_0(VAR_3[4] == 16, "badly sorted, size=0, arr[4] is %d\n", VAR_3[4]);

    FUNC_1 ((void*)VAR_3, 5, sizeof(int), VAR_1);
    FUNC_0(VAR_3[0] == 4, "badly sorted, arr[0] is %d\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 8, "badly sorted, arr[1] is %d\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 16, "badly sorted, arr[2] is %d\n", VAR_3[2]);
    FUNC_0(VAR_3[3] == 23, "badly sorted, arr[3] is %d\n", VAR_3[3]);
    FUNC_0(VAR_3[4] == 42, "badly sorted, arr[4] is %d\n", VAR_3[4]);

    FUNC_1 ((void*)VAR_4, 5, sizeof(char), VAR_0);
    FUNC_0(VAR_4[0] == 4, "badly sorted, carr[0] is %d\n", VAR_4[0]);
    FUNC_0(VAR_4[1] == 8, "badly sorted, carr[1] is %d\n", VAR_4[1]);
    FUNC_0(VAR_4[2] == 16, "badly sorted, carr[2] is %d\n", VAR_4[2]);
    FUNC_0(VAR_4[3] == 23, "badly sorted, carr[3] is %d\n", VAR_4[3]);
    FUNC_0(VAR_4[4] == 42, "badly sorted, carr[4] is %d\n", VAR_4[4]);

    FUNC_1 ((void*)VAR_5, 7, sizeof(char*), VAR_2);
    FUNC_0(!FUNC_2(VAR_5[0],"!"), "badly sorted, strarr[0] is %s\n", VAR_5[0]);
    FUNC_0(!FUNC_2(VAR_5[1],"."), "badly sorted, strarr[1] is %s\n", VAR_5[1]);
    FUNC_0(!FUNC_2(VAR_5[2],"Hello"), "badly sorted, strarr[2] is %s\n", VAR_5[2]);
    FUNC_0(!FUNC_2(VAR_5[3],"Hopefully"), "badly sorted, strarr[3] is %s\n", VAR_5[3]);
    FUNC_0(!FUNC_2(VAR_5[4],"Sorted"), "badly sorted, strarr[4] is %s\n", VAR_5[4]);
    FUNC_0(!FUNC_2(VAR_5[5],"Wine"), "badly sorted, strarr[5] is %s\n", VAR_5[5]);
    FUNC_0(!FUNC_2(VAR_5[6],"World"), "badly sorted, strarr[6] is %s\n", VAR_5[6]);
}
