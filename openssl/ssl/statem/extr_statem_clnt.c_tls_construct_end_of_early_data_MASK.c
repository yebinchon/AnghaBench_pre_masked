
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_4__ {scalar_t__ early_data_state; } ;
typedef TYPE_1__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

int FUNC_1(SSL *VAR_5, WPACKET *VAR_6)
{
    if (VAR_5->early_data_state != VAR_3
            && VAR_5->early_data_state != VAR_2) {
        FUNC_0(VAR_5, VAR_1,
                 VAR_4,
                 VAR_0);
        return 0;
    }

    VAR_5->early_data_state = VAR_2;
    return 1;
}
