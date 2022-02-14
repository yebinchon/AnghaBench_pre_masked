
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int timestamp; } ;
typedef TYPE_2__ sei_t ;
struct TYPE_13__ {unsigned int cc_size; int * cc_data; } ;
typedef TYPE_3__ scc_t ;
typedef int libcaption_stauts_t ;
struct TYPE_11__ {int cc_count; } ;
struct TYPE_14__ {TYPE_1__ user_data; } ;
typedef TYPE_4__ cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;

libcaption_stauts_t FUNC_3(sei_t* VAR_2, const scc_t* VAR_3)
{
    unsigned int VAR_4;
    cea708_t VAR_5;
    FUNC_1(&VAR_5, VAR_2->timestamp);

    for (VAR_4 = 0; VAR_4 < VAR_3->cc_size; ++VAR_4) {
        if (31 == VAR_5) {
            FUNC_2(VAR_2, &VAR_5);
        }

        FUNC_0(&VAR_5, 1, VAR_1, VAR_3->cc_data[VAR_4]);
    }

    if (0 != VAR_5) {
        FUNC_2(VAR_2, &VAR_5);
    }

    return VAR_0;
}
