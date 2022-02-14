
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct xonar_pcm179x {size_t** pcm1796_regs; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct oxygen*,unsigned int,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_1, unsigned int VAR_2,
     u8 VAR_3, u8 VAR_4)
{
 struct xonar_pcm179x *VAR_5 = VAR_1->model_data;

 if (VAR_4 != VAR_5->pcm1796_regs[VAR_2][VAR_3 - VAR_0])
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
