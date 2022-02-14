
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ftp_result_t ;
struct TYPE_2__ {int listroot; int e_open; int dp; } ;
typedef scalar_t__ FRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static ftp_result_t FUNC_1 (const char *VAR_5) {

    if (VAR_5[0] == '/' && VAR_5[1] == '\0') {
        VAR_4.listroot = 1;
    } else {
        FRESULT VAR_6;
        VAR_6 = FUNC_0(&VAR_4.dp, VAR_5);
        if (VAR_6 != VAR_3) {
            return VAR_2;
        }
        VAR_4.e_open = VAR_0;
        VAR_4.listroot = 0;
    }
    return VAR_1;
}
