
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {scalar_t__ num; struct intel8x0* private_data; } ;
struct intel8x0 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel8x0*,int ,unsigned short) ;
 int FUNC_2 (struct intel8x0*,int ) ;
 scalar_t__ FUNC_3 (struct intel8x0*) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_4, unsigned short VAR_5,
      unsigned short VAR_6)
{
 struct intel8x0 *VAR_7 = VAR_4->private_data;

 if (FUNC_3(VAR_7))
  return;
 FUNC_1(VAR_7, FUNC_0(VAR_0), VAR_6);
 if (VAR_4->num)
  VAR_5 |= VAR_2;
 FUNC_1(VAR_7, FUNC_0(VAR_1), VAR_5);
 FUNC_2(VAR_7, VAR_3);
}
