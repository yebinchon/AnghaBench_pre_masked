
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_port_data {int * buf; scalar_t__ num_periods; } ;
struct audio_client {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct audio_client *VAR_0,
     struct audio_port_data *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_1->num_periods = 0;
 FUNC_0(VAR_1->buf);
 VAR_1->buf = ((void*)0);
 FUNC_2(&VAR_0->lock, VAR_2);
}
