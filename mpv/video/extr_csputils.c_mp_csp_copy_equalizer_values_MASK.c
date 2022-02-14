
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_csp_params {double brightness; int contrast; double hue; int saturation; double levels_out; int gamma; } ;
struct mp_csp_equalizer_opts {double* values; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 double VAR_6 ;
 int FUNC_0 (double) ;
 double FUNC_1 (double) ;

void FUNC_2(struct mp_csp_params *VAR_7,
                                  const struct mp_csp_equalizer_opts *VAR_8)
{
    VAR_7->brightness = VAR_8->values[VAR_0] / 100.0;
    VAR_7->contrast = (VAR_8->values[VAR_1] + 100) / 100.0;
    VAR_7->hue = VAR_8->values[VAR_3] / 100.0 * VAR_6;
    VAR_7->saturation = (VAR_8->values[VAR_5] + 100) / 100.0;
    VAR_7->gamma = FUNC_0(FUNC_1(8.0) * VAR_8->values[VAR_2] / 100.0);
    VAR_7->levels_out = VAR_8->values[VAR_4];
}
