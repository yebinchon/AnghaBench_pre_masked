
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {double num_vsyncs; double av_diff; } ;
struct MPContext {int num_past_frames; struct frame_info* past_frames; } ;


 double VAR_0 ;

__attribute__((used)) static double FUNC_0(struct MPContext *VAR_1, double VAR_2)
{




    if (VAR_1->num_past_frames <= 10)
        return VAR_0;
    int VAR_3 = VAR_1->num_past_frames - 1;
    double VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
    double VAR_8 = 0;
    for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
        struct frame_info *VAR_10 = &VAR_1->past_frames[VAR_9 + 1];
        if (VAR_10->num_vsyncs < 0)
            return VAR_0;
        double VAR_11 = VAR_10->av_diff;
        VAR_4 += VAR_8;
        VAR_5 += VAR_11;
        VAR_6 += VAR_8 * VAR_11;
        VAR_7 += VAR_8 * VAR_8;
        VAR_8 -= VAR_10->num_vsyncs * VAR_2;
    }
    return (VAR_4 * VAR_5 - VAR_3 * VAR_6) / (VAR_4 * VAR_4 - VAR_3 * VAR_7);
}
