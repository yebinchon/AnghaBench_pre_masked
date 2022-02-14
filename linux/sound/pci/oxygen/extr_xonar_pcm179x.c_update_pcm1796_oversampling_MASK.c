
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xonar_pcm179x {int current_rate; unsigned int dacs; int h6; } ;
struct oxygen {struct xonar_pcm179x* model_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_2)
{
 struct xonar_pcm179x *VAR_3 = VAR_2->model_data;
 unsigned int VAR_4;
 u8 VAR_5;

 if (VAR_3->current_rate <= 48000 && !VAR_3->h6)
  VAR_5 = VAR_0;
 else
  VAR_5 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_3->dacs; ++VAR_4)
  FUNC_0(VAR_2, VAR_4, 20, VAR_5);
}
