
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_trident {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_trident*,int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_trident * VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_3, VAR_2));
 VAR_4 &= ~VAR_0;
 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_4, FUNC_0(VAR_3, VAR_2));
}
