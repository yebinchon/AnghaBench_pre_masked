
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
typedef int b ;


 int FUNC_0 (struct buffer*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct buffer*,char*,char const*) ;
 int FUNC_2 (struct buffer*,int *,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct env_set*,int ,char const*) ;

void
FUNC_5(struct env_set *VAR_1, const char *VAR_2, const char *VAR_3)
{
    uint8_t VAR_4[64];
    struct buffer VAR_5;
    FUNC_2(&VAR_5, VAR_4, sizeof(VAR_4));
    if (FUNC_1(&VAR_5, "OPENVPN_%s", VAR_2))
    {
        FUNC_4(VAR_1, FUNC_0(&VAR_5), VAR_3);
    }
    else
    {
        FUNC_3(VAR_0, "setenv_str_safe: name overflow");
    }
}
