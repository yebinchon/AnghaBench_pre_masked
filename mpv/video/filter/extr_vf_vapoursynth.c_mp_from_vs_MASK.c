
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpvs_fmt {scalar_t__ vs; scalar_t__ bits; } ;
typedef scalar_t__ VSPresetFormat ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,struct mpvs_fmt const*) ;
 struct mpvs_fmt* VAR_2 ;

__attribute__((used)) static int FUNC_1(VSPresetFormat VAR_3)
{
    for (int VAR_4 = 0; VAR_2[VAR_4].bits; VAR_4++) {
        const struct mpvs_fmt *VAR_5 = &VAR_2[VAR_4];
        if (VAR_5->vs == VAR_3) {
            for (int VAR_6 = VAR_1; VAR_6 < VAR_0; VAR_6++) {
                if (FUNC_0(VAR_6, VAR_5))
                    return VAR_6;
            }
            break;
        }
    }
    return 0;
}
