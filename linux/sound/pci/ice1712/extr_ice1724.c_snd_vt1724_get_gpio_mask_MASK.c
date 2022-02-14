
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int vt1720; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_ice1712 *VAR_2)
{
 unsigned int VAR_3;
 if (!VAR_2->vt1720)
  VAR_3 = (unsigned int)FUNC_1(FUNC_0(VAR_2, VAR_1));
 else
  VAR_3 = 0;
 VAR_3 = (VAR_3 << 16) | FUNC_2(FUNC_0(VAR_2, VAR_0));
 return VAR_3;
}
