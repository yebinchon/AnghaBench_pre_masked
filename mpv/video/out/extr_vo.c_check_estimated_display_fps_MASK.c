
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int num_total_vsync_samples; int estimated_vsync_interval; int num_vsync_samples; int* vsync_samples; int nominal_vsync_interval; int vsync_interval; } ;
struct vo {struct vo_internal* in; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,char*,int) ;
 int FUNC_1 (int) ;
 double FUNC_2 (struct vo*,int) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_1)
{
    struct vo_internal *VAR_2 = VAR_1->in;

    bool VAR_3 = 0;
    if (VAR_2->num_total_vsync_samples >= VAR_0 / 2 &&
        VAR_2->estimated_vsync_interval <= 1e6 / 20.0 &&
        VAR_2->estimated_vsync_interval >= 1e6 / 99.0)
    {
        for (int VAR_4 = 0; VAR_4 < VAR_2->num_vsync_samples; VAR_4++) {
            if (FUNC_1(VAR_2->vsync_samples[VAR_4] - VAR_2->estimated_vsync_interval)
                >= VAR_2->estimated_vsync_interval / 4)
                goto done;
        }
        double VAR_5 = FUNC_2(VAR_1, VAR_2->estimated_vsync_interval);
        double VAR_6 = FUNC_2(VAR_1, VAR_2->nominal_vsync_interval);
        if (VAR_5 * 1.01 < VAR_6)
            VAR_3 = 1;
        done: ;
    }
    if (VAR_3 == (VAR_2->vsync_interval == VAR_2->nominal_vsync_interval)) {
        if (VAR_3) {
            FUNC_0(VAR_1, "adjusting display FPS to a value closer to %.3f Hz\n",
                       1e6 / VAR_2->estimated_vsync_interval);
        } else {
            FUNC_0(VAR_1, "switching back to assuming display fps = %.3f Hz\n",
                       1e6 / VAR_2->nominal_vsync_interval);
        }
    }
    VAR_2->vsync_interval = VAR_3 ? (int64_t)VAR_2->estimated_vsync_interval
                                       : VAR_2->nominal_vsync_interval;
}
