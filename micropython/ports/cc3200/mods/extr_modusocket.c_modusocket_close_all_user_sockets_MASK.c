
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sd; scalar_t__ user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void FUNC_3 (void) {
    FUNC_1 (&VAR_2, VAR_1);
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_3[VAR_4].sd >= 0 && VAR_3[VAR_4].user) {
            FUNC_0(VAR_3[VAR_4].sd);
            VAR_3[VAR_4].sd = -1;
        }
    }
    FUNC_2 (&VAR_2);
}
