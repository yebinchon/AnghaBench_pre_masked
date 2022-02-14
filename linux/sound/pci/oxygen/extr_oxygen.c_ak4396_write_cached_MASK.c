
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct oxygen {struct generic_data* model_data; } ;
struct generic_data {size_t** ak4396_regs; } ;


 int FUNC_0 (struct oxygen*,unsigned int,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0, unsigned int VAR_1,
    u8 VAR_2, u8 VAR_3)
{
 struct generic_data *VAR_4 = VAR_0->model_data;

 if (VAR_3 != VAR_4->ak4396_regs[VAR_1][VAR_2])
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
