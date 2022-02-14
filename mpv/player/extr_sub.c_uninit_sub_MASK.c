
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int * d_sub; } ;
struct MPContext {int osd; } ;


 int FUNC_0 (struct MPContext*,struct track*) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (struct MPContext*,struct track*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

void FUNC_5(struct MPContext *VAR_0, struct track *VAR_1)
{
    if (VAR_1 && VAR_1->d_sub) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_4(VAR_1->d_sub, 0);
        int VAR_2 = FUNC_0(VAR_0, VAR_1);
        FUNC_1(VAR_0->osd, VAR_2, ((void*)0));
        FUNC_3(VAR_1->d_sub);
        VAR_1->d_sub = ((void*)0);
    }
}
