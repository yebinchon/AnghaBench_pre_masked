
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct snd_dg00x {int unit; } ;
typedef int reg ;
typedef int __be32 ;


 size_t FUNC_0 (unsigned int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 unsigned int* VAR_4 ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

int FUNC_3(struct snd_dg00x *VAR_5,
           unsigned int *VAR_6)
{
 u32 VAR_7;
 __be32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5->unit, VAR_3,
     VAR_0 + VAR_1,
     &VAR_8, sizeof(VAR_8), 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_1(VAR_8) & 0x0f;
 if (VAR_7 < FUNC_0(VAR_4))
  *VAR_6 = VAR_4[VAR_7];

 else
  VAR_9 = -VAR_2;

 return VAR_9;
}
