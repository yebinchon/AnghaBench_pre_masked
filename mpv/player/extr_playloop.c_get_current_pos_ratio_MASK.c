
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demuxer {scalar_t__ filesize; scalar_t__ filepos; } ;
struct MPContext {double max_frames; TYPE_1__* opts; struct demuxer* demuxer; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ play_frames; } ;


 double FUNC_0 (double,int ,int) ;
 double FUNC_1 (double,double) ;
 double FUNC_2 (struct MPContext*) ;
 double FUNC_3 (struct MPContext*) ;
 double FUNC_4 (struct MPContext*) ;
 double FUNC_5 (struct MPContext*) ;

double FUNC_6(struct MPContext *VAR_0, bool VAR_1)
{
    struct demuxer *VAR_2 = VAR_0->demuxer;
    if (!VAR_2)
        return -1;
    double VAR_3 = -1;
    double VAR_4 = 0;
    double VAR_5 = FUNC_5(VAR_0);
    if (VAR_1) {
        double VAR_6 = FUNC_4(VAR_0);
        double VAR_7 = FUNC_3(VAR_0);
        if (VAR_7 > FUNC_1(0, VAR_5))
            VAR_7 = FUNC_1(0, VAR_5);
        if (VAR_7 < VAR_6)
            VAR_7 = VAR_6;
        VAR_4 = VAR_6;
        VAR_5 = VAR_7 - VAR_6;
    }
    double VAR_8 = FUNC_2(VAR_0);
    if (VAR_5 > 0)
        VAR_3 = FUNC_0((VAR_8 - VAR_4) / VAR_5, 0, 1);
    if (VAR_3 < 0) {
        int64_t VAR_9 = VAR_2->filesize;
        if (VAR_9 > 0 && VAR_2->filepos >= 0)
            VAR_3 = FUNC_0(VAR_2->filepos / (double)VAR_9, 0, 1);
    }
    if (VAR_1) {
        if (VAR_0->opts->play_frames > 0)
            VAR_3 = FUNC_1(VAR_3, 1.0 -
                    VAR_0->max_frames / (double) VAR_0->opts->play_frames);
    }
    return VAR_3;
}
