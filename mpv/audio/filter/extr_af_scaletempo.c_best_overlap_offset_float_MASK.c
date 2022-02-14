
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {float* table_window; float* buf_overlap; int num_channels; float* buf_pre_corr; int samples_overlap; int frames_search; scalar_t__ buf_queue; } ;


 float VAR_0 ;

__attribute__((used)) static int FUNC_0(struct priv *VAR_1)
{
    float VAR_2 = VAR_0;
    int VAR_3 = 0;

    float *VAR_4 = VAR_1->table_window;
    float *VAR_5 = VAR_1->buf_overlap;
    VAR_5 += VAR_1->num_channels;
    float *VAR_6 = VAR_1->buf_pre_corr;
    for (int VAR_7 = VAR_1->num_channels; VAR_7 < VAR_1->samples_overlap; VAR_7++)
        *VAR_6++ = *VAR_4++ **VAR_5++;

    float *VAR_8 = (float *)VAR_1->buf_queue + VAR_1->num_channels;
    for (int VAR_9 = 0; VAR_9 < VAR_1->frames_search; VAR_9++) {
        float VAR_10 = 0;
        float *VAR_11 = VAR_8;
        VAR_6 = VAR_1->buf_pre_corr;
        for (int VAR_12 = VAR_1->num_channels; VAR_12 < VAR_1->samples_overlap; VAR_12++)
            VAR_10 += *VAR_6++ **VAR_11++;
        if (VAR_10 > VAR_2) {
            VAR_2 = VAR_10;
            VAR_3 = VAR_9;
        }
        VAR_8 += VAR_1->num_channels;
    }

    return VAR_3 * 4 * VAR_1->num_channels;
}
