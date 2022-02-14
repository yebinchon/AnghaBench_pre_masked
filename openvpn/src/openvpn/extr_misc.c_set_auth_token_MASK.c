
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_pass {int defined; char const* password; char const* username; } ;


 int VAR_0 ;
 int FUNC_0 (struct user_pass*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int ) ;

void
FUNC_3(struct user_pass *VAR_1, struct user_pass *VAR_2, const char *VAR_3)
{

    if (VAR_3 && FUNC_1(VAR_3) && VAR_1 && VAR_1->defined)
    {
        FUNC_2(VAR_2->password, VAR_3, VAR_0);
        FUNC_2(VAR_2->username, VAR_1->username, VAR_0);
        VAR_2->defined = 1;
    }


    FUNC_0(VAR_1, 0);
}
