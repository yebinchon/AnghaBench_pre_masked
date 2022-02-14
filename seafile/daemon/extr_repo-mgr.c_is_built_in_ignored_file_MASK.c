
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {int sync_extra_temp_file; } ;
typedef int GPatternSpec ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char const*) ;
 int ** VAR_2 ;
 int ** VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static gboolean
FUNC_1 (const char *VAR_5)
{
    GPatternSpec **VAR_6 = VAR_2;

    while (*VAR_6) {
        if (FUNC_0(*VAR_6, VAR_5))
            return VAR_1;
        VAR_6++;
    }

    if (!VAR_4->sync_extra_temp_file) {
        VAR_6 = VAR_3;
        while (*VAR_6) {
            if (FUNC_0(*VAR_6, VAR_5))
                return VAR_1;
            VAR_6++;
        }
    }

    return VAR_0;
}
