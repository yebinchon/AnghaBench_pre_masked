
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ version; size_t log_id_len; int * log_id; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (unsigned char const*,size_t) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_3(SCT *VAR_6, const unsigned char *VAR_7, size_t VAR_8)
{
    if (VAR_6->version == VAR_5 && VAR_8 != VAR_2) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    FUNC_1(VAR_6->log_id);
    VAR_6->log_id = ((void*)0);
    VAR_6->log_id_len = 0;
    VAR_6->validation_status = VAR_4;

    if (VAR_7 != ((void*)0) && VAR_8 > 0) {
        VAR_6->log_id = FUNC_2(VAR_7, VAR_8);
        if (VAR_6->log_id == ((void*)0)) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }
        VAR_6->log_id_len = VAR_8;
    }
    return 1;
}
