
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_tags {int dummy; } ;
struct mp_log {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,float*) ;
 int FUNC_1 (struct mp_log*,int ,char*) ;
 char* FUNC_2 (struct mp_tags*,char const*) ;

__attribute__((used)) static int FUNC_3(struct mp_log *VAR_1, struct mp_tags *VAR_2,
                       const char *VAR_3, float *VAR_4)
{
    char *VAR_5 = ((void*)0);
    float VAR_6;

    VAR_5 = FUNC_2(VAR_2, VAR_3);
    if (!VAR_5)
        return -1;

    if (FUNC_0(VAR_5, &VAR_6) < 0) {
        FUNC_1(VAR_1, VAR_0, "Invalid replaygain value\n");
        return -1;
    }

    *VAR_4 = VAR_6;
    return 0;
}
