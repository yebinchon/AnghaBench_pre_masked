
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct snd_soc_component *VAR_5, int VAR_6)
{
 u8 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~(VAR_3 | VAR_2 |
    VAR_1 | VAR_0);
 FUNC_1(VAR_5, VAR_4, VAR_7);
}
