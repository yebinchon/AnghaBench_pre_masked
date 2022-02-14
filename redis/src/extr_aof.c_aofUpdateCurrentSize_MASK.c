
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct redis_stat {int st_size; } ;
typedef int mstime_t ;
struct TYPE_2__ {int aof_current_size; int aof_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct redis_stat*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(void) {
    struct redis_stat VAR_3;
    mstime_t VAR_4;

    FUNC_2(VAR_4);
    if (FUNC_3(VAR_2.aof_fd,&VAR_3) == -1) {
        FUNC_4(VAR_0,"Unable to obtain the AOF file length. stat: %s",
            FUNC_5(VAR_1));
    } else {
        VAR_2.aof_current_size = VAR_3.st_size;
    }
    FUNC_1(VAR_4);
    FUNC_0("aof-fstat",VAR_4);
}
