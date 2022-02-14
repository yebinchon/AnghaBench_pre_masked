
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct snd_dice {int unit; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct snd_dice*,scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,scalar_t__*,int,int ) ;

int FUNC_5(struct snd_dice *VAR_4)
{
 __be32 *VAR_5;
 unsigned int VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_3(9, sizeof(__be32) * 2, VAR_2);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_8 = FUNC_4(VAR_4->unit, VAR_3,
     VAR_0, VAR_5,
     9 * sizeof(__be32) * 2, 0);
 if (VAR_8 < 0)
  goto end;


 for (VAR_6 = 0; VAR_6 < 9; ++VAR_6) {
  int VAR_9;

  for (VAR_9 = VAR_6 + 1; VAR_9 < 9; ++VAR_9) {
   if (VAR_5[VAR_6 * 2] == VAR_5[VAR_9 * 2])
    goto end;
  }
 }

 VAR_7 = VAR_0 + FUNC_0(VAR_5[12]) * 4;
 VAR_8 = FUNC_1(VAR_4, VAR_7);
end:
 FUNC_2(VAR_5);
 return VAR_8;
}
