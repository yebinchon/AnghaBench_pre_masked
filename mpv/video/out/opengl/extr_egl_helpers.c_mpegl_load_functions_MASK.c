
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log {int dummy; } ;
struct GL {scalar_t__ SwapInterval; } ;
typedef scalar_t__ EGLDisplay ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 char* FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct GL*,int ,int *,char const*,struct mp_log*) ;
 scalar_t__ VAR_3 ;

void FUNC_3(struct GL *VAR_4, struct mp_log *VAR_5)
{
    const char *VAR_6 = "";
    EGLDisplay VAR_7 = FUNC_0();
    if (VAR_7 != VAR_1)
        VAR_6 = FUNC_1(VAR_7, VAR_0);

    FUNC_2(VAR_4, VAR_2, ((void*)0), VAR_6, VAR_5);
    if (!VAR_4->SwapInterval)
        VAR_4->SwapInterval = VAR_3;
}
