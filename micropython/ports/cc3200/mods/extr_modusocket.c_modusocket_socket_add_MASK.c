
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_2__ {scalar_t__ sd; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2 (int16_t VAR_4, bool VAR_5) {
    FUNC_0 (&VAR_2, VAR_1);
    for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_3[VAR_6].sd < 0) {
            VAR_3[VAR_6].sd = VAR_4;
            VAR_3[VAR_6].user = VAR_5;
            break;
        }
    }
    FUNC_1 (&VAR_2);
}
