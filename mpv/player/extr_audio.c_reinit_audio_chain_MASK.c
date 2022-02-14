
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int stream; } ;
struct MPContext {struct track*** current_track; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct MPContext*,struct track*) ;
 int FUNC_1 (struct MPContext*,struct track*) ;
 int FUNC_2 (struct MPContext*) ;

void FUNC_3(struct MPContext *VAR_1)
{
    struct track *VAR_2 = ((void*)0);
    VAR_2 = VAR_1->current_track[0][VAR_0];
    if (!VAR_2 || !VAR_2->stream) {
        FUNC_2(VAR_1);
        FUNC_0(VAR_1, VAR_2);
        return;
    }
    FUNC_1(VAR_1, VAR_2);
}
