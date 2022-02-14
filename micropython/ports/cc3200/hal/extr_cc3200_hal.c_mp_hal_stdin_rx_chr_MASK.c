
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mp_obj_t ;
struct TYPE_4__ {scalar_t__ buf; } ;
typedef TYPE_1__ mp_buffer_info_t ;
struct TYPE_5__ {int * read; int stream_o; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int FUNC_11(void) {
    for ( ;; ) {

        if (FUNC_7()) {
            return FUNC_8();
        } else if (FUNC_0(VAR_1)) {
            if (FUNC_5(FUNC_0(VAR_1)->stream_o, &VAR_2)) {
                if (FUNC_9(FUNC_0(VAR_1)->stream_o)) {
                    return FUNC_10(FUNC_0(VAR_1)->stream_o);
                }
            } else {
                FUNC_0(VAR_1)->read[2] = FUNC_6(1);
                mp_obj_t VAR_3 = FUNC_1(1, 0, FUNC_0(VAR_1)->read);

                if (FUNC_4(VAR_3)) {
                    mp_buffer_info_t VAR_4;
                    FUNC_2(VAR_3, &VAR_4, VAR_0);
                    return ((int *)(VAR_4.buf))[0];
                }
            }
        }
        FUNC_3(1);
    }
}
