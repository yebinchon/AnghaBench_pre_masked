
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int num_tracks; TYPE_1__** tracks; } ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (struct MPContext*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct MPContext*,TYPE_1__*) ;

void FUNC_2(struct MPContext *VAR_1, const char *VAR_2)
{
    if (VAR_2)
        FUNC_0(VAR_1, "%s\n", VAR_2);
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        for (int VAR_4 = 0; VAR_4 < VAR_1->num_tracks; VAR_4++)
            if (VAR_1->tracks[VAR_4]->type == VAR_3)
                FUNC_1(VAR_1, VAR_1->tracks[VAR_4]);
    }
}
