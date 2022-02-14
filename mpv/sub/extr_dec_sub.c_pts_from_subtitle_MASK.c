
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_subtitle_opts {double sub_delay; } ;
struct dec_sub {double sub_speed; double play_dir; struct mp_subtitle_opts* opts; } ;


 double VAR_0 ;

__attribute__((used)) static double FUNC_0(struct dec_sub *VAR_1, double VAR_2)
{
    struct mp_subtitle_opts *VAR_3 = VAR_1->opts;

    if (VAR_2 != VAR_0)
        VAR_2 = (VAR_2 * VAR_1->sub_speed + VAR_3->sub_delay) * VAR_1->play_dir;

    return VAR_2;
}
