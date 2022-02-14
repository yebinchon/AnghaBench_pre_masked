
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dice {int dummy; } ;
struct reg_params {unsigned int count; unsigned int size; } ;
typedef int reg ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_dice*,scalar_t__,int *,int) ;
 int FUNC_2 (struct snd_dice*,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_3(struct snd_dice *VAR_3, enum amdtp_stream_direction VAR_4,
    struct reg_params *VAR_5)
{
 __be32 VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5->count; VAR_7++) {
  VAR_6 = FUNC_0((u32)-1);
  if (VAR_4 == VAR_0) {
   FUNC_2(VAR_3,
     VAR_5->size * VAR_7 + VAR_2,
     &VAR_6, sizeof(VAR_6));
  } else {
   FUNC_1(VAR_3,
     VAR_5->size * VAR_7 + VAR_1,
     &VAR_6, sizeof(VAR_6));
  }
 }
}
