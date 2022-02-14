
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int ssl; } ;
typedef TYPE_1__ PEER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(PEER *VAR_6)
{
    int VAR_7;

    if (!FUNC_2(VAR_6->status, VAR_1)) {
        VAR_6->status = VAR_3;
        return;
    }
    VAR_7 = FUNC_1(VAR_6->ssl);

    if (VAR_7 == 1) {
        VAR_6->status = VAR_2;
    } else if (VAR_7 < 0) {
        int VAR_8 = FUNC_0(VAR_6->ssl, VAR_7);

        if (VAR_8 != VAR_4 && VAR_8 != VAR_5)
            VAR_6->status = VAR_0;
    }
}
