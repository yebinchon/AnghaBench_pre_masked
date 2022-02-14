
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {float* table_blend; float* buf_overlap; int samples_overlap; scalar_t__ buf_queue; } ;



__attribute__((used)) static void FUNC_0(struct priv *VAR_0, void *VAR_1,
                                 int VAR_2)
{
    float *VAR_3 = VAR_1;
    float *VAR_4 = VAR_0->table_blend;
    float *VAR_5 = VAR_0->buf_overlap;
    float *VAR_6 = (float *)(VAR_0->buf_queue + VAR_2);
    for (int VAR_7 = 0; VAR_7 < VAR_0->samples_overlap; VAR_7++) {
        *VAR_3++ = *VAR_5 - *VAR_4++ *(*VAR_5 - *VAR_6++);
        VAR_5++;
    }
}
