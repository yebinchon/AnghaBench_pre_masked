
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ min_ver; scalar_t__ max_ver; int line; int upper_limit; int tags; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_1[VAR_3].base; ++VAR_3)
    {
        if ((VAR_1[VAR_3].min_ver == VAR_0 || VAR_2 >= VAR_1[VAR_3].min_ver) &&
            (VAR_1[VAR_3].max_ver == VAR_0 || VAR_2 <= VAR_1[VAR_3].max_ver))
        {
            FUNC_0(VAR_1[VAR_3].base, VAR_1[VAR_3].tags, VAR_1[VAR_3].upper_limit, VAR_1[VAR_3].line);
        }
    }
}
