
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* akm; } ;
struct TYPE_2__ {unsigned short* images; } ;


 int FUNC_0 (struct snd_ice1712*,int,unsigned short) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0, int VAR_1, unsigned short VAR_2)
{
 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_1 <<= 1;
 VAR_0->akm[0].images[VAR_1] = VAR_2 >> 8;
 VAR_0->akm[0].images[VAR_1 + 1] = VAR_2;
}
