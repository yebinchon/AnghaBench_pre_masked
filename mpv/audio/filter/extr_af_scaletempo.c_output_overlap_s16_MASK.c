
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct priv {int* buf_overlap; int samples_overlap; scalar_t__ buf_queue; int * table_blend; } ;
typedef int int32_t ;
typedef int int16_t ;



__attribute__((used)) static void FUNC_0(struct priv *VAR_0, void *VAR_1,
                               int VAR_2)
{
    int16_t *VAR_3 = VAR_1;
    int32_t *VAR_4 = VAR_0->table_blend;
    int16_t *VAR_5 = VAR_0->buf_overlap;
    int16_t *VAR_6 = (int16_t *)(VAR_0->buf_queue + VAR_2);
    for (int VAR_7 = 0; VAR_7 < VAR_0->samples_overlap; VAR_7++) {
        *VAR_3++ = *VAR_5 - ((*VAR_4++ *(*VAR_5 - *VAR_6++)) >> 16);
        VAR_5++;
    }
}
