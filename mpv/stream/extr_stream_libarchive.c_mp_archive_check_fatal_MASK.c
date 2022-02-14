
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_archive {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mp_archive*,char*) ;
 int FUNC_1 (struct mp_archive*) ;

__attribute__((used)) static bool FUNC_2(struct mp_archive *VAR_1, int VAR_2)
{
    if (VAR_2 > VAR_0)
        return 0;
    FUNC_0(VAR_1, "fatal error received - closing archive\n");
    FUNC_1(VAR_1);
    return 1;
}
