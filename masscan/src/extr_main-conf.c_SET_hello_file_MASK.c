
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Masscan {scalar_t__ echo; } ;
typedef int foo ;
typedef int buf2 ;
typedef int buf ;
typedef int FILE ;


 unsigned int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (char*,int,char*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char const*,char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (struct Masscan*,char*,char*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char*,int,char*,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct Masscan *VAR_3, const char *VAR_4, const char *VAR_5)
{
    unsigned VAR_6;
    FILE *VAR_7;
    int VAR_8;
    char VAR_9[16384];
    char VAR_10[16384];
    size_t VAR_11;
    size_t VAR_12;
    char VAR_13[64];

    if (VAR_3->echo) {


        return 0;
    }

    VAR_6 = FUNC_0(VAR_4);
    if (VAR_6 >= 65536) {
        FUNC_5(VAR_2, "%s: bad index\n", VAR_4);
        return VAR_0;
    }


    VAR_8 = FUNC_4(&VAR_7, VAR_5, "rb");
    if (VAR_8 != 0) {
        FUNC_1(0, "[FAILED] could not read hello file\n");
        FUNC_8(VAR_5);
        return VAR_0;
    }

    VAR_11 = FUNC_6(VAR_9, 1, sizeof(VAR_9), VAR_7);
    if (VAR_11 == 0) {
        FUNC_1(0, "[FAILED] could not read hello file\n");
        FUNC_8(VAR_5);
        FUNC_3(VAR_7);
        return VAR_0;
    }
    FUNC_3(VAR_7);

    VAR_12 = FUNC_2(VAR_10, sizeof(VAR_10)-1, VAR_9, VAR_11);
    VAR_10[VAR_12] = '\0';

    FUNC_9(VAR_13, sizeof(VAR_13), "hello-string[%u]", (unsigned)VAR_6);

    FUNC_7(VAR_3, VAR_13, VAR_10);

    return VAR_1;
}
