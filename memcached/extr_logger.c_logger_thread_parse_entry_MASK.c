
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct logger_stats {int dummy; } ;
struct TYPE_8__ {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct TYPE_9__ {int event; TYPE_1__ tv; scalar_t__ data; scalar_t__ gid; } ;
typedef TYPE_2__ logentry ;
typedef enum logger_parse_entry_ret { ____Placeholder_logger_parse_entry_ret } logger_parse_entry_ret ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*,int,char*,int,int,unsigned long long,char*) ;

__attribute__((used)) static enum logger_parse_entry_ret FUNC_6(logentry *VAR_3, struct logger_stats *VAR_4,
        char *VAR_5, int *VAR_6) {
    int VAR_7 = 0;

    switch (VAR_3->event) {
        case 128:
            VAR_7 = FUNC_5(VAR_5, VAR_2, "ts=%d.%d gid=%llu %s\n",
                        (int)VAR_3->tv.tv_sec, (int)VAR_3->tv.tv_usec,
                        (unsigned long long) VAR_3->gid, (char *) VAR_3->data);
            break;
        case 132:
            VAR_7 = FUNC_1(VAR_3, VAR_5);
            break;





        case 130:
            VAR_7 = FUNC_3(VAR_3, VAR_5);
            break;
        case 129:
            VAR_7 = FUNC_4(VAR_3, VAR_5);
            break;

    }

    if (VAR_7 >= VAR_2 || VAR_7 <= 0) {
        FUNC_0("LOGGER: Failed to flatten log entry!\n");
        return VAR_0;
    } else {
        *VAR_6 = VAR_7;
    }

    return VAR_1;
}
