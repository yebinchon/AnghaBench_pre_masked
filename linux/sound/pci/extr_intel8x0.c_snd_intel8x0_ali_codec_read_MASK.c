
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {scalar_t__ num; struct intel8x0* private_data; } ;
struct intel8x0 {int dummy; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned short FUNC_1 (struct intel8x0*,int ) ;
 int FUNC_2 (struct intel8x0*,int ,unsigned short) ;
 scalar_t__ FUNC_3 (struct intel8x0*,int ) ;
 scalar_t__ FUNC_4 (struct intel8x0*) ;

__attribute__((used)) static unsigned short FUNC_5(struct snd_ac97 *VAR_5, unsigned short VAR_6)
{
 struct intel8x0 *VAR_7 = VAR_5->private_data;
 unsigned short VAR_8 = 0xffff;

 if (FUNC_4(VAR_7))
  goto __err;
 VAR_6 |= VAR_1;
 if (VAR_5->num)
  VAR_6 |= VAR_2;
 FUNC_2(VAR_7, FUNC_0(VAR_0), VAR_6);
 if (FUNC_3(VAR_7, VAR_3))
  goto __err;
 VAR_8 = FUNC_1(VAR_7, FUNC_0(VAR_4));
 __err:
 return VAR_8;
}
