
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xonar_pcm179x {int broken_i2c; } ;
struct oxygen {int card; struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct oxygen*) ;

__attribute__((used)) static int FUNC_2(struct oxygen *VAR_2)
{
 struct xonar_pcm179x *VAR_3 = VAR_2->model_data;
 int VAR_4;

 if (!VAR_3->broken_i2c) {
  VAR_4 = FUNC_0(VAR_2->card,
      FUNC_1(&VAR_1, VAR_2));
  if (VAR_4 < 0)
   return VAR_4;
  VAR_4 = FUNC_0(VAR_2->card,
      FUNC_1(&VAR_0, VAR_2));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
