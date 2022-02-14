
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct rrddim_query_handle {int dummy; } ;
typedef int storage_number ;
typedef double calculated_number ;
struct TYPE_20__ {char* name; TYPE_2__* state; } ;
struct TYPE_17__ {char* log; double (* grouping_flush ) (TYPE_5__*,int *) ;size_t db_points_read; long result_points_generated; int (* grouping_add ) (TYPE_5__*,double) ;} ;
struct TYPE_19__ {scalar_t__ update_every; double min; double max; long d; double* v; int group; long rows; TYPE_4__* st; scalar_t__ after; scalar_t__ before; TYPE_3__ internal; int * od; int * o; } ;
struct TYPE_18__ {int name; } ;
struct TYPE_15__ {int (* finalize ) (struct rrddim_query_handle*) ;int (* next_metric ) (struct rrddim_query_handle*,scalar_t__*) ;int (* is_finished ) (struct rrddim_query_handle*) ;int (* init ) (TYPE_6__*,struct rrddim_query_handle*,scalar_t__,scalar_t__) ;} ;
struct TYPE_16__ {TYPE_1__ query_ops; } ;
typedef int RRDR_VALUE_FLAGS ;
typedef TYPE_5__ RRDR ;
typedef TYPE_6__ RRDDIM ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,size_t,size_t) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,long) ;
 long FUNC_5 (TYPE_5__*,scalar_t__,long) ;
 int FUNC_6 (TYPE_6__*,struct rrddim_query_handle*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct rrddim_query_handle*) ;
 int FUNC_8 (struct rrddim_query_handle*,scalar_t__*) ;
 int FUNC_9 (TYPE_5__*,double) ;
 int FUNC_10 (TYPE_5__*,double) ;
 double FUNC_11 (TYPE_5__*,int *) ;
 int FUNC_12 (struct rrddim_query_handle*) ;
 scalar_t__ FUNC_13 (int) ;
 double FUNC_14 (int ) ;

__attribute__((used)) static inline void FUNC_15(
          RRDR *VAR_5
        , long VAR_6
        , RRDDIM *VAR_7
        , long VAR_8
        , time_t VAR_9
        , time_t VAR_10
){


    time_t
        VAR_11 = VAR_9,
        VAR_12 = VAR_5->update_every,
        VAR_13 = 0,
        VAR_14 = 0;

    long

        VAR_15 = 0,
        VAR_16 = 0,
        VAR_17 = 0,
        VAR_18 = -1;

    RRDR_VALUE_FLAGS
        VAR_19 = VAR_2;

    struct rrddim_query_handle VAR_20;

    calculated_number VAR_21 = VAR_5->min, VAR_22 = VAR_5->max;
    size_t VAR_23 = 0;
    time_t VAR_24 = VAR_11;
    storage_number VAR_25, VAR_26 = VAR_4;
    calculated_number VAR_27;

    for(VAR_7->state->query_ops.init(VAR_7, &VAR_20, VAR_11, VAR_10) ; VAR_15 < VAR_6 ; VAR_11 += VAR_12) {

        if (FUNC_13(VAR_11 > VAR_10)) {



            break;
        }
        if (FUNC_13(VAR_11 < VAR_9)) {



            continue;
        }

        while (VAR_11 >= VAR_24 && (!VAR_7->state->query_ops.is_finished(&VAR_20) ||
                                 FUNC_1(VAR_26))) {
            VAR_27 = VAR_0;
            if (FUNC_1(VAR_26)) {

                VAR_25 = VAR_26;
            } else {

                VAR_25 = VAR_7->state->query_ops.next_metric(&VAR_20, &VAR_24);
            }
            VAR_26 = VAR_4;

            if (FUNC_3(VAR_11 >= VAR_24)) {
                if (FUNC_3(FUNC_1(VAR_25))) {
                    VAR_27 = FUNC_14(VAR_25);
                    if (FUNC_3(VAR_27 != 0.0))
                        VAR_17++;

                    if (FUNC_13(FUNC_0(VAR_25)))
                        VAR_19 |= VAR_3;
                }
            } else {

                if (FUNC_3(FUNC_1(VAR_25))) {
                    VAR_26 = VAR_25;
                }
            }

            VAR_5->internal.grouping_add(VAR_5, VAR_27);
            VAR_16++;
            VAR_23++;
        }

        if (0 == VAR_16) {

            VAR_5->internal.grouping_add(VAR_5, VAR_0);
        }

        VAR_18 = FUNC_5(VAR_5, VAR_11, VAR_18);

        if(FUNC_13(!VAR_14)) VAR_14 = VAR_11;
        VAR_13 = VAR_11;


        RRDR_VALUE_FLAGS *VAR_28 = &VAR_5->o[VAR_18 * VAR_5->d + VAR_8];


        if(FUNC_3(VAR_17))
            VAR_5->od[VAR_8] |= VAR_1;


        *VAR_28 = VAR_19;


        VAR_27 = VAR_5->internal.grouping_flush(VAR_5, VAR_28);
        VAR_5->v[VAR_18 * VAR_5->d + VAR_8] = VAR_27;

        if(FUNC_3(VAR_15 || VAR_8)) {


            if(FUNC_13(VAR_27 < VAR_21)) VAR_21 = VAR_27;
            if(FUNC_13(VAR_27 > VAR_22)) VAR_22 = VAR_27;

        }
        else {


            VAR_21 = VAR_22 = VAR_27;
        }

        VAR_15++;
        VAR_16 = 0;
        VAR_19 = VAR_2;
        VAR_17 = 0;
    }
    VAR_7->state->query_ops.finalize(&VAR_20);

    VAR_5->internal.db_points_read += VAR_23;
    VAR_5->internal.result_points_generated += VAR_15;

    VAR_5->min = VAR_21;
    VAR_5->max = VAR_22;
    VAR_5->before = VAR_13;
    VAR_5->after = VAR_14 - (VAR_5->group - 1) * VAR_12;
    FUNC_4(VAR_5, VAR_18);





}
