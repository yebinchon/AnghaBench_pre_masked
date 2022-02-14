
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (long,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,size_t,int,int *) ;
 int * FUNC_5 (char*) ;
 char* FUNC_6 (char*,long*) ;
 int VAR_0 ;

int FUNC_7(int VAR_1, char *VAR_2[])
{
    FILE *VAR_3;
    char *VAR_4, VAR_5[] = "xml ";
    long VAR_6, VAR_7;

    if (VAR_1 < 3) {
        FUNC_1(VAR_0, "USAGE: %s modifing.jp2 adding.xml\n", VAR_2[0]);
        return -1;
    }

    VAR_3 = FUNC_5(VAR_2[1]);
    if (!VAR_3) {
        return -1;
    }

    VAR_4 = FUNC_6(VAR_2[2], &VAR_6);
    if (VAR_6 < 0) {
        return -1;
    }
    VAR_7 = VAR_6 + 8;

    FUNC_2((VAR_7 >> 24) & 0xff, VAR_3);
    FUNC_2((VAR_7 >> 16) & 0xff, VAR_3);
    FUNC_2((VAR_7 >> 8) & 0xff, VAR_3);
    FUNC_2(VAR_7 & 0xff, VAR_3);
    FUNC_4(VAR_5, 4, 1, VAR_3);
    FUNC_4(VAR_4, (size_t)VAR_6, 1, VAR_3);

    FUNC_3(VAR_4);
    FUNC_0(VAR_3);

    return 0;
}
