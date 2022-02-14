
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct video_output_info {scalar_t__ fps_num; scalar_t__ fps_den; } ;
struct sync_pair_vid {int black; int white; int tex; } ;
typedef int gs_effect_t ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,int **,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (int ) ;
 struct video_output_info* FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, gs_effect_t *VAR_3)
{
 struct sync_pair_vid *VAR_4 = VAR_2;

 uint64_t VAR_5 = FUNC_4();
 if (!VAR_1)
  VAR_1 = VAR_5;

 uint64_t VAR_6 = FUNC_6(FUNC_3());
 const struct video_output_info *VAR_7 =
  FUNC_7(FUNC_3());
 uint64_t VAR_8 = VAR_7->fps_num;
 uint64_t VAR_9 = VAR_7->fps_den;

 bool VAR_10 = FUNC_8(VAR_5, VAR_6, VAR_8, VAR_9);
 FUNC_5(VAR_10 ? VAR_4->white : VAR_4->black, 0, 0, 0, 0, 0);

}
