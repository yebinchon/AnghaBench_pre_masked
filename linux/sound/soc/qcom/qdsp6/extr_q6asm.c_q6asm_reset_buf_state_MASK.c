
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_port_data {scalar_t__ dsp_buf; } ;
struct audio_client {int lock; struct audio_port_data* port; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct audio_client *VAR_2)
{
 struct audio_port_data *VAR_3 = ((void*)0);
 unsigned long VAR_4;

 FUNC_0(&VAR_2->lock, VAR_4);
 VAR_3 = &VAR_2->port[VAR_1];
 VAR_3->dsp_buf = 0;
 VAR_3 = &VAR_2->port[VAR_0];
 VAR_3->dsp_buf = 0;
 FUNC_1(&VAR_2->lock, VAR_4);
}
