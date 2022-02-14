
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; scalar_t__ selected; } ;
struct MPContext {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPContext*,int,int ,int *,int ) ;

void FUNC_1(struct MPContext *VAR_1, struct track *VAR_2)
{
    if (VAR_2 && VAR_2->selected) {
        for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
            FUNC_0(VAR_1, VAR_3, VAR_2->type, ((void*)0), 0);
    }
}
