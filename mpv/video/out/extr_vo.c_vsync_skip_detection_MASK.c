
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int prev_vsync; int base_vsync; int drop_point; int* vsync_samples; int vsync_interval; int num_vsync_samples; int delayed_count; } ;
struct vo {struct vo_internal* in; } ;
typedef int int64_t ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_0)
{
    struct vo_internal *VAR_1 = VAR_0->in;

    int VAR_2 = 4;
    int64_t VAR_3 = VAR_1->prev_vsync, VAR_4 = VAR_1->base_vsync, VAR_5 = 0, VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_1->drop_point; VAR_7++) {
        VAR_5 += VAR_3 - VAR_4;
        VAR_3 -= VAR_1->vsync_samples[VAR_7];
        VAR_4 -= VAR_1->vsync_interval;
        if (VAR_7 == VAR_2 + 1)
            VAR_6 = VAR_5 / VAR_2;
    }
    int64_t VAR_8 = VAR_5 / VAR_1->num_vsync_samples;
    if (VAR_1->drop_point > VAR_2 * 2 &&
        FUNC_1(VAR_8 - VAR_6) >= VAR_1->vsync_interval * 3 / 4)
    {



        VAR_1->base_vsync = VAR_1->prev_vsync;
        VAR_1->delayed_count += 1;
        VAR_1->drop_point = 0;
        FUNC_0(VAR_0, "vo-delayed");
    }
    if (VAR_1->drop_point > 10)
        VAR_1->base_vsync += VAR_8 / 10;
}
