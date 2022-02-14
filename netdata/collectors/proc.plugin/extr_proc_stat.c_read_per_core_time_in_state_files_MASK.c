
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct per_core_time_in_state_file {size_t filename; size_t last_ticks_len; int * ff; TYPE_1__* last_ticks; } ;
struct per_core_single_number_file {int found; unsigned long long value; } ;
struct last_ticks {int dummy; } ;
struct cpu_chart {struct per_core_time_in_state_file time_in_state_files; struct per_core_single_number_file* files; } ;
struct TYPE_4__ {unsigned long long ticks; unsigned long long frequency; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t,int) ;
 size_t FUNC_6 (int *,size_t) ;
 int * FUNC_7 (size_t,char*,int ) ;
 int * FUNC_8 (int *) ;
 char* FUNC_9 (int *,int ) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int) ;
 unsigned long long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct cpu_chart *VAR_3, size_t VAR_4, size_t VAR_5) {
    size_t VAR_6, VAR_7 = 0, VAR_8 = 0;

    for(VAR_6 = 0; VAR_6 < VAR_4 ; VAR_6++) {
        struct per_core_single_number_file *VAR_9 = &VAR_3[VAR_6].files[VAR_5];
        struct per_core_time_in_state_file *VAR_10 = &VAR_3[VAR_6].time_in_state_files;

        VAR_9->found = 0;

        if(FUNC_12(!VAR_10->filename))
            continue;

        if(FUNC_12(!VAR_10->ff)) {
            VAR_10->ff = FUNC_7(VAR_10->filename, " \t:", VAR_1);
            if(FUNC_12(!VAR_10->ff))
            {
                FUNC_0("Cannot open file '%s'", VAR_10->filename);
                continue;
            }
        }

        VAR_10->ff = FUNC_8(VAR_10->ff);
        if(FUNC_12(!VAR_10->ff)) {
            FUNC_0("Cannot read file '%s'", VAR_10->filename);
            FUNC_3(VAR_10->ff);
            VAR_10->ff = ((void*)0);
            continue;
        }
        else {


            size_t VAR_11 = FUNC_4(VAR_10->ff), VAR_12;
            size_t VAR_13;
            unsigned long long VAR_14 = 0, VAR_15 = 0;


            if (FUNC_9(VAR_10->ff, 0)[0] == '\0') {
                if(FUNC_12(VAR_2 != VAR_0)) {
                    FUNC_3(VAR_10->ff);
                    VAR_10->ff = ((void*)0);
                }





                continue;
            }

            if (FUNC_12(VAR_10->last_ticks_len < VAR_11 || VAR_10->last_ticks == ((void*)0))) {
                VAR_10->last_ticks = FUNC_10(VAR_10->last_ticks, sizeof(struct last_ticks) * VAR_11);
                FUNC_2(VAR_10->last_ticks, 0, sizeof(struct last_ticks) * VAR_11);
                VAR_10->last_ticks_len = VAR_11;
            }

            VAR_9->value = 0;

            for(VAR_12 = 0; VAR_12 < VAR_11 - 1 ;VAR_12++) {
                unsigned long long VAR_16 = 0, VAR_17 = 0, VAR_18 = 0;

                VAR_13 = FUNC_6(VAR_10->ff, VAR_12);
                if(FUNC_12(VAR_13 < 2)) {
                    FUNC_0("Cannot read time_in_state line. Expected 2 params, read %zu.", VAR_13);
                    continue;
                }
                VAR_16 = FUNC_11(FUNC_5(VAR_10->ff, VAR_12, 0));
                VAR_17 = FUNC_11(FUNC_5(VAR_10->ff, VAR_12, 1));


                VAR_18 = VAR_17 - VAR_10->last_ticks[VAR_12].ticks;
                VAR_10->last_ticks[VAR_12].frequency = VAR_16;
                VAR_10->last_ticks[VAR_12].ticks = VAR_17;

                VAR_14 += VAR_18;
                VAR_15 += VAR_16 * VAR_18;

            }

            if (FUNC_1(VAR_14)) {
                VAR_15 /= VAR_14;
                VAR_9->value = VAR_15;
            }

            if(FUNC_12(VAR_2 != VAR_0)) {
                FUNC_3(VAR_10->ff);
                VAR_10->ff = ((void*)0);
            }
        }

        VAR_7++;

        VAR_9->found = 1;

        if(FUNC_1(VAR_9->value != 0))
            VAR_8++;
    }

    if(FUNC_12(VAR_7 == 0))
        return -1;

    if(FUNC_12(VAR_8 == 0))
        return 0;

    return (int)VAR_8;
}
