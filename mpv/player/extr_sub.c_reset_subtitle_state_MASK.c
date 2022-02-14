
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dec_sub {int dummy; } ;
struct MPContext {int num_tracks; TYPE_1__** tracks; } ;
struct TYPE_2__ {struct dec_sub* d_sub; } ;


 int FUNC_0 (struct dec_sub*) ;
 int FUNC_1 (struct MPContext*,int *) ;

void FUNC_2(struct MPContext *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_tracks; VAR_1++) {
        struct dec_sub *VAR_2 = VAR_0->tracks[VAR_1]->d_sub;
        if (VAR_2)
            FUNC_0(VAR_2);
    }
    FUNC_1(VAR_0, ((void*)0));
}
