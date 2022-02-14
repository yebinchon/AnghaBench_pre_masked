
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_pcm179x {int** pcm1796_regs; int current_rate; unsigned int dacs; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct oxygen*,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_5)
{
 struct xonar_pcm179x *VAR_6 = VAR_5->model_data;
 unsigned int VAR_7;
 u8 VAR_8;

 VAR_8 = VAR_6->pcm1796_regs[0][18 - VAR_4] & ~VAR_3;
 if (VAR_6->current_rate == 48000)
  VAR_8 |= VAR_2;
 else if (VAR_6->current_rate == 44100)
  VAR_8 |= VAR_1;
 else if (VAR_6->current_rate == 32000)
  VAR_8 |= VAR_0;
 for (VAR_7 = 0; VAR_7 < VAR_6->dacs; ++VAR_7)
  FUNC_0(VAR_5, VAR_7, 18, VAR_8);
}
