
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ max_fragment_len_mode; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;

int FUNC_2(SSL_CTX *VAR_3, uint8_t VAR_4)
{
    if (VAR_4 != VAR_2
            && !FUNC_0(VAR_4)) {
        FUNC_1(VAR_0,
               VAR_1);
        return 0;
    }

    VAR_3->ext.max_fragment_len_mode = VAR_4;
    return 1;
}
