
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* bp; int* start; int ct; scalar_t__ c; } ;
typedef TYPE_1__ opj_mqc_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(opj_mqc_t *VAR_1)
{



    FUNC_0(VAR_1->bp >= VAR_1->start);
    VAR_1->c = 0;





    VAR_1->ct = VAR_0;


    FUNC_0(VAR_1->bp[-1] != 0xff);
}
