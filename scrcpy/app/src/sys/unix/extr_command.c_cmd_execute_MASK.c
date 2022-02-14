
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ret ;
typedef int pid_t ;
typedef enum process_result { ____Placeholder_process_result } process_result ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (char const*,char* const*) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int,int*,int) ;
 int FUNC_8 (int,int*,int) ;

enum process_result
FUNC_9(const char *VAR_7, const char *const VAR_8[], pid_t *VAR_9) {
    int VAR_10[2];

    if (FUNC_6(VAR_10) == -1) {
        FUNC_5("pipe");
        return VAR_3;
    }

    enum process_result VAR_11 = VAR_5;

    *VAR_9 = FUNC_4();
    if (*VAR_9 == -1) {
        FUNC_5("fork");
        VAR_11 = VAR_3;
        goto end;
    }

    if (*VAR_9 > 0) {

        FUNC_1(VAR_10[1]);
        VAR_10[1] = -1;

        if (FUNC_7(VAR_10[0], &VAR_11, sizeof(VAR_11)) == -1) {
            FUNC_5("read");
            VAR_11 = VAR_3;
            goto end;
        }
    } else if (*VAR_9 == 0) {

        FUNC_1(VAR_10[0]);
        if (FUNC_3(VAR_10[1], VAR_2, VAR_1) == 0) {
            FUNC_2(VAR_7, (char *const *)VAR_8);
            if (VAR_6 == VAR_0) {
                VAR_11 = VAR_4;
            } else {
                VAR_11 = VAR_3;
            }
            FUNC_5("exec");
        } else {
            FUNC_5("fcntl");
            VAR_11 = VAR_3;
        }

        if (FUNC_8(VAR_10[1], &VAR_11, sizeof(VAR_11)) == -1) {
            FUNC_5("write");
        }

        FUNC_1(VAR_10[1]);
        FUNC_0(1);
    }

end:
    if (VAR_10[0] != -1) {
        FUNC_1(VAR_10[0]);
    }
    if (VAR_10[1] != -1) {
        FUNC_1(VAR_10[1]);
    }
    return VAR_11;
}
