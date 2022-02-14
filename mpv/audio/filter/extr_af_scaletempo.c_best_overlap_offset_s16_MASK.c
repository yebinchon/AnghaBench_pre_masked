
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int* table_window; int* buf_overlap; long num_channels; int* buf_pre_corr; long samples_overlap; int frames_search; scalar_t__ buf_queue; } ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct priv *VAR_1)
{
    int64_t VAR_2 = VAR_0;
    int VAR_3 = 0;

    int32_t *VAR_4 = VAR_1->table_window;
    int16_t *VAR_5 = VAR_1->buf_overlap;
    VAR_5 += VAR_1->num_channels;
    int32_t *VAR_6 = VAR_1->buf_pre_corr;
    for (long VAR_7 = VAR_1->num_channels; VAR_7 < VAR_1->samples_overlap; VAR_7++)
        *VAR_6++ = (*VAR_4++ **VAR_5++) >> 15;

    int16_t *VAR_8 = (int16_t *)VAR_1->buf_queue + VAR_1->num_channels;
    for (int VAR_9 = 0; VAR_9 < VAR_1->frames_search; VAR_9++) {
        int64_t VAR_10 = 0;
        int16_t *VAR_11 = VAR_8;
        VAR_6 = VAR_1->buf_pre_corr;
        VAR_6 += VAR_1->samples_overlap - VAR_1->num_channels;
        VAR_11 += VAR_1->samples_overlap - VAR_1->num_channels;
        long VAR_12 = -(VAR_1->samples_overlap - VAR_1->num_channels);
        do {
            VAR_10 += VAR_6[VAR_12 + 0] * VAR_11[VAR_12 + 0];
            VAR_10 += VAR_6[VAR_12 + 1] * VAR_11[VAR_12 + 1];
            VAR_10 += VAR_6[VAR_12 + 2] * VAR_11[VAR_12 + 2];
            VAR_10 += VAR_6[VAR_12 + 3] * VAR_11[VAR_12 + 3];
            VAR_12 += 4;
        } while (VAR_12 < 0);
        if (VAR_10 > VAR_2) {
            VAR_2 = VAR_10;
            VAR_3 = VAR_9;
        }
        VAR_8 += VAR_1->num_channels;
    }

    return VAR_3 * 2 * VAR_1->num_channels;
}
