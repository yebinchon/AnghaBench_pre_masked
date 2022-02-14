
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servent {int s_port; } ;


 int FUNC_0 (char const*) ;
 struct servent* FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0)
{
    int VAR_1 = 0;
    VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 >0 && VAR_1 < 65536)
    {
        return VAR_1;
    }

    struct servent *VAR_2;
    VAR_2 = FUNC_1(VAR_0, ((void*)0));
    if (VAR_2)
    {
        return VAR_2->s_port;
    }

    return 0;
}
