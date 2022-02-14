
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_msnd {int card; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_msnd*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_msnd *VAR_0, u8 VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1) == 0)
  return 0;
 FUNC_0(VAR_0->card);
 return FUNC_1(VAR_0, VAR_1);
}
