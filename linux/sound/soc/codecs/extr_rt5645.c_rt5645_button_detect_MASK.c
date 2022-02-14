
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_0("val=0x%x\n", VAR_3);
 VAR_2 = VAR_3 & 0xfff0;
 FUNC_2(VAR_1, VAR_0, VAR_3);

 return VAR_2;
}
