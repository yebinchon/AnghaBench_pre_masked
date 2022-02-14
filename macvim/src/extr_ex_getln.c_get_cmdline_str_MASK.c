
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_info {int cmdlen; int cmdbuff; } ;
typedef int char_u ;


 struct cmdline_info* FUNC_0 () ;
 int * FUNC_1 (int ,int ) ;

char_u *
FUNC_2()
{
    struct cmdline_info *VAR_0 = FUNC_0();

    if (VAR_0 == ((void*)0))
 return ((void*)0);
    return FUNC_1(VAR_0->cmdbuff, VAR_0->cmdlen);
}
