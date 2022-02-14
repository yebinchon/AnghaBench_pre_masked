
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct audio_repack {int base_src_size; int base_dst_size; int extra_dst_size; int * repack_func; } ;
typedef size_t audio_repack_mode_t ;


 int FUNC_0 (struct audio_repack*,int ,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1(struct audio_repack *VAR_5,
        audio_repack_mode_t VAR_6, uint8_t VAR_7)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 if (VAR_7 != 16)
  return -1;
 int VAR_8[8] = {3, 4, 5, 6, 5, 6, 8, 8};
 VAR_5->base_src_size = 8 * (16 / 8);
 VAR_5->base_dst_size = VAR_8[VAR_6] * (16 / 8);
 VAR_5->extra_dst_size = 8 - VAR_8[VAR_6];
 VAR_5->repack_func = &VAR_3;
 if (VAR_6 == VAR_1 ||
     VAR_6 == VAR_2 ||
     VAR_6 == VAR_0)
  VAR_5->repack_func = &VAR_4;

 return 0;
}
