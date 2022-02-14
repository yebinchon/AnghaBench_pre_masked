
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nn_options_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int,void**,int ,int ) ;

void FUNC_4 (nn_options_t *VAR_5, int VAR_6)
{
    int VAR_7;
    void *VAR_8;

    for (;;) {
        VAR_7 = FUNC_3 (VAR_6, &VAR_8, VAR_3, 0);
        if (VAR_7 < 0 && VAR_4 == VAR_0) {
            continue;
        } else if (VAR_7 < 0 && (VAR_4 == VAR_2 || VAR_4 == VAR_1)) {
            return;
        } else {
            FUNC_0 (VAR_7 >= 0, "Can't recv");
        }
        FUNC_2 (VAR_5, VAR_8, VAR_7);
        FUNC_1 (VAR_8);
    }
}
