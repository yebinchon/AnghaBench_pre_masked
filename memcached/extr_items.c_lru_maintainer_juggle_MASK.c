
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int rel_time_t ;
struct TYPE_4__ {int hot_max_factor; int warm_max_factor; scalar_t__ lru_segmented; scalar_t__ temp_lru; } ;
struct TYPE_3__ {int time; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 (int const,int const,scalar_t__,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__ VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_3 (int const,int *,unsigned int*) ;
 TYPE_1__** VAR_9 ;

__attribute__((used)) static int FUNC_4(const int VAR_10) {
    int VAR_11;
    int VAR_12 = 0;
    uint64_t VAR_13 = 0;
    unsigned int VAR_14 = 0;


    FUNC_3(VAR_10, ((void*)0),
            &VAR_14);
    if (VAR_7.temp_lru) {

        for (VAR_11 = 0; VAR_11 < 500; VAR_11++) {
            if (FUNC_0(VAR_10, VAR_3, 0, 0, 0, ((void*)0)) <= 0) {
                break;
            } else {
                VAR_12++;
            }
        }
    }

    rel_time_t VAR_15 = 0;
    rel_time_t VAR_16 = 0;
    rel_time_t VAR_17 = 0;

    if (VAR_7.lru_segmented) {
        FUNC_1(&VAR_6[VAR_10|VAR_0]);
        if (VAR_9[VAR_10|VAR_0]) {
            VAR_15 = VAR_5 - VAR_9[VAR_10|VAR_0]->time;
        }

        VAR_13 += VAR_8[VAR_10|VAR_0];
        FUNC_2(&VAR_6[VAR_10|VAR_0]);

        VAR_16 = VAR_15 * VAR_7.hot_max_factor;
        VAR_17 = VAR_15 * VAR_7.warm_max_factor;


        FUNC_1(&VAR_6[VAR_10|VAR_1]);
        VAR_13 += VAR_8[VAR_10|VAR_1];
        FUNC_2(&VAR_6[VAR_10|VAR_1]);

        FUNC_1(&VAR_6[VAR_10|VAR_4]);
        VAR_13 += VAR_8[VAR_10|VAR_4];
        FUNC_2(&VAR_6[VAR_10|VAR_4]);
    }


    for (VAR_11 = 0; VAR_11 < 500; VAR_11++) {
        int VAR_18 = 0;
        if (FUNC_0(VAR_10, VAR_1, VAR_13, VAR_2, VAR_16, ((void*)0)) ||
            FUNC_0(VAR_10, VAR_4, VAR_13, VAR_2, VAR_17, ((void*)0))) {
            VAR_18++;
        }
        if (VAR_7.lru_segmented) {
            VAR_18 += FUNC_0(VAR_10, VAR_0, VAR_13, VAR_2, 0, ((void*)0));
        }
        if (VAR_18 == 0)
            break;
        VAR_12++;
    }
    return VAR_12;
}
