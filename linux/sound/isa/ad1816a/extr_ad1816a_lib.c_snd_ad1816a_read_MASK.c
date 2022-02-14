
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ad1816a {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ad1816a*,int ) ;
 int FUNC_1 (struct snd_ad1816a*,int ,unsigned char) ;

__attribute__((used)) static unsigned short FUNC_2(struct snd_ad1816a *VAR_3, unsigned char VAR_4)
{
 FUNC_1(VAR_3, VAR_0, VAR_4 & 0x3f);
 return FUNC_0(VAR_3, VAR_2) |
  (FUNC_0(VAR_3, VAR_1) << 8);
}
