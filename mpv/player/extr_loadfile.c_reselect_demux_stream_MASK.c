
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {scalar_t__ type; int selected; int stream; int demuxer; } ;
struct MPContext {struct track* seek_slave; } ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,double,int ) ;
 double FUNC_1 (struct MPContext*) ;
 scalar_t__ FUNC_2 (struct MPContext*,struct track*) ;

void FUNC_3(struct MPContext *VAR_2, struct track *VAR_3)
{
    if (!VAR_3->stream)
        return;
    double VAR_4 = FUNC_1(VAR_2);
    if (VAR_4 != VAR_0) {
        VAR_4 += FUNC_2(VAR_2, VAR_3);
        if (VAR_3->type == VAR_1)
            VAR_4 -= 10.0;
    }
    FUNC_0(VAR_3->demuxer, VAR_3->stream, VAR_4, VAR_3->selected);
    if (VAR_3 == VAR_2->seek_slave)
        VAR_2->seek_slave = ((void*)0);
}
