
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_internal {int num_vsync_samples; double* vsync_samples; } ;
struct vo {struct vo_internal* in; } ;
typedef double int64_t ;


 double FUNC_0 (double) ;

__attribute__((used)) static double FUNC_1(struct vo *VAR_0, int64_t VAR_1)
{
    struct vo_internal *VAR_2 = VAR_0->in;
    double VAR_3 = 0;
    for (int VAR_4 = 0; VAR_4 < VAR_2->num_vsync_samples; VAR_4++) {
        double VAR_5 = VAR_2->vsync_samples[VAR_4] - VAR_1;
        VAR_3 += VAR_5 * VAR_5;
    }
    return FUNC_0(VAR_3 / VAR_2->num_vsync_samples);
}
