
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ max_send_fragment; scalar_t__ session; scalar_t__ hit; scalar_t__ server; } ;
typedef TYPE_1__ SSL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(SSL *VAR_3, unsigned int VAR_4, int VAR_5)
{




    if (VAR_3->server && VAR_3->hit && FUNC_2(VAR_3->session)
            && !VAR_5 ) {
        FUNC_1(VAR_3, VAR_0, VAR_1,
                 VAR_2);
        return 0;
    }


    if (VAR_3->session && FUNC_2(VAR_3->session)
            && VAR_3->max_send_fragment < FUNC_0(VAR_3->session))

        if (!FUNC_3(VAR_3)) {

            return 0;
        }

    return 1;
}
