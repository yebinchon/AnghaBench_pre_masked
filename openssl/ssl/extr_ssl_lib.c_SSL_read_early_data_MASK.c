
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int early_data; } ;
struct TYPE_8__ {int early_data_state; TYPE_1__ ext; int server; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,void*,size_t,size_t*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(SSL *VAR_9, void *VAR_10, size_t VAR_11, size_t *VAR_12)
{
    int VAR_13;

    if (!VAR_9->server) {
        FUNC_3(VAR_5, VAR_0);
        return VAR_6;
    }

    switch (VAR_9->early_data_state) {
    case 129:
        if (!FUNC_1(VAR_9)) {
            FUNC_3(VAR_5,
                   VAR_0);
            return VAR_6;
        }


    case 130:
        VAR_9->early_data_state = VAR_2;
        VAR_13 = FUNC_0(VAR_9);
        if (VAR_13 <= 0) {

            VAR_9->early_data_state = 130;
            return VAR_6;
        }


    case 128:
        if (VAR_9->ext.early_data == VAR_1) {
            VAR_9->early_data_state = VAR_4;
            VAR_13 = FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);





            if (VAR_13 > 0 || (VAR_13 <= 0 && VAR_9->early_data_state
                                        != VAR_3)) {
                VAR_9->early_data_state = 128;
                return VAR_13 > 0 ? VAR_8
                               : VAR_6;
            }
        } else {
            VAR_9->early_data_state = VAR_3;
        }
        *VAR_12 = 0;
        return VAR_7;

    default:
        FUNC_3(VAR_5, VAR_0);
        return VAR_6;
    }
}
