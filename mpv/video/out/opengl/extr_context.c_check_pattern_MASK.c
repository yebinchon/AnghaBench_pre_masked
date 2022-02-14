
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {size_t last_pattern; int mismatches; int matches; TYPE_1__* opts; } ;
struct TYPE_2__ {int* vsync_pattern; } ;


 int FUNC_0 (struct priv*,char*,int,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct priv *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->opts->vsync_pattern[VAR_0->last_pattern];
    if (VAR_1 == VAR_2) {
        VAR_0->last_pattern++;
        if (VAR_0->last_pattern >= 2)
            VAR_0->last_pattern = 0;
        VAR_0->matches++;
    } else {
        VAR_0->mismatches++;
        FUNC_0(VAR_0, "wrong pattern, expected %d got %d (hit: %d, mis: %d)\n",
                VAR_2, VAR_1, VAR_0->matches, VAR_0->mismatches);
    }
}
