
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef char* sds ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,int,int) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char*,int ) ;

int FUNC_11(char *VAR_2, sds VAR_3) {
    int VAR_4 = 0;
    int VAR_5 = FUNC_4(VAR_2,VAR_1|VAR_0,0644);
    int VAR_6 = FUNC_8(VAR_3), VAR_7 = 0;
    struct stat VAR_8;
    sds VAR_9;



    if (VAR_5 == -1) return -1;
    if (FUNC_1(VAR_5,&VAR_8) == -1) {
        FUNC_0(VAR_5);
        return -1;
    }


    VAR_9 = FUNC_5(VAR_3);
    if (VAR_6 < VAR_8.st_size) {


        VAR_7 = VAR_8.st_size - VAR_6;
        VAR_9 = FUNC_7(VAR_9,VAR_8.st_size);
        VAR_9[VAR_6] = '\n';
        FUNC_3(VAR_9+VAR_6+1,'#',VAR_7-1);
    }


    if (FUNC_10(VAR_5,VAR_9,FUNC_9(VAR_9)) == -1) {
        VAR_4 = -1;
        goto cleanup;
    }


    if (VAR_7) {
        if (FUNC_2(VAR_5,VAR_6) == -1) {

        }
    }

cleanup:
    FUNC_6(VAR_9);
    FUNC_0(VAR_5);
    return VAR_4;
}
