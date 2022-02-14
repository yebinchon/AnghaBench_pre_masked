
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*,char*,int ) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char const*) ;

int FUNC_5(const char *VAR_4, const char *VAR_5) {
    char *VAR_6 = FUNC_4(VAR_4, VAR_5);

    size_t VAR_7 = 100;

    int VAR_8 = 0;
    struct stat VAR_9;
    while(VAR_7-- && FUNC_2(VAR_6, &VAR_9) == 0) {
        if((VAR_9.st_mode & VAR_3) == VAR_1) {
            VAR_8 = 1;
            break;
        }
        else if((VAR_9.st_mode & VAR_3) == VAR_2) {
            char VAR_10[VAR_0 + 1];
            ssize_t VAR_11 = FUNC_1(VAR_6, VAR_10, VAR_0);
            if(VAR_11 > 0) {
                VAR_10[VAR_11] = '\0';
                FUNC_0(VAR_6);
                VAR_6 = FUNC_3(VAR_10);
                continue;
            }
            else {
                VAR_8 = 0;
                break;
            }
        }
        else {
            VAR_8 = 0;
            break;
        }
    }

    FUNC_0(VAR_6);
    return VAR_8;
}
