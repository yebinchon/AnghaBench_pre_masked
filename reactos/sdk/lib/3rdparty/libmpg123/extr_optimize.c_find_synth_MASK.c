
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const func_synth ;
typedef enum synth_resample { ____Placeholder_synth_resample } synth_resample ;
typedef enum synth_format { ____Placeholder_synth_format } synth_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(func_synth VAR_4, const func_synth VAR_5[VAR_3][VAR_2])
{
 enum synth_resample VAR_6;
 enum synth_format VAR_7;
 for(VAR_6=0; VAR_6<VAR_3; ++VAR_6)
 for(VAR_7=0; VAR_7<VAR_2; ++VAR_7)
 if(VAR_4 == VAR_5[VAR_6][VAR_7])
 return VAR_1;

 return VAR_0;
}
