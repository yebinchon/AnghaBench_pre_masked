
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alsa_fmt {int mp_format; } ;


 struct alsa_fmt const* VAR_0 ;

__attribute__((used)) static const struct alsa_fmt *FUNC_0(int VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2].mp_format; VAR_2++) {
        if (VAR_0[VAR_2].mp_format == VAR_1)
            return &VAR_0[VAR_2];
    }
    return ((void*)0);
}
