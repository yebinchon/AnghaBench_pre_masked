
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xonar_cs43xx {size_t* cs4362a_regs; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 int FUNC_0 (struct oxygen*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct xonar_cs43xx *VAR_3 = VAR_0->model_data;

 if (VAR_2 != VAR_3->cs4362a_regs[VAR_1])
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
