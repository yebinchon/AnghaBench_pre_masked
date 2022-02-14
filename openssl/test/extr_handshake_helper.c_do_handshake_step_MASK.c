
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* status; int ssl; } ;
typedef TYPE_1__ PEER ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static void FUNC_3(PEER *VAR_5)
{
    if (!FUNC_2(VAR_5->status, VAR_1)) {
        VAR_5->status = VAR_3;
    } else {
        int VAR_6 = FUNC_0(VAR_5->ssl);

        if (VAR_6 == 1) {
            VAR_5->status = VAR_2;
        } else if (VAR_6 == 0) {
            VAR_5->status = VAR_0;
        } else {
            int VAR_7 = FUNC_1(VAR_5->ssl, VAR_6);

            if (VAR_7 != VAR_4)
                VAR_5->status = VAR_0;
        }
    }
}
