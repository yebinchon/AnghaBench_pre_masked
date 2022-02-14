
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int unit; } ;
typedef int reg ;
typedef enum snd_dg00x_clock { ____Placeholder_snd_dg00x_clock } snd_dg00x_clock ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,int,int ) ;

int FUNC_2(struct snd_dg00x *VAR_5,
          enum snd_dg00x_clock *VAR_6)
{
 __be32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->unit, VAR_4,
     VAR_0 + VAR_1,
     &VAR_7, sizeof(VAR_7), 0);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_6 = FUNC_0(VAR_7) & 0x0f;
 if (*VAR_6 >= VAR_3)
  VAR_8 = -VAR_2;

 return VAR_8;
}
