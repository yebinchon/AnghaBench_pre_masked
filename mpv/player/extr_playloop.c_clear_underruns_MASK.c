
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct MPContext {TYPE_2__* vo_chain; TYPE_1__* ao_chain; } ;
struct TYPE_4__ {int underrun; } ;
struct TYPE_3__ {int underrun; } ;


 int FUNC_0 (struct MPContext*) ;

__attribute__((used)) static void FUNC_1(struct MPContext *VAR_0)
{
    if (VAR_0->ao_chain && VAR_0->ao_chain->underrun) {
        VAR_0->ao_chain->underrun = 0;
        FUNC_0(VAR_0);
    }

    if (VAR_0->vo_chain && VAR_0->vo_chain->underrun) {
        VAR_0->vo_chain->underrun = 0;
        FUNC_0(VAR_0);
    }
}
