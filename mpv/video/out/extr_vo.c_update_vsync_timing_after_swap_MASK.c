
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_vsync_info {void* last_queue_display_time; } ;
struct vo_internal {int num_successive_vsyncs; int num_vsync_samples; int* vsync_samples; int num_total_vsync_samples; int vsync_interval; double estimated_vsync_interval; int estimated_vsync_jitter; void* base_vsync; scalar_t__ drop_point; int expecting_vsync; void* prev_vsync; } ;
struct vo {struct vo_internal* in; } ;
typedef void* int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct vo*,char*,int) ;
 int FUNC_2 (struct vo_internal*,int*,int,int ,void*) ;
 int FUNC_3 (struct vo*) ;
 int FUNC_4 (struct vo*) ;
 int FUNC_5 (struct vo*) ;
 int FUNC_6 (struct vo*,int) ;

__attribute__((used)) static void FUNC_7(struct vo *VAR_1,
                                           struct vo_vsync_info *VAR_2)
{
    struct vo_internal *VAR_3 = VAR_1->in;

    int64_t VAR_4 = VAR_2->last_queue_display_time;
    int64_t VAR_5 = VAR_3->prev_vsync;
    VAR_3->prev_vsync = VAR_4;

    if (!VAR_3->expecting_vsync) {
        FUNC_4(VAR_1);
        return;
    }

    VAR_3->num_successive_vsyncs++;
    if (VAR_3->num_successive_vsyncs <= 2)
        return;

    if (VAR_3->num_vsync_samples >= VAR_0)
        VAR_3->num_vsync_samples -= 1;
    FUNC_2(VAR_3, VAR_3->vsync_samples, VAR_3->num_vsync_samples, 0,
                        VAR_4 - VAR_5);
    VAR_3->drop_point = FUNC_0(VAR_3->drop_point + 1, VAR_3->num_vsync_samples);
    VAR_3->num_total_vsync_samples += 1;
    if (VAR_3->base_vsync) {
        VAR_3->base_vsync += VAR_3->vsync_interval;
    } else {
        VAR_3->base_vsync = VAR_4;
    }

    double VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_3->num_vsync_samples; VAR_7++)
        VAR_6 += VAR_3->vsync_samples[VAR_7];
    VAR_3->estimated_vsync_interval = VAR_6 / VAR_3->num_vsync_samples;
    VAR_3->estimated_vsync_jitter =
        FUNC_6(VAR_1, VAR_3->vsync_interval) / VAR_3->vsync_interval;

    FUNC_3(VAR_1);
    FUNC_5(VAR_1);

    FUNC_1(VAR_1, "value %f jitter", VAR_3->estimated_vsync_jitter);
    FUNC_1(VAR_1, "value %f vsync-diff", VAR_3->vsync_samples[0] / 1e6);
}
