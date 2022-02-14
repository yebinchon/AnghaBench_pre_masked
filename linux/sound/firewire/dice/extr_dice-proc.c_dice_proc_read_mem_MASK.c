
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dice {int unit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,scalar_t__,void*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_dice *VAR_2, void *VAR_3,
         unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2->unit, VAR_1,
     VAR_0 + 4 * VAR_4,
     VAR_3, 4 * VAR_5, 0);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6)
  FUNC_0(&((u32 *)VAR_3)[VAR_6]);

 return 0;
}
