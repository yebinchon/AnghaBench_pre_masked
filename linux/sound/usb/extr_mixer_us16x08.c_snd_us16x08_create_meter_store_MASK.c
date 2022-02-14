
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_us16x08_meter_store {int comp_index; scalar_t__ comp_active_index; } ;


 int VAR_0 ;
 struct snd_us16x08_meter_store* FUNC_0 (int,int ) ;

__attribute__((used)) static struct snd_us16x08_meter_store *FUNC_1(void)
{
 struct snd_us16x08_meter_store *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);
 VAR_1->comp_index = 1;
 VAR_1->comp_active_index = 0;
 return VAR_1;
}
