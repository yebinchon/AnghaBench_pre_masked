
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ftp_result_t ;
typedef int UINT ;
struct TYPE_2__ {int fp; } ;
typedef scalar_t__ FRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,char*,scalar_t__,int *) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static ftp_result_t FUNC_2 (char *VAR_5, uint32_t VAR_6, uint32_t *VAR_7) {
    ftp_result_t VAR_8 = VAR_0;
    FRESULT VAR_9 = FUNC_0(&VAR_4.fp, VAR_5, VAR_6, (UINT *)VAR_7);
    if (VAR_9 != VAR_3) {
        FUNC_1();
        VAR_8 = VAR_1;
        *VAR_7 = 0;
    }
    else if (*VAR_7 < VAR_6) {
        FUNC_1();
        VAR_8 = VAR_2;
    }
    return VAR_8;
}
