
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_chmap {int dummy; } ;
struct MPContext {TYPE_1__* ao_chain; } ;
struct TYPE_2__ {scalar_t__ ao; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int*,int*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_2(struct MPContext *VAR_0)
{
    if (VAR_0->ao_chain && VAR_0->ao_chain->ao) {
        int VAR_1;
        int VAR_2;
        struct mp_chmap VAR_3;
        FUNC_1(VAR_0->ao_chain->ao, &VAR_1, &VAR_2, &VAR_3);
        return !FUNC_0(VAR_2);
    }
    return 0;
}
