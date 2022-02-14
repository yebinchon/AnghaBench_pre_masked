
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rrdpush_send_charts_matching; } ;
struct TYPE_7__ {int name; int id; TYPE_2__* rrdhost; } ;
typedef TYPE_1__ RRDSET ;
typedef TYPE_2__ RRDHOST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(RRDSET *VAR_3) {
    if(FUNC_4(!FUNC_0(VAR_3, VAR_0))) {
        FUNC_1(VAR_3, VAR_2);
        FUNC_2(VAR_3, VAR_1);
    }
    else if(!FUNC_0(VAR_3, VAR_2|VAR_1)) {
        RRDHOST *VAR_4 = VAR_3->rrdhost;

        if(FUNC_3(VAR_4->rrdpush_send_charts_matching, VAR_3->id) ||
            FUNC_3(VAR_4->rrdpush_send_charts_matching, VAR_3->name)) {
            FUNC_1(VAR_3, VAR_1);
            FUNC_2(VAR_3, VAR_2);
        }
        else {
            FUNC_1(VAR_3, VAR_2);
            FUNC_2(VAR_3, VAR_1);
        }
    }

    return(FUNC_0(VAR_3, VAR_2));
}
