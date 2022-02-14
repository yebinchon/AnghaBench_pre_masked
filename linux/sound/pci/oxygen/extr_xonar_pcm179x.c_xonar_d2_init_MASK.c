
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int anti_pop_delay; int output_enable_bit; } ;
struct xonar_pcm179x {int dacs; TYPE_1__ generic; } ;
struct oxygen {int card; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct oxygen*,int ,int ,int ) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (struct oxygen*,int ,int ) ;
 int FUNC_3 (struct oxygen*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct oxygen*) ;
 int FUNC_6 (struct oxygen*) ;

__attribute__((used)) static void FUNC_7(struct oxygen *VAR_6)
{
 struct xonar_pcm179x *VAR_7 = VAR_6->model_data;

 VAR_7->generic.anti_pop_delay = 300;
 VAR_7->generic.output_enable_bit = VAR_3;
 VAR_7->dacs = 4;

 FUNC_3(VAR_6);

 FUNC_2(VAR_6, VAR_4, VAR_2);
 FUNC_1(VAR_6, VAR_5, VAR_2);

 FUNC_0(VAR_6, 0, VAR_1, VAR_0);

 FUNC_6(VAR_6);
 FUNC_5(VAR_6);

 FUNC_4(VAR_6->card, "PCM1796");
 FUNC_4(VAR_6->card, "CS5381");
}
