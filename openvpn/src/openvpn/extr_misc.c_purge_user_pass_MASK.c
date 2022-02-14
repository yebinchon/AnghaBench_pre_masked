
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pass {int nocache; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct user_pass*,int) ;

void
FUNC_2(struct user_pass *VAR_1, const bool VAR_2)
{
    const bool VAR_3 = VAR_1->nocache;
    static bool VAR_4 = 0;
    if (VAR_3 || VAR_2)
    {
        FUNC_1(VAR_1, sizeof(*VAR_1));
        VAR_1->nocache = VAR_3;
    }




    else if (!VAR_4)
    {
        FUNC_0(VAR_0, "WARNING: this configuration may cache passwords in memory -- use the auth-nocache option to prevent this");
        VAR_4 = 1;
    }
}
