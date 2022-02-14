
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,long,long) ;
 int VAR_0 ;
 long FUNC_1 (char*,int,long,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(FILE *VAR_1, char *VAR_2, long VAR_3) {
    long VAR_4;
    VAR_0 = FUNC_2(VAR_1);
    VAR_4 = FUNC_1(VAR_2,1,VAR_3,VAR_1);
    if (VAR_4 != VAR_3) {
        FUNC_0("Expected to read %ld bytes, got %ld bytes",VAR_3,VAR_4);
        return 0;
    }
    return 1;
}
