
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_fw_async_midi_port {int error; int work; int * substream; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(struct snd_fw_async_midi_port *VAR_0)
{
 VAR_0->substream = ((void*)0);
 FUNC_0(&VAR_0->work);
 VAR_0->error = 0;
}
