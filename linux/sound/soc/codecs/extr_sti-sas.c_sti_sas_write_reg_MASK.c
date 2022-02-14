
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regmap; } ;
struct sti_sas_data {TYPE_1__ dac; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 struct sti_sas_data *VAR_3 = VAR_0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->dac.regmap, VAR_1, VAR_2);

 return VAR_4;
}
