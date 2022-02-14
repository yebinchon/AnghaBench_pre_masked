
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int time_t ;
struct saveparam {int dummy; } ;
struct TYPE_5__ {int saveparamslen; TYPE_1__* saveparams; } ;
struct TYPE_4__ {int changes; int seconds; } ;


 TYPE_3__ VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(time_t VAR_1, int VAR_2) {
    VAR_0.saveparams = FUNC_0(VAR_0.saveparams,sizeof(struct saveparam)*(VAR_0.saveparamslen+1));
    VAR_0.saveparams[VAR_0.saveparamslen].seconds = VAR_1;
    VAR_0.saveparams[VAR_0.saveparamslen].changes = VAR_2;
    VAR_0.saveparamslen++;
}
