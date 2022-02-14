
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vframe_info ;
typedef int uint64_t ;
struct obs_vframe_info {int timestamp; int count; } ;
struct obs_core_video {int total_frames; int lagged_frames; int vframe_info_buffer_gpu; int vframe_info_buffer; } ;


 int FUNC_0 (int *,struct obs_vframe_info*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct obs_core_video *VAR_0, bool VAR_1,
          const bool VAR_2, uint64_t *VAR_3,
          uint64_t VAR_4)
{
 struct obs_vframe_info VAR_5;
 uint64_t VAR_6 = *VAR_3;
 uint64_t VAR_7 = VAR_6 + VAR_4;
 int VAR_8;

 if (FUNC_2(VAR_7)) {
  *VAR_3 = VAR_7;
  VAR_8 = 1;
 } else {
  VAR_8 = (int)((FUNC_1() - VAR_6) / VAR_4);
  *VAR_3 = VAR_6 + VAR_4 * VAR_8;
 }

 VAR_0->total_frames += VAR_8;
 VAR_0->lagged_frames += VAR_8 - 1;

 VAR_5.timestamp = VAR_6;
 VAR_5.count = VAR_8;

 if (VAR_1)
  FUNC_0(&VAR_0->vframe_info_buffer, &VAR_5,
        sizeof(VAR_5));
 if (VAR_2)
  FUNC_0(&VAR_0->vframe_info_buffer_gpu,
        &VAR_5, sizeof(VAR_5));
}
