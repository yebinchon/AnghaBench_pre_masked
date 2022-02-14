
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ id; scalar_t__* fd; scalar_t__* prev_value; scalar_t__* prev_time_enabled; scalar_t__* prev_time_running; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__** VAR_3 ;
 int VAR_4 ;
 struct perf_event* VAR_5 ;

__attribute__((used)) static void FUNC_2(void) {
    int VAR_6, VAR_7;
    struct perf_event *VAR_8 = ((void*)0);

    for(VAR_8 = &VAR_5[0]; VAR_8->id != VAR_1; VAR_8++) {
        for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
            if(*(VAR_8->fd + VAR_6) != VAR_2) FUNC_0(*(VAR_8->fd + VAR_6));

        FUNC_1(VAR_8->fd);
        FUNC_1(VAR_8->prev_value);
        FUNC_1(VAR_8->prev_time_enabled);
        FUNC_1(VAR_8->prev_time_running);
    }

    for(VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
        FUNC_1(VAR_3[VAR_7]);
}
