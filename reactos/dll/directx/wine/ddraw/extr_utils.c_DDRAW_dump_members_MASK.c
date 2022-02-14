
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct member_info {int val; int offset; int (* func ) (char const*) ;int name; } ;
typedef int DWORD ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(DWORD VAR_0, const void *VAR_1, const struct member_info *VAR_2, size_t VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4=0; VAR_4 < VAR_3; VAR_4++)
    {
        if (VAR_2[VAR_4].val & VAR_0)
        {
            FUNC_0(" - %s : ", VAR_2[VAR_4].name);
            VAR_2[VAR_4].func((const char *)VAR_1 + VAR_2[VAR_4].offset);
        }
    }
}
