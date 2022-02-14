
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xonar_cs43xx {size_t* cs4398_regs; } ;
struct oxygen {struct xonar_cs43xx* model_data; } ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int FUNC_1 (struct oxygen*,int ,size_t,size_t) ;

__attribute__((used)) static void FUNC_2(struct oxygen *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct xonar_cs43xx *VAR_4 = VAR_1->model_data;

 FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3);
 if (VAR_2 < FUNC_0(VAR_4->cs4398_regs))
  VAR_4->cs4398_regs[VAR_2] = VAR_3;
}
