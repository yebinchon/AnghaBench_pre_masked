
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uid_t ;
struct arl_callback_ptr {TYPE_1__* p; int line; int ff; } ;
struct TYPE_2__ {scalar_t__ uid; } ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(const char *VAR_0, uint32_t VAR_1, const char *VAR_2, void *VAR_3) {
    (void)VAR_0; (void)VAR_1; (void)VAR_2;
    struct arl_callback_ptr *VAR_4 = (struct arl_callback_ptr *)VAR_3;
    if(FUNC_4(FUNC_2(VAR_4->ff, VAR_4->line) < 5)) return;


    const char *VAR_5 = FUNC_1(VAR_4->ff, VAR_4->line, 2);



    if(FUNC_0(VAR_5 && *VAR_5))
        VAR_4->p->uid = (uid_t)FUNC_3(VAR_5);
}
