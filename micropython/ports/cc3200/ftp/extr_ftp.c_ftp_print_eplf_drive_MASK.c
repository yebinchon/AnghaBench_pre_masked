
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int tm_mon; int tm_mday; int tm_year; int tm_hour; int tm_min; } ;
typedef TYPE_1__ timeutils_struct_time_t ;
struct TYPE_5__ {char* month; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,char*,char*,int ,char*,int,int,...) ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (char *VAR_4, uint32_t VAR_5, const char *VAR_6) {
    timeutils_struct_time_t VAR_7;
    uint32_t VAR_8;
    char *VAR_9 = "d";

    FUNC_2((VAR_2 - VAR_1), &VAR_7);

    VAR_8 = FUNC_0();
    if (VAR_0 < VAR_8 - (VAR_2 - VAR_1)) {
        return FUNC_1(VAR_4, VAR_5, "%srw-rw-r--   1 root  root %9u %s %2u %5u %s\r\n",
                        VAR_9, 0, VAR_3[(VAR_7.tm_mon - 1)].month, VAR_7.tm_mday, VAR_7.tm_year, VAR_6);
    }
    else {
        return FUNC_1(VAR_4, VAR_5, "%srw-rw-r--   1 root  root %9u %s %2u %02u:%02u %s\r\n",
                        VAR_9, 0, VAR_3[(VAR_7.tm_mon - 1)].month, VAR_7.tm_mday, VAR_7.tm_hour, VAR_7.tm_min, VAR_6);
    }
}
