
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_es1688*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_es1688 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 1000; VAR_4; VAR_4--)
  if (FUNC_1(FUNC_0(VAR_3, VAR_0)) & 0x80)
   return FUNC_1(FUNC_0(VAR_3, VAR_2));
 FUNC_2("es1688 get byte failed: 0x%lx = 0x%x!!!\n", FUNC_0(VAR_3, VAR_0), FUNC_1(FUNC_0(VAR_3, VAR_0)));
 return -VAR_1;
}
