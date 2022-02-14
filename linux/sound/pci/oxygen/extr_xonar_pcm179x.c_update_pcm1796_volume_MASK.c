
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {unsigned int dacs; int hp_gain_offset; scalar_t__ hp_active; } ;
struct oxygen {scalar_t__* dac_volume; struct xonar_pcm179x* model_data; } ;
typedef int s8 ;


 int FUNC_0 (struct oxygen*,unsigned int,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0)
{
 struct xonar_pcm179x *VAR_1 = VAR_0->model_data;
 unsigned int VAR_2;
 s8 VAR_3;

 VAR_3 = VAR_1->hp_active ? VAR_1->hp_gain_offset : 0;
 for (VAR_2 = 0; VAR_2 < VAR_1->dacs; ++VAR_2) {
  FUNC_0(VAR_0, VAR_2, 16, VAR_0->dac_volume[VAR_2 * 2]
         + VAR_3);
  FUNC_0(VAR_0, VAR_2, 17, VAR_0->dac_volume[VAR_2 * 2 + 1]
         + VAR_3);
  VAR_3 = 0;
 }
}
