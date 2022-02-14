
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cfFormat; } ;
struct paste_format {scalar_t__ name; TYPE_1__ fmt; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct paste_format* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    struct paste_format *VAR_1;
    static int VAR_2;

    if (!VAR_2)
    {
        for (VAR_1 = VAR_0; VAR_1->fmt.cfFormat; VAR_1++)
        {
            if (VAR_1->name)
                VAR_1->fmt.cfFormat = FUNC_0( VAR_1->name );
        }
        VAR_2 = 1;
    }
}
