
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,struct stat*) ;
 int FUNC_4 (int,unsigned long,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int VAR_2 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int,unsigned char*,int) ;

int FUNC_12(int VAR_3, char **VAR_4) {
    struct stat VAR_5;
    int VAR_6, VAR_7;

    if (VAR_3 != 3) {
        FUNC_2(VAR_2,"Usage: <filename> <cycles>\n");
        FUNC_1(1);
    }

    FUNC_9(FUNC_10(((void*)0)));
    char *VAR_8 = VAR_4[1];
    VAR_7 = FUNC_0(VAR_4[2]);
    VAR_6 = FUNC_5(VAR_8,VAR_0);
    if (VAR_6 == -1) {
        FUNC_6("open");
        FUNC_1(1);
    }
    FUNC_3(VAR_6,&VAR_5);

    while(VAR_7--) {
        unsigned char VAR_9[32];
        unsigned long VAR_10 = FUNC_8()%VAR_5.st_size;
        int VAR_11 = 1+FUNC_8()%31;
        int VAR_12;

        for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) VAR_9[VAR_12] = (char)FUNC_8();
        FUNC_4(VAR_6,VAR_10,VAR_1);
        FUNC_7("Writing %d bytes at offset %lu\n", VAR_11, VAR_10);
        FUNC_11(VAR_6,VAR_9,VAR_11);
    }
    return 0;
}
