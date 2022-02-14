
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {int ** current_track; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct MPContext*,int ) ;

void FUNC_1(struct MPContext *VAR_2)
{
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        FUNC_0(VAR_2, VAR_2->current_track[VAR_3][VAR_1]);
}
