
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component
       *VAR_8, int VAR_9,
       int VAR_10, u32 VAR_11)
{

 switch (VAR_9) {
 case 128:
  FUNC_1(VAR_8, VAR_1,
        VAR_7,
        VAR_6);
  FUNC_1(VAR_8, VAR_10, VAR_5, 0);
  FUNC_1(VAR_8, VAR_0,
        VAR_4,
        VAR_3);

  break;
 case 129:
  FUNC_0(VAR_8);
  FUNC_1(VAR_8, VAR_0,
        VAR_2, VAR_11);
  break;
 }

 return 0;
}
