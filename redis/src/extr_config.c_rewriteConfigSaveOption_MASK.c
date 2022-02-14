
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rewriteConfigState {int dummy; } ;
typedef int sds ;
struct TYPE_4__ {int saveparamslen; TYPE_1__* saveparams; } ;
struct TYPE_3__ {int changes; scalar_t__ seconds; } ;


 int FUNC_0 (struct rewriteConfigState*,char*) ;
 int FUNC_1 (struct rewriteConfigState*,char*,int ,int) ;
 int FUNC_2 (int ,char*,long,int ) ;
 int FUNC_3 () ;
 TYPE_2__ VAR_0 ;

void FUNC_4(struct rewriteConfigState *VAR_1) {
    int VAR_2;
    sds VAR_3;




    for (VAR_2 = 0; VAR_2 < VAR_0.saveparamslen; VAR_2++) {
        VAR_3 = FUNC_2(FUNC_3(),"save %ld %d",
            (long) VAR_0.saveparams[VAR_2].seconds, VAR_0.saveparams[VAR_2].changes);
        FUNC_1(VAR_1,"save",VAR_3,1);
    }

    FUNC_0(VAR_1,"save");
}
