
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_audio_buffer {int num_planes; int sstride; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(struct mp_audio_buffer *VAR_0,
                        uint8_t **VAR_1, int VAR_2,
                        uint8_t **VAR_3, int VAR_4, int VAR_5)
{
    if (!VAR_5)
        return;

    for (int VAR_6 = 0; VAR_6 < VAR_0->num_planes; VAR_6++) {
        FUNC_0((char *)VAR_1[VAR_6] + VAR_2 * VAR_0->sstride,
                (char *)VAR_3[VAR_6] + VAR_4 * VAR_0->sstride,
                VAR_5 * VAR_0->sstride);
    }
}
