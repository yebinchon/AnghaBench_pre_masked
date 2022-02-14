
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_2, u16 VAR_3)
{
 FUNC_0(VAR_2, VAR_1, VAR_3 >> 8);
 FUNC_0(VAR_2, VAR_0,
        (VAR_3 & 0xff));

 return 0;
}
