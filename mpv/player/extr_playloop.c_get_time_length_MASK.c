
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demuxer {scalar_t__ duration; } ;
struct MPContext {struct demuxer* demuxer; } ;


 double VAR_0 ;

double FUNC_0(struct MPContext *VAR_1)
{
    struct demuxer *VAR_2 = VAR_1->demuxer;
    return VAR_2 && VAR_2->duration >= 0 ? VAR_2->duration : VAR_0;
}
