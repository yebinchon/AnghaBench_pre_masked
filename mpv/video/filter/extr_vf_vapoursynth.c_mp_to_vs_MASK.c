
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpvs_fmt {int vs; scalar_t__ bits; } ;
typedef int VSPresetFormat ;


 scalar_t__ FUNC_0 (int,struct mpvs_fmt const*) ;
 struct mpvs_fmt* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static VSPresetFormat FUNC_1(int VAR_2)
{
    for (int VAR_3 = 0; VAR_0[VAR_3].bits; VAR_3++) {
        const struct mpvs_fmt *VAR_4 = &VAR_0[VAR_3];
        if (FUNC_0(VAR_2, VAR_4))
            return VAR_4->vs;
    }
    return VAR_1;
}
