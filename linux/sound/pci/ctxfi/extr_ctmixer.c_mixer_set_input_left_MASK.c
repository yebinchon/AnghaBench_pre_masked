
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc {int dummy; } ;
struct ct_mixer {int * amixers; } ;
typedef enum MIXER_PORT_T { ____Placeholder_MIXER_PORT_T } MIXER_PORT_T ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct rsc*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ct_mixer *VAR_2,
    enum MIXER_PORT_T VAR_3, struct rsc *VAR_4)
{
 enum CT_AMIXER_CTL VAR_5 = FUNC_2(VAR_3);

 FUNC_1(VAR_2->amixers[VAR_5*VAR_0], VAR_4);
 VAR_5 = FUNC_0(VAR_5);
 if (VAR_5 < VAR_1)
  FUNC_1(VAR_2->amixers[VAR_5*VAR_0], VAR_4);

 return 0;
}
