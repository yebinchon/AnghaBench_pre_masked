
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vaapi_ctx {int log; } ;


 int FUNC_0 (int ,int,char*,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
    struct mp_vaapi_ctx *VAR_3 = VAR_0;
    FUNC_0(VAR_3->log, VAR_2, "libva: %s", VAR_1);
}
