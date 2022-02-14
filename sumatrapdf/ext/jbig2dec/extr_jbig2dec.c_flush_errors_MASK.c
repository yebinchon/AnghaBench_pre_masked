
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int repeats; } ;
typedef TYPE_1__ jbig2dec_params_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(jbig2dec_params_t *VAR_1)
{
    if (VAR_1->repeats > 1) {
        FUNC_0(VAR_0, "jbig2dec last message repeated %d times\n", VAR_1->repeats);
    }
}
