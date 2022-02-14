
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flag_info {int val; int name; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(DWORD VAR_0, const struct flag_info *VAR_1, size_t VAR_2)
{
    unsigned int VAR_3;

    for (VAR_3=0; VAR_3 < VAR_2; VAR_3++)
        if ((VAR_0 & VAR_1[VAR_3].val) ||
            ((!VAR_0) && (!VAR_1[VAR_3].val)))
            FUNC_0("%s ", VAR_1[VAR_3].name);
}
