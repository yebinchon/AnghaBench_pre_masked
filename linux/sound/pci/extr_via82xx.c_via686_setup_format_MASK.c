
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {int reg_offset; } ;
struct via82xx {int dummy; } ;
struct snd_pcm_runtime {scalar_t__ format; int channels; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct via82xx*,struct viadev*) ;
 int FUNC_3 (struct via82xx*,struct viadev*) ;

__attribute__((used)) static void FUNC_4(struct via82xx *VAR_8, struct viadev *VAR_9,
    struct snd_pcm_runtime *VAR_10)
{
 FUNC_2(VAR_8, VAR_9);

 FUNC_3(VAR_8, VAR_9);
 FUNC_1(VAR_3 |
      (VAR_10->format == VAR_1 ? VAR_2 : 0) |
      (VAR_10->channels > 1 ? VAR_7 : 0) |
      ((VAR_9->reg_offset & 0x10) == 0 ? VAR_6 : 0) |
      VAR_4 |
      VAR_5, FUNC_0(VAR_9, VAR_0));
}
