
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct stat*) ;
 char* VAR_0 ;
 int FUNC_2 (scalar_t__,int) ;

void FUNC_3(FILE *VAR_1, char* VAR_2, int VAR_3) {
    struct stat VAR_4;
    if (FUNC_1(FUNC_0(VAR_1), &VAR_4) == -1)
        VAR_4.st_size = 0;
    VAR_0 = VAR_2;
    FUNC_2(VAR_4.st_size, VAR_3);
}
