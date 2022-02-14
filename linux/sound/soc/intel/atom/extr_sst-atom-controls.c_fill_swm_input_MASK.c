
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u16 ;
struct swm_input_ids {int input_id; } ;
struct snd_soc_component {int dev; } ;


 unsigned int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ,int ) ;
 size_t VAR_2 ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 int FUNC_3 (int ,char*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_4,
  struct swm_input_ids *VAR_5, unsigned int VAR_6)
{
 uint VAR_7, VAR_8, VAR_9 = 0;
 u16 VAR_10;

 FUNC_2(VAR_4->dev, "reg: %#x\n", VAR_6);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = VAR_6 & FUNC_0(VAR_7);
  if (!VAR_8)
   continue;

  VAR_10 = VAR_3[VAR_7];
  FUNC_1(2, VAR_5->input_id,
         VAR_10, VAR_1);
  VAR_9++;
  VAR_5++;
  FUNC_2(VAR_4->dev, "input id: %#x, nb_inputs: %d\n",
    VAR_10, VAR_9);

  if (VAR_9 == VAR_0) {
   FUNC_3(VAR_4->dev, "SET_SWM cmd max inputs reached");
   break;
  }
 }
 return VAR_9;
}
