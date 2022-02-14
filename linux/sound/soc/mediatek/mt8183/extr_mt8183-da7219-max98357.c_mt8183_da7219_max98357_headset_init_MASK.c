
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_soc_component*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct snd_soc_component *VAR_7)
{
 int VAR_8;


 VAR_8 = FUNC_1(&VAR_6,
        "Headset Jack",
        VAR_4 |
        VAR_0 | VAR_1 |
        VAR_2 | VAR_3,
        &VAR_5,
        ((void*)0), 0);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_7, &VAR_5);

 return VAR_8;
}
