
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxygen {int * dac_volume; struct generic_data* model_data; } ;
struct generic_data {unsigned int dacs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_2)
{
 struct generic_data *VAR_3 = VAR_2->model_data;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->dacs; ++VAR_4) {
  FUNC_0(VAR_2, VAR_4, VAR_0,
        VAR_2->dac_volume[VAR_4 * 2]);
  FUNC_0(VAR_2, VAR_4, VAR_1,
        VAR_2->dac_volume[VAR_4 * 2 + 1]);
 }
}
