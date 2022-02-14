
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct arl_callback_ptr {int line; int ff; TYPE_1__* p; } ;
struct TYPE_2__ {int status_vmsize; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4(const char *VAR_0, uint32_t VAR_1, const char *VAR_2, void *VAR_3) {
    (void)VAR_0; (void)VAR_1; (void)VAR_2;
    struct arl_callback_ptr *VAR_4 = (struct arl_callback_ptr *)VAR_3;
    if(FUNC_3(FUNC_1(VAR_4->ff, VAR_4->line) < 3)) return;

    VAR_4->p->status_vmsize = FUNC_2(FUNC_0(VAR_4->ff, VAR_4->line, 1));
}
