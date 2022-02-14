
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int dummy; } ;
struct mp_log {int dummy; } ;


 scalar_t__ FUNC_0 (char*,float*) ;
 char* FUNC_1 (struct mp_tags*,char const*) ;

__attribute__((used)) static int FUNC_2(struct mp_log *VAR_0, struct mp_tags *VAR_1,
                       const char *VAR_2, float *VAR_3)
{
    char *VAR_4 = ((void*)0);
    float VAR_5;

    *VAR_3 = 1.0;

    VAR_4 = FUNC_1(VAR_1, VAR_2);
    if (!VAR_4)
        return 0;

    if (FUNC_0(VAR_4, &VAR_5) < 0 || VAR_5 <= 0.0)
        return -1;

    *VAR_3 = VAR_5;
    return 0;
}
