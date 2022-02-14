
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_tscm {int unit; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_tscm *VAR_5, u32 *VAR_6)
{
 int VAR_7 = 0;
 __be32 VAR_8;
 int VAR_9;

 while (VAR_7++ < 5) {
  VAR_9 = FUNC_2(VAR_5->unit, VAR_2,
    VAR_3 + VAR_4,
    &VAR_8, sizeof(VAR_8), 0);
  if (VAR_9 < 0)
   return VAR_9;

  *VAR_6 = FUNC_0(VAR_8);
  if (*VAR_6 & VAR_0)
   break;


  FUNC_1(50);
 }


 if (VAR_7 >= 5)
  return -VAR_1;

 return 0;
}
