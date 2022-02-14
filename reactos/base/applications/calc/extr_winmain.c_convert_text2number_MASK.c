
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_2__ {scalar_t__ buffer; scalar_t__ ptr; int code; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(calc_number_t *VAR_1)
{


    if (VAR_0.buffer == VAR_0.ptr) {

        if (!FUNC_1(VAR_0.buffer, FUNC_0("0.")) ||
            !FUNC_1(VAR_0.buffer, FUNC_0("0")))

            FUNC_4(VAR_1);
        else
            FUNC_3(VAR_1, &VAR_0.code);
        return;
    }

    FUNC_4(VAR_1);
    FUNC_2(VAR_1);
}
