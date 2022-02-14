
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_2__ {int name; } ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const) ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4(const WCHAR* VAR_4, unsigned* VAR_5)
{
    for (*VAR_5 = 0; *VAR_5 < VAR_3; (*VAR_5)++)
    {
 FUNC_0("%s\n", FUNC_3(VAR_2[*VAR_5].name));
 if (FUNC_2(VAR_2[*VAR_5].name, VAR_4) == 0)
     return VAR_1;
    }

    if (*VAR_4 == '#' && FUNC_1(VAR_4[1]))
    {
        const WCHAR* VAR_6 = VAR_4 + 1;
        *VAR_5 = 0;
        do
        {
            *VAR_5 = *VAR_5 * 10 + *VAR_6 - '0';
        } while (FUNC_1(*++VAR_6));
 if (*VAR_5 < VAR_3)
     return VAR_1;
    }
    return VAR_0;
}
