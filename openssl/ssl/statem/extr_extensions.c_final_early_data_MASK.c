
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int early_data; int early_data_ok; } ;
struct TYPE_8__ {scalar_t__ max_early_data; scalar_t__ early_data_state; scalar_t__ hello_retry_request; TYPE_1__ ext; int allow_early_data_cb_data; int (* allow_early_data_cb ) (TYPE_2__*,int ) ;int hit; int server; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(SSL *VAR_10, unsigned int VAR_11, int VAR_12)
{
    if (!VAR_12)
        return 1;

    if (!VAR_10->server) {
        if (VAR_11 == VAR_6
                && VAR_12
                && !VAR_10->ext.early_data_ok) {





            FUNC_0(VAR_10, VAR_2, VAR_7,
                     VAR_9);
            return 0;
        }

        return 1;
    }

    if (VAR_10->max_early_data == 0
            || !VAR_10->hit
            || VAR_10->early_data_state != VAR_4
            || !VAR_10->ext.early_data_ok
            || VAR_10->hello_retry_request != VAR_8
            || (VAR_10->allow_early_data_cb != ((void*)0)
                && !VAR_10->allow_early_data_cb(VAR_10,
                                         VAR_10->allow_early_data_cb_data))) {
        VAR_10->ext.early_data = VAR_5;
    } else {
        VAR_10->ext.early_data = VAR_3;

        if (!FUNC_2(VAR_10,
                    VAR_0 | VAR_1)) {

            return 0;
        }
    }

    return 1;
}
