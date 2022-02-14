
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int sei_t ;
struct TYPE_6__ {int cc_count; } ;
struct TYPE_7__ {TYPE_1__ user_data; } ;
typedef TYPE_2__ cea708_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,TYPE_2__*) ;

void FUNC_3(sei_t* VAR_4, cea708_t* VAR_5, uint16_t VAR_6)
{


    if (31 == VAR_5->user_data.cc_count) {
        FUNC_2(VAR_4, VAR_5);
    }

    if (0 == VAR_5->user_data.cc_count) {
        FUNC_0(VAR_5, 1, VAR_1, FUNC_1(VAR_3, VAR_0));
        FUNC_0(VAR_5, 1, VAR_1, FUNC_1(VAR_3, VAR_0));
    }

    if (0 == VAR_6) {
        FUNC_3(VAR_4, VAR_5, FUNC_1(VAR_2, VAR_0));
        FUNC_3(VAR_4, VAR_5, FUNC_1(VAR_2, VAR_0));
        FUNC_2(VAR_4, VAR_5);
        return;
    }

    FUNC_0(VAR_5, 1, VAR_1, VAR_6);
}
