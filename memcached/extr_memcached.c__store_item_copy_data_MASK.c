
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int it_flags; scalar_t__ nbytes; } ;
typedef TYPE_1__ item ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_2, item *VAR_3, item *VAR_4, item *VAR_5) {
    if (VAR_2 == VAR_1) {
        if (VAR_4->it_flags & VAR_0) {
            if (FUNC_1(VAR_4, VAR_3, VAR_3->nbytes - 2) == -1 ||
                FUNC_1(VAR_4, VAR_5, VAR_5->nbytes) == -1) {
                return -1;
            }
        } else {
            FUNC_2(FUNC_0(VAR_4), FUNC_0(VAR_3), VAR_3->nbytes);
            FUNC_2(FUNC_0(VAR_4) + VAR_3->nbytes - 2 , FUNC_0(VAR_5), VAR_5->nbytes);
        }
    } else {

        if (VAR_4->it_flags & VAR_0) {
            if (FUNC_1(VAR_4, VAR_5, VAR_5->nbytes - 2) == -1 ||
                FUNC_1(VAR_4, VAR_3, VAR_3->nbytes) == -1) {
                return -1;
            }
        } else {
            FUNC_2(FUNC_0(VAR_4), FUNC_0(VAR_5), VAR_5->nbytes);
            FUNC_2(FUNC_0(VAR_4) + VAR_5->nbytes - 2 , FUNC_0(VAR_3), VAR_3->nbytes);
        }
    }
    return 0;
}
