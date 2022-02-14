
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; } ;
typedef TYPE_1__ opj_t1_t ;
typedef int OPJ_INT32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(
    opj_t1_t *VAR_1,
    OPJ_INT32 VAR_2,
    OPJ_INT32 VAR_3)
{
    if (VAR_1->w == 64 && VAR_1->h == 64) {
        if (VAR_3 & VAR_0) {
            FUNC_1(VAR_1, VAR_2);
        } else {
            FUNC_0(VAR_1, VAR_2);
        }
    } else {
        if (VAR_3 & VAR_0) {
            FUNC_4(VAR_1, VAR_2);
        } else {
            FUNC_3(VAR_1, VAR_2);
        }
    }
    FUNC_2(VAR_1, VAR_3);
}
